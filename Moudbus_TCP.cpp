#include "Moudbus_TCP.h"
#include"qdebug.h"
#include<QVariant>
welding_machine::welding_machine(QObject *parent)
    : QObject{parent}
{
    moveToThread(thread);
     thread->start();
}
bool welding_machine::connect_to_modbus(QString IP_address, int Port)
{
    if(!PC_client){
        return false;
    }
    if (PC_client->state() != QModbusDevice::ConnectedState) {       //判断当前连接状态是否为断开状态
        //配置modbus tcp的连接参数 IP + Port   modbus协议的端口号为502
       PC_client->setConnectionParameter(QModbusDevice::NetworkAddressParameter,QVariant(IP_address));
       PC_client->setConnectionParameter(QModbusDevice::NetworkPortParameter,QVariant(Port));
        if (!PC_client->connectDevice()) {
            qDebug()<< "连接modbus设备失败";
            return false;
        }
        else {
            qDebug()<< "成功连接到modbs设备";
            return true;
        }
    }
    else {
       PC_client->disconnectDevice();
       qDebug()<< "成功断开modbs设备";
       return false;
    }
}

void welding_machine::onStateChanged()
{
    if(PC_client->state() == QModbusDevice::ConnectedState)
    {
        emit statechange_on();
    }

    else {
        emit statechange_off();
    }
}

bool welding_machine::read_modbus_tcp_Coils(int start_add, quint16 numbers, int Server_ID)
{
    if (!PC_client->state() == QModbusDevice::ConnectedState)
    {
        return false;
    }
    QModbusDataUnit ReadUnit(QModbusDataUnit::Coils,start_add,numbers);
    qDebug()<< "配置ReadUnit完成";
    if (auto *reply = PC_client->sendReadRequest(ReadUnit, Server_ID))     //1是Server_ID
    {
        if (!reply->isFinished())
        {  qDebug()<< "准备进行信号与槽连接";
            QObject::connect(reply, &QModbusReply::finished,this,&welding_machine::ReadReady_Coils);
            qDebug()<<"进入读取的槽函数 ";
            return true;
        }
        else
        {
            qDebug()<< "提前delete reply";
            delete reply;
            return false;
        }
    }
    else
    {
        qDebug()<< "提前退出";
        return false;
    }
}

void welding_machine::ReadReady_Coils()
{
    qDebug()<< "开始执行槽函数";
    QModbusReply *reply = qobject_cast<QModbusReply *>(sender());
    if (!reply){
        qDebug()<< "提前退出";
        return ;
    }
    if (reply->error() == QModbusDevice::NoError)
    {   qDebug()<< "接收数据";
        const QModbusDataUnit unit = reply->result();
        for(uint16_t i=0; i< unit.valueCount(); i++)
        {

            uint16_t res=unit.value(i);            //一个一个读
            Coils_Bufer[i] = static_cast<uint8_t>(res);
            //读完将数据存储起来  Coils_Bufer[i] 自定的数组 用来存放数据
        }
    }
    else
    {
    }
    reply->deleteLater(); // delete the reply
    emit readC_finished();    //coils读取完成后emit 读取完成的信号；

}

bool welding_machine::read_modbus_tcp_HoldingRegisters(int start_add, quint16 numbers, int Server_ID)
{
    QModbusDataUnit ReadUnit(QModbusDataUnit::HoldingRegisters,start_add,numbers);

    if (auto *reply = PC_client->sendReadRequest(ReadUnit, Server_ID))     //1是Server_ID
    {
        if (!reply->isFinished())
        {
            QObject::connect(reply, &QModbusReply::finished,this,&welding_machine::ReadReady_HoldingRegisters);
            return true;
        }
        else
        {
            delete reply;
            return false;
        }
    }
    return false;
}

void welding_machine::ReadReady_HoldingRegisters()
{
    QModbusReply *reply = qobject_cast<QModbusReply *>(sender());
    if (!reply){
        return ;
    }
    if (reply->error() == QModbusDevice::NoError)
    {
        const QModbusDataUnit unit = reply->result();

        for(uint16_t i=0; i< unit.valueCount(); )
        {
            uint16_t res=unit.value(i);
            Holding_Bufer[i] = static_cast<uint8_t>(res);
            i++;
        }
    }
    else
    {
    }
    reply->deleteLater(); // delete the reply
    emit readH_finished();        //自定义的信号
}

bool welding_machine::read_modbus_tcp_InputRegisters(int start_add, quint16 numbers, int Server_ID)
{
    QModbusDataUnit ReadUnit(QModbusDataUnit::InputRegisters,start_add,numbers);

    if (auto *reply = PC_client->sendReadRequest(ReadUnit, Server_ID))     //1是Server_ID
    {
        if (!reply->isFinished())
        {
            QObject::connect(reply, &QModbusReply::finished,this,&welding_machine::ReadReady_InputRegisters);
            return true;
        }
        else
        {
            delete reply;
            return false;
        }
    }
    return false;
}

void welding_machine::ReadReady_InputRegisters()
{
    QModbusReply *reply = qobject_cast<QModbusReply *>(sender());
    if (!reply){
        return ;
    }
    if (reply->error() == QModbusDevice::NoError)
    {
        const QModbusDataUnit unit = reply->result();

        for(uint16_t i=0; i< unit.valueCount(); )
        {
            uint16_t res=unit.value(i);
            Input_Bufer[i] = static_cast<uint8_t>(res);
            i++;
        }
    }
    else
    {
    }
    reply->deleteLater(); // delete the reply
    emit readI_finished();        //自定义的信号
}

bool welding_machine::read_modbus_tcp_InputStatus(int start_add, quint16 numbers, int Server_ID)
{
    if (!PC_client->state() == QModbusDevice::ConnectedState)
    {
        return false;
    }
    QModbusDataUnit ReadUnit(QModbusDataUnit::DiscreteInputs,start_add,numbers);
    qDebug()<< "配置ReadUnit完成";
    if (auto *reply = PC_client->sendReadRequest(ReadUnit, Server_ID))     //1是Server_ID
    {
        if (!reply->isFinished())
        {  qDebug()<< "准备进行信号与槽连接";
            QObject::connect(reply, &QModbusReply::finished,this,&welding_machine::ReadReady_InputStatus);
            qDebug()<<"进入读取的槽函数 ";
            return true;
        }
        else
        {
            qDebug()<< "提前delete reply";
            delete reply;
            return false;
        }
    }
    else
    {
        qDebug()<< "提前退出";
        return false;
    }
}

void welding_machine::ReadReady_InputStatus()
{
    qDebug()<< "开始执行槽函数";
    QModbusReply *reply = qobject_cast<QModbusReply *>(sender());
    if (!reply){
        qDebug()<< "提前退出";
        return ;    }
    if (reply->error() == QModbusDevice::NoError)
    {   qDebug()<< "接收数据";
        const QModbusDataUnit unit = reply->result();
        for(uint16_t i=0; i< unit.valueCount(); i++)
        {
            uint16_t res=unit.value(i);            //一个一个读
            InputStatus_Bufer[i] = static_cast<uint8_t>(res);
            //读完将数据存储起来  Coils_Bufer[i] 自定的数组 用来存放数据
        }
    }
    else
    {
    }
    reply->deleteLater(); // delete the reply
    emit readIS_finished();    //coils读取完成后emit 读取完成的信号；
}

bool welding_machine::write_modbus_tcp_HoldingRegisters(QString str1, int star_add, int number,int Server_ID)
{
    qDebug()<< "准备写holding数据：：";
    QByteArray str2 = QByteArray::fromHex (str1.toLatin1().data());//按十六进制编码接入文本
    QString str3 = str2.toHex().data();//以十六进制显示
    quint16 number1 = static_cast<quint16>(number);
    QModbusDataUnit writeUnit(QModbusDataUnit::HoldingRegisters,star_add,number1);
    int j1 = 0;
    for (uint i1 = 0; i1 < writeUnit.valueCount(); i1++) {
        if(i1 == 0){
            j1 = static_cast<int>(2*i1);
        }
        else {
            j1 = j1+3;
        }
        QString stt = str1.mid (j1,2);
        bool ok;
        quint16 hex1 =static_cast<quint16>(stt.toInt(&ok,16));//将textedit中读取到的数据转换为16进制发送
        writeUnit.setValue(static_cast<int>(i1),hex1);//设置发送数据
    }

    if (auto *reply = PC_client->sendWriteRequest(writeUnit, Server_ID))
        {// ui->spinBox_SerAddress->value()是server address   sendWriteRequest是向服务器写数据
            if (!reply->isFinished())
            {   //reply Returns true when the reply has finished or was aborted.
                connect(reply, &QModbusReply::finished, this, [this, reply]()
                        {
                            if (reply->error() == QModbusDevice::ProtocolError)
                                {
                                    qDebug() << (tr("Write response error: %1 (Mobus exception: 0x%2)").arg(reply->errorString()).arg(reply->rawResult().exceptionCode(), -1, 16),5000);
                                }
                            else if (reply->error() != QModbusDevice::NoError)
                                {
                                    qDebug()<< (tr("Write response error: %1 (code: 0x%2)").arg(reply->errorString()).arg(reply->error(), -1, 16), 5000);
                                }
                        reply->deleteLater();
                        });
            }
            else
            {
                // broadcast replies return immediately
                reply->deleteLater();
            }
        }
    else
        {
        qDebug() << (tr("Write error: ") + PC_client->errorString(), 5000);
        return false;
        }
    return true;
}

bool welding_machine::write_modbus_tcp_Coils(QString str1, int star_add, int number ,int Server_ID)
{
    quint16 number1 = static_cast<quint16>(number); //C++中的数据类型转换
    QModbusDataUnit writeUnit(QModbusDataUnit::Coils,star_add,number1);
    for (uint i1 = 0; i1 < writeUnit.valueCount(); i1++) {
        int j1 = 2*i1;
        QString stt = str1.mid (j1,1);
        bool ok;
        quint16 hex1 =stt.toInt(&ok,16);//将textedit中读取到的数据转换为16进制发送
        writeUnit.setValue(i1,hex1);//设置发送数据
    }
    if (auto *reply = PC_client->sendWriteRequest(writeUnit, Server_ID)) {// ui->spinBox_SerAddress->value()是server address   sendWriteRequest是向服务器写数据
        if (!reply->isFinished())
        {   //reply Returns true when the reply has finished or was aborted.
            connect(reply, &QModbusReply::finished, this, [this, reply]() {
                if (reply->error() == QModbusDevice::ProtocolError)
                {
                    qDebug() << (tr("Write response error: %1 (Mobus exception: 0x%2)")
                                     .arg(reply->errorString()).arg(reply->rawResult().exceptionCode(), -1, 16),
                                 5000);
                }
                else if (reply->error() != QModbusDevice::NoError)
                {
                    qDebug()<< (tr("Write response error: %1 (code: 0x%2)").
                                 arg(reply->errorString()).arg(reply->error(), -1, 16), 5000);
                }
                reply->deleteLater();
            });
        }
        else
        {
            // broadcast replies return immediately
            reply->deleteLater();
        }
    }
    else
    {
        qDebug() << (tr("Write error: ") + PC_client->errorString(), 5000);
        return false;
    }
    return true;
}

welding_machine::~welding_machine()

{
    thread->wait();
    thread->quit();
    delete thread;
}

