#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"Moudbus_TCP.h"
#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);    
    ~MainWindow();
    welding_machine* weld = new welding_machine;
    QString IP_address = "127.0.0.1";
    int port = 502;
    int start_add_C = 01;
    int start_add_H = 01;
    int start_add_I = 01;
    int start_add_I_2 = 01;
    quint16 numbers_C = 01;
    quint16 numbers_H = 01;
    quint16 numbers_I = 01;
    quint16 numbers_I_2 = 01;
    int sever_ID_C= 01;
    int sever_ID_H= 01;
    int sever_ID_I= 01;
    int sever_ID_I_2= 01;
    QString write_str_c="";
    QString write_str_h="";
    QString read_str_c="";
    QString read_str_h="";
    QString read_str_i="";
    QString read_str_i_2="";
    QString str;



private slots:
    void on_pushButton_connect_clicked();

    void on_pushButton_C_write_clicked();

    void on_pushButton_C_read_clicked();

    void on_pushButton_I_read_clicked();

    void on_pushButton_H_write_clicked();

    void on_pushButton_H_read_clicked();

    void on_pushButton_I_read_2_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
