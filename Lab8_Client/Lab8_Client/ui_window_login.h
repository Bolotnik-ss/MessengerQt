/********************************************************************************
** Form generated from reading UI file 'window_login.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_LOGIN_H
#define UI_WINDOW_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window_Login
{
public:
    QWidget *widget;
    QGridLayout *Form;
    QLabel *Label_Log_In;
    QLabel *Label_IP_Address;
    QPushButton *Log_In;
    QLineEdit *IP_Address;
    QLabel *Label_User_Data;
    QLineEdit *Login;
    QPushButton *Registration_Window;
    QLabel *Label_Registration_Window;
    QLineEdit *Password;
    QLabel *Label_Server_Data;
    QLineEdit *Port;
    QLabel *Label_Port;
    QLabel *Label_Login;
    QLabel *Error;
    QLabel *Label_Password;
    QCheckBox *Show_Password;

    void setupUi(QWidget *Window_Login)
    {
        if (Window_Login->objectName().isEmpty())
            Window_Login->setObjectName("Window_Login");
        Window_Login->resize(381, 612);
        widget = new QWidget(Window_Login);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 20, 340, 565));
        Form = new QGridLayout(widget);
        Form->setObjectName("Form");
        Form->setContentsMargins(0, 0, 0, 0);
        Label_Log_In = new QLabel(widget);
        Label_Log_In->setObjectName("Label_Log_In");
        Label_Log_In->setMinimumSize(QSize(0, 36));
        Label_Log_In->setMaximumSize(QSize(16777215, 36));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        Label_Log_In->setFont(font);

        Form->addWidget(Label_Log_In, 0, 0, 1, 3, Qt::AlignHCenter);

        Label_IP_Address = new QLabel(widget);
        Label_IP_Address->setObjectName("Label_IP_Address");
        Label_IP_Address->setMinimumSize(QSize(0, 36));
        Label_IP_Address->setMaximumSize(QSize(16777215, 36));
        QFont font1;
        font1.setPointSize(12);
        Label_IP_Address->setFont(font1);

        Form->addWidget(Label_IP_Address, 6, 0, 1, 1);

        Log_In = new QPushButton(widget);
        Log_In->setObjectName("Log_In");
        Log_In->setMinimumSize(QSize(0, 36));
        Log_In->setMaximumSize(QSize(16777215, 36));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        Log_In->setFont(font2);

        Form->addWidget(Log_In, 8, 0, 1, 3);

        IP_Address = new QLineEdit(widget);
        IP_Address->setObjectName("IP_Address");
        IP_Address->setMinimumSize(QSize(251, 36));
        IP_Address->setMaximumSize(QSize(250, 36));
        IP_Address->setFont(font1);

        Form->addWidget(IP_Address, 6, 1, 1, 2);

        Label_User_Data = new QLabel(widget);
        Label_User_Data->setObjectName("Label_User_Data");
        Label_User_Data->setMinimumSize(QSize(0, 36));
        Label_User_Data->setMaximumSize(QSize(16777215, 36));
        Label_User_Data->setFont(font2);

        Form->addWidget(Label_User_Data, 1, 0, 1, 3, Qt::AlignHCenter);

        Login = new QLineEdit(widget);
        Login->setObjectName("Login");
        Login->setMinimumSize(QSize(251, 36));
        Login->setMaximumSize(QSize(250, 36));
        Login->setFont(font1);

        Form->addWidget(Login, 2, 1, 1, 2);

        Registration_Window = new QPushButton(widget);
        Registration_Window->setObjectName("Registration_Window");
        Registration_Window->setMinimumSize(QSize(0, 36));
        Registration_Window->setMaximumSize(QSize(16777215, 36));
        Registration_Window->setFont(font2);

        Form->addWidget(Registration_Window, 10, 0, 1, 3);

        Label_Registration_Window = new QLabel(widget);
        Label_Registration_Window->setObjectName("Label_Registration_Window");
        Label_Registration_Window->setMinimumSize(QSize(0, 36));
        Label_Registration_Window->setMaximumSize(QSize(16777215, 36));
        Label_Registration_Window->setFont(font1);

        Form->addWidget(Label_Registration_Window, 9, 0, 1, 3, Qt::AlignHCenter);

        Password = new QLineEdit(widget);
        Password->setObjectName("Password");
        Password->setMinimumSize(QSize(251, 36));
        Password->setMaximumSize(QSize(250, 36));
        Password->setFont(font1);

        Form->addWidget(Password, 3, 1, 1, 2);

        Label_Server_Data = new QLabel(widget);
        Label_Server_Data->setObjectName("Label_Server_Data");
        Label_Server_Data->setMinimumSize(QSize(0, 36));
        Label_Server_Data->setMaximumSize(QSize(16777215, 36));
        Label_Server_Data->setFont(font2);

        Form->addWidget(Label_Server_Data, 5, 0, 1, 3, Qt::AlignHCenter);

        Port = new QLineEdit(widget);
        Port->setObjectName("Port");
        Port->setMinimumSize(QSize(251, 36));
        Port->setMaximumSize(QSize(250, 36));
        Port->setFont(font1);

        Form->addWidget(Port, 7, 1, 1, 2);

        Label_Port = new QLabel(widget);
        Label_Port->setObjectName("Label_Port");
        Label_Port->setMinimumSize(QSize(0, 36));
        Label_Port->setMaximumSize(QSize(16777215, 36));
        Label_Port->setFont(font1);

        Form->addWidget(Label_Port, 7, 0, 1, 1);

        Label_Login = new QLabel(widget);
        Label_Login->setObjectName("Label_Login");
        Label_Login->setMinimumSize(QSize(0, 36));
        Label_Login->setMaximumSize(QSize(16777215, 36));
        Label_Login->setFont(font1);

        Form->addWidget(Label_Login, 2, 0, 1, 1);

        Error = new QLabel(widget);
        Error->setObjectName("Error");
        Error->setMinimumSize(QSize(0, 90));
        Error->setMaximumSize(QSize(16777215, 90));
        Error->setFont(font1);
        Error->setWordWrap(true);

        Form->addWidget(Error, 11, 0, 1, 3, Qt::AlignHCenter|Qt::AlignTop);

        Label_Password = new QLabel(widget);
        Label_Password->setObjectName("Label_Password");
        Label_Password->setMinimumSize(QSize(0, 36));
        Label_Password->setMaximumSize(QSize(16777215, 36));
        Label_Password->setFont(font1);

        Form->addWidget(Label_Password, 3, 0, 1, 1);

        Show_Password = new QCheckBox(widget);
        Show_Password->setObjectName("Show_Password");
        Show_Password->setMinimumSize(QSize(0, 36));
        Show_Password->setMaximumSize(QSize(16777215, 36));
        Show_Password->setFont(font1);

        Form->addWidget(Show_Password, 4, 1, 1, 2);


        retranslateUi(Window_Login);

        QMetaObject::connectSlotsByName(Window_Login);
    } // setupUi

    void retranslateUi(QWidget *Window_Login)
    {
        Window_Login->setWindowTitle(QCoreApplication::translate("Window_Login", "\320\222\321\205\320\276\320\264", nullptr));
        Label_Log_In->setText(QCoreApplication::translate("Window_Login", "\320\222\321\205\320\276\320\264", nullptr));
        Label_IP_Address->setText(QCoreApplication::translate("Window_Login", "IP-\320\260\320\264\321\200\320\265\321\201:", nullptr));
        Log_In->setText(QCoreApplication::translate("Window_Login", "\320\222\321\205\320\276\320\264", nullptr));
        Label_User_Data->setText(QCoreApplication::translate("Window_Login", "\320\224\320\260\320\275\320\275\321\213\320\265 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        Registration_Window->setText(QCoreApplication::translate("Window_Login", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        Label_Registration_Window->setText(QCoreApplication::translate("Window_Login", "\320\225\321\211\321\221 \320\275\320\265\321\202 \321\203\321\207\320\265\321\202\320\275\320\276\320\271 \320\267\320\260\320\277\320\270\321\201\320\270?", nullptr));
        Label_Server_Data->setText(QCoreApplication::translate("Window_Login", "\320\224\320\260\320\275\320\275\321\213\320\265 \321\201\320\265\321\200\320\262\320\265\321\200\320\260", nullptr));
        Label_Port->setText(QCoreApplication::translate("Window_Login", "\320\237\320\276\321\200\321\202:", nullptr));
        Label_Login->setText(QCoreApplication::translate("Window_Login", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        Error->setText(QString());
        Label_Password->setText(QCoreApplication::translate("Window_Login", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        Show_Password->setText(QCoreApplication::translate("Window_Login", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window_Login: public Ui_Window_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_LOGIN_H
