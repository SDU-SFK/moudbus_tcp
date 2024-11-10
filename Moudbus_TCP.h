#ifndef MOUDBUS_TCP_H
#define MOUDBUS_TCP_H
#include <QModbusTcpClient>
#include <QModbusDataUnit>
#include <QModbusReply>
#include <QObject>
#include <QSharedPointer>
#include <QWeakPointer>
#include <QThread>
class welding_machine : public QObject
{
    Q_OBJECT
public:
    explicit welding_machine(QObject *parent = nullptr);
    QModbusTcpClient *PC_client= new QModbusTcpClient();
    bool connect_to_modbus(QString IP_address,int Port);//链接moudbus TCP端口
    void onStateChanged();//监听TCP连接的状态，若状态发生改变，发出对应的信号
    bool read_modbus_tcp_Coils(int start_add,quint16 numbers,int Server_ID);//读取线圈 起始地址，读取个数，设备ID
    void ReadReady_Coils();//接收到读取请求后执行的槽函数
    bool read_modbus_tcp_HoldingRegisters(int start_add,quint16 numbers ,int Server_ID);//读取保持寄存器 起始地址，读取个数，设备ID
    void ReadReady_HoldingRegisters();//接收到读取请求后执行的槽函数
    bool read_modbus_tcp_InputRegisters(int start_add,quint16 numbers ,int Server_ID);
    void ReadReady_InputRegisters();
    bool read_modbus_tcp_InputStatus(int start_add,quint16 numbers ,int Server_ID);//读取状态量
    void ReadReady_InputStatus();//读取状态量
    bool write_modbus_tcp_HoldingRegisters(QString str1,int star_add,int number,int Server_ID);//写入保持寄存器
    bool write_modbus_tcp_Coils(QString str1,int star_add,int number,int Server_ID);//写入线圈
    // QByteArray  AllData_C;
    // QByteArray  AllData_H;
    // QByteArray  AllData_I;
    // QString str_C="";
    // QString str_H="";
    // QString str_I="";
    QThread* thread = new QThread;
     ~welding_machine();
     uint8_t Input_Bufer[64];
     uint8_t Coils_Bufer[64] ;
     uint8_t Holding_Bufer[64] ;
     uint8_t InputStatus_Bufer[64] ;
private:
signals:
    void statechange_on();
    void statechange_off();
    void readH_finished();
    void readC_finished();
    void readI_finished();
    void readIS_finished();
};

#endif // MOUDBUS_TCP_H
