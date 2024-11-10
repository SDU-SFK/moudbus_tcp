/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit_H_ID;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *lineEdit_H_add;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *lineEdit_H_number;
    QHBoxLayout *horizontalLayout_6;
    QTextEdit *textEdit_write_h;
    QTextEdit *textEdit_read_h;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_H_write;
    QPushButton *pushButton_H_read;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_10;
    QLineEdit *lineEdit_I_ID;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_11;
    QLineEdit *lineEdit__I_add;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_9;
    QLineEdit *lineEdit_I_number;
    QTextEdit *textEdit_read_i;
    QPushButton *pushButton_I_read;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineEdit_ip;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *lineEdit_port;
    QPushButton *pushButton_connect;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLineEdit *lineEdit_C_ID;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QLineEdit *lineEdit_C_add;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_8;
    QLineEdit *lineEdit_C_number;
    QHBoxLayout *horizontalLayout_11;
    QTextEdit *textEdit_write_c;
    QTextEdit *textEdit_read_c;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *pushButton_C_write;
    QPushButton *pushButton_C_read;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_12;
    QLineEdit *lineEdit_I_ID_2;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_13;
    QLineEdit *lineEdit__I_add_2;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_14;
    QLineEdit *lineEdit_I_number_2;
    QTextEdit *textEdit_read_i_2;
    QPushButton *pushButton_I_read_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(888, 680);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(390, 320, 471, 301));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(groupBox_2);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        lineEdit_H_ID = new QLineEdit(groupBox_2);
        lineEdit_H_ID->setObjectName("lineEdit_H_ID");
        lineEdit_H_ID->setMinimumSize(QSize(53, 0));

        horizontalLayout_3->addWidget(lineEdit_H_ID);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");

        horizontalLayout_4->addWidget(label_2);

        lineEdit_H_add = new QLineEdit(groupBox_2);
        lineEdit_H_add->setObjectName("lineEdit_H_add");

        horizontalLayout_4->addWidget(lineEdit_H_add);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");

        horizontalLayout_5->addWidget(label_3);

        lineEdit_H_number = new QLineEdit(groupBox_2);
        lineEdit_H_number->setObjectName("lineEdit_H_number");

        horizontalLayout_5->addWidget(lineEdit_H_number);


        verticalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        textEdit_write_h = new QTextEdit(groupBox_2);
        textEdit_write_h->setObjectName("textEdit_write_h");

        horizontalLayout_6->addWidget(textEdit_write_h);

        textEdit_read_h = new QTextEdit(groupBox_2);
        textEdit_read_h->setObjectName("textEdit_read_h");

        horizontalLayout_6->addWidget(textEdit_read_h);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        pushButton_H_write = new QPushButton(groupBox_2);
        pushButton_H_write->setObjectName("pushButton_H_write");

        horizontalLayout_7->addWidget(pushButton_H_write);

        pushButton_H_read = new QPushButton(groupBox_2);
        pushButton_H_read->setObjectName("pushButton_H_read");

        horizontalLayout_7->addWidget(pushButton_H_read);


        verticalLayout_3->addLayout(horizontalLayout_7);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(30, 120, 301, 251));
        verticalLayout_6 = new QVBoxLayout(groupBox_3);
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName("label_10");

        horizontalLayout_15->addWidget(label_10);

        lineEdit_I_ID = new QLineEdit(groupBox_3);
        lineEdit_I_ID->setObjectName("lineEdit_I_ID");
        lineEdit_I_ID->setMinimumSize(QSize(53, 0));

        horizontalLayout_15->addWidget(lineEdit_I_ID);


        verticalLayout_6->addLayout(horizontalLayout_15);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName("label_11");

        horizontalLayout_14->addWidget(label_11);

        lineEdit__I_add = new QLineEdit(groupBox_3);
        lineEdit__I_add->setObjectName("lineEdit__I_add");

        horizontalLayout_14->addWidget(lineEdit__I_add);


        verticalLayout_6->addLayout(horizontalLayout_14);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName("label_9");

        horizontalLayout_13->addWidget(label_9);

        lineEdit_I_number = new QLineEdit(groupBox_3);
        lineEdit_I_number->setObjectName("lineEdit_I_number");

        horizontalLayout_13->addWidget(lineEdit_I_number);


        verticalLayout_6->addLayout(horizontalLayout_13);

        textEdit_read_i = new QTextEdit(groupBox_3);
        textEdit_read_i->setObjectName("textEdit_read_i");

        verticalLayout_6->addWidget(textEdit_read_i);

        pushButton_I_read = new QPushButton(groupBox_3);
        pushButton_I_read->setObjectName("pushButton_I_read");

        verticalLayout_6->addWidget(pushButton_I_read);

        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(30, 10, 311, 111));
        verticalLayout = new QVBoxLayout(groupBox_4);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        lineEdit_ip = new QLineEdit(groupBox_4);
        lineEdit_ip->setObjectName("lineEdit_ip");

        horizontalLayout->addWidget(lineEdit_ip);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName("label_5");

        horizontalLayout_2->addWidget(label_5);

        lineEdit_port = new QLineEdit(groupBox_4);
        lineEdit_port->setObjectName("lineEdit_port");

        horizontalLayout_2->addWidget(lineEdit_port);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton_connect = new QPushButton(groupBox_4);
        pushButton_connect->setObjectName("pushButton_connect");

        verticalLayout->addWidget(pushButton_connect);

        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(390, 10, 471, 301));
        verticalLayout_4 = new QVBoxLayout(groupBox_5);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName("label_6");

        horizontalLayout_8->addWidget(label_6);

        lineEdit_C_ID = new QLineEdit(groupBox_5);
        lineEdit_C_ID->setObjectName("lineEdit_C_ID");
        lineEdit_C_ID->setMinimumSize(QSize(53, 0));

        horizontalLayout_8->addWidget(lineEdit_C_ID);


        verticalLayout_5->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName("label_7");

        horizontalLayout_9->addWidget(label_7);

        lineEdit_C_add = new QLineEdit(groupBox_5);
        lineEdit_C_add->setObjectName("lineEdit_C_add");

        horizontalLayout_9->addWidget(lineEdit_C_add);


        verticalLayout_5->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName("label_8");

        horizontalLayout_10->addWidget(label_8);

        lineEdit_C_number = new QLineEdit(groupBox_5);
        lineEdit_C_number->setObjectName("lineEdit_C_number");

        horizontalLayout_10->addWidget(lineEdit_C_number);


        verticalLayout_5->addLayout(horizontalLayout_10);


        verticalLayout_4->addLayout(verticalLayout_5);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        textEdit_write_c = new QTextEdit(groupBox_5);
        textEdit_write_c->setObjectName("textEdit_write_c");

        horizontalLayout_11->addWidget(textEdit_write_c);

        textEdit_read_c = new QTextEdit(groupBox_5);
        textEdit_read_c->setObjectName("textEdit_read_c");

        horizontalLayout_11->addWidget(textEdit_read_c);


        verticalLayout_4->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        pushButton_C_write = new QPushButton(groupBox_5);
        pushButton_C_write->setObjectName("pushButton_C_write");

        horizontalLayout_12->addWidget(pushButton_C_write);

        pushButton_C_read = new QPushButton(groupBox_5);
        pushButton_C_read->setObjectName("pushButton_C_read");

        horizontalLayout_12->addWidget(pushButton_C_read);


        verticalLayout_4->addLayout(horizontalLayout_12);

        groupBox_6 = new QGroupBox(centralwidget);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setGeometry(QRect(30, 370, 301, 251));
        verticalLayout_7 = new QVBoxLayout(groupBox_6);
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        label_12 = new QLabel(groupBox_6);
        label_12->setObjectName("label_12");

        horizontalLayout_16->addWidget(label_12);

        lineEdit_I_ID_2 = new QLineEdit(groupBox_6);
        lineEdit_I_ID_2->setObjectName("lineEdit_I_ID_2");
        lineEdit_I_ID_2->setMinimumSize(QSize(53, 0));

        horizontalLayout_16->addWidget(lineEdit_I_ID_2);


        verticalLayout_7->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        label_13 = new QLabel(groupBox_6);
        label_13->setObjectName("label_13");

        horizontalLayout_17->addWidget(label_13);

        lineEdit__I_add_2 = new QLineEdit(groupBox_6);
        lineEdit__I_add_2->setObjectName("lineEdit__I_add_2");

        horizontalLayout_17->addWidget(lineEdit__I_add_2);


        verticalLayout_7->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        label_14 = new QLabel(groupBox_6);
        label_14->setObjectName("label_14");

        horizontalLayout_18->addWidget(label_14);

        lineEdit_I_number_2 = new QLineEdit(groupBox_6);
        lineEdit_I_number_2->setObjectName("lineEdit_I_number_2");

        horizontalLayout_18->addWidget(lineEdit_I_number_2);


        verticalLayout_7->addLayout(horizontalLayout_18);

        textEdit_read_i_2 = new QTextEdit(groupBox_6);
        textEdit_read_i_2->setObjectName("textEdit_read_i_2");

        verticalLayout_7->addWidget(textEdit_read_i_2);

        pushButton_I_read_2 = new QPushButton(groupBox_6);
        pushButton_I_read_2->setObjectName("pushButton_I_read_2");

        verticalLayout_7->addWidget(pushButton_I_read_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 888, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\344\277\235\346\214\201\345\257\204\345\255\230\345\231\250", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", " \350\256\276\345\244\207ID\357\274\232", nullptr));
        lineEdit_H_ID->setText(QCoreApplication::translate("MainWindow", "04", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\234\260\345\235\200\357\274\232", nullptr));
        lineEdit_H_add->setText(QCoreApplication::translate("MainWindow", "00", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\257\204\345\255\230\345\231\250\344\270\252\346\225\260", nullptr));
        lineEdit_H_number->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        textEdit_write_h->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9.75pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">11 11</p></body></html>", nullptr));
        pushButton_H_write->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        pushButton_H_read->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\217\226", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\345\257\204\345\255\230\345\231\250", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", " \350\256\276\345\244\207ID\357\274\232", nullptr));
        lineEdit_I_ID->setText(QCoreApplication::translate("MainWindow", "02", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\234\260\345\235\200\357\274\232", nullptr));
        lineEdit__I_add->setText(QCoreApplication::translate("MainWindow", "00", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\345\257\204\345\255\230\345\231\250\344\270\252\346\225\260", nullptr));
        lineEdit_I_number->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_I_read->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\217\226", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\351\223\276\346\216\245", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "IP\345\234\260\345\235\200", nullptr));
        lineEdit_ip->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\347\253\257\345\217\243\345\217\267", nullptr));
        lineEdit_port->setText(QCoreApplication::translate("MainWindow", "502", nullptr));
        pushButton_connect->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "\347\272\277\345\234\210", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", " \350\256\276\345\244\207ID\357\274\232", nullptr));
        lineEdit_C_ID->setText(QCoreApplication::translate("MainWindow", "01", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\234\260\345\235\200\357\274\232", nullptr));
        lineEdit_C_add->setText(QCoreApplication::translate("MainWindow", "00", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\345\257\204\345\255\230\345\231\250\344\270\252\346\225\260", nullptr));
        lineEdit_C_number->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        textEdit_write_c->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9.75pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">FF00</p></body></html>", nullptr));
        pushButton_C_write->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        pushButton_C_read->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\217\226", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\347\212\266\346\200\201", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", " \350\256\276\345\244\207ID\357\274\232", nullptr));
        lineEdit_I_ID_2->setText(QCoreApplication::translate("MainWindow", "03", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\234\260\345\235\200\357\274\232", nullptr));
        lineEdit__I_add_2->setText(QCoreApplication::translate("MainWindow", "00", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\345\257\204\345\255\230\345\231\250\344\270\252\346\225\260", nullptr));
        lineEdit_I_number_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_I_read_2->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\217\226", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
