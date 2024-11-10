#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_connect_clicked()
{
    IP_address =ui->lineEdit_ip->text();
    port = ui->lineEdit_port->text().toInt();
    weld->connect_to_modbus(IP_address,port);
}

void MainWindow::on_pushButton_C_write_clicked()
{
    write_str_c= ui->textEdit_write_c->toPlainText();
    start_add_C = ui->lineEdit_C_add->text().toInt();
    numbers_C= ui->lineEdit_C_number->text().toInt();
    sever_ID_C = ui->lineEdit_C_ID->text().toInt();
    weld->write_modbus_tcp_Coils(write_str_c,start_add_C,numbers_C,sever_ID_C);
}

void MainWindow::on_pushButton_C_read_clicked()
{   
    start_add_C = ui->lineEdit_C_add->text().toInt();
    numbers_C= ui->lineEdit_C_number->text().toInt();
    sever_ID_C = ui->lineEdit_C_ID->text().toInt();
    weld->read_modbus_tcp_Coils(start_add_C,numbers_C,sever_ID_C);//
    ui->textEdit_read_c->setText(str);
    connect(weld,&welding_machine::readC_finished,this, [this](){
        for (int i = 0; i < numbers_C; ++i)
        {
            str += QString("%1 ").arg(static_cast<unsigned int>(weld->Coils_Bufer[i]), 2, 16, QLatin1Char('0')).toUpper();
        }
        ui->textEdit_read_c->setText(str);
        str="";
    });

}

void MainWindow::on_pushButton_I_read_clicked()
{   
    start_add_I = ui->lineEdit__I_add->text().toInt();
    numbers_I= ui->lineEdit_I_number->text().toInt();
    sever_ID_I = ui->lineEdit_I_ID->text().toInt();
    weld->read_modbus_tcp_InputRegisters(start_add_I,numbers_I,sever_ID_I);//
    ui->textEdit_read_i->setText(str);
    connect(weld,&welding_machine::readI_finished,this, [this](){
        for (int i = 0; i < numbers_I; ++i)
        {
            str += QString("%1 ").arg(static_cast<unsigned int>(weld->Input_Bufer[i]), 2, 16, QLatin1Char('0')).toUpper();
        }
        ui->textEdit_read_i->setText(str);
        str="";
    });

}

void MainWindow::on_pushButton_H_write_clicked()
{
    write_str_h= ui->textEdit_write_h->toPlainText();
    start_add_H = ui->lineEdit_H_add->text().toInt();
    numbers_H= ui->lineEdit_H_number->text().toInt();
    sever_ID_H = ui->lineEdit_H_ID->text().toInt();
    weld->write_modbus_tcp_HoldingRegisters(write_str_h,start_add_H,numbers_H,sever_ID_H);
}

void MainWindow::on_pushButton_H_read_clicked()
{    
    start_add_H = ui->lineEdit_H_add->text().toInt();
    numbers_H= ui->lineEdit_H_number->text().toInt();
    sever_ID_H = ui->lineEdit_H_ID->text().toInt();
    weld->read_modbus_tcp_HoldingRegisters(start_add_H,numbers_H,sever_ID_H);//
    ui->textEdit_read_h->setText(str);
    connect(weld,&welding_machine::readH_finished,this, [this](){
        for (int i = 0; i < numbers_H; ++i)
        {
            str += QString("%1 ").arg(static_cast<unsigned int>(weld->Holding_Bufer[i]), 2, 16, QLatin1Char('0')).toUpper();
        }
        ui->textEdit_read_h->setText(str);
        str="";
    });
}

void MainWindow::on_pushButton_I_read_2_clicked()
{
    start_add_I_2 = ui->lineEdit__I_add_2->text().toInt();
    numbers_I_2= ui->lineEdit_I_number_2->text().toInt();
    sever_ID_I_2 = ui->lineEdit_I_ID_2->text().toInt();
    weld->read_modbus_tcp_InputStatus(start_add_I_2,numbers_I_2,sever_ID_I_2);//
    ui->textEdit_read_i_2->setText(str);
    connect(weld,&welding_machine::readIS_finished,this, [this](){
        for (int i = 0; i < numbers_I_2; ++i)
        {
            str += QString("%1 ").arg(static_cast<unsigned int>(weld->InputStatus_Bufer[i]), 2, 16, QLatin1Char('0')).toUpper();
        }
        ui->textEdit_read_i_2->setText(str);
        str="";
    });
}

