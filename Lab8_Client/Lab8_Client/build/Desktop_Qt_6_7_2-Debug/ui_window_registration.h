/********************************************************************************
** Form generated from reading UI file 'window_registration.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_REGISTRATION_H
#define UI_WINDOW_REGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window_Registration
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *Label_Server_Data;
    QPushButton *Login_Window;
    QLineEdit *Login;
    QLabel *Label_Login;
    QLineEdit *Port;
    QLabel *Label_Login_Window;
    QLabel *Label_IP_Address;
    QLabel *Label_Password;
    QLabel *Label_Port;
    QLineEdit *Reply_Password;
    QLabel *Label_Registration;
    QLabel *Label_Reply_Password;
    QLabel *Error;
    QLabel *Label_User_Data;
    QLineEdit *Password;
    QPushButton *Sign_Up;
    QLineEdit *IP_Address;
    QCheckBox *Show_Password;

    void setupUi(QWidget *Window_Registration)
    {
        if (Window_Registration->objectName().isEmpty())
            Window_Registration->setObjectName("Window_Registration");
        Window_Registration->resize(476, 619);
        layoutWidget = new QWidget(Window_Registration);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 20, 435, 573));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Label_Server_Data = new QLabel(layoutWidget);
        Label_Server_Data->setObjectName("Label_Server_Data");
        Label_Server_Data->setMinimumSize(QSize(0, 27));
        Label_Server_Data->setMaximumSize(QSize(16777215, 36));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        Label_Server_Data->setFont(font);

        gridLayout->addWidget(Label_Server_Data, 6, 0, 1, 2, Qt::AlignHCenter);

        Login_Window = new QPushButton(layoutWidget);
        Login_Window->setObjectName("Login_Window");
        Login_Window->setMinimumSize(QSize(0, 27));
        Login_Window->setMaximumSize(QSize(16777215, 36));
        Login_Window->setFont(font);

        gridLayout->addWidget(Login_Window, 11, 0, 1, 2);

        Login = new QLineEdit(layoutWidget);
        Login->setObjectName("Login");
        Login->setMinimumSize(QSize(251, 36));
        Login->setMaximumSize(QSize(251, 36));
        QFont font1;
        font1.setPointSize(12);
        Login->setFont(font1);

        gridLayout->addWidget(Login, 2, 1, 1, 1);

        Label_Login = new QLabel(layoutWidget);
        Label_Login->setObjectName("Label_Login");
        Label_Login->setMinimumSize(QSize(0, 36));
        Label_Login->setMaximumSize(QSize(16777215, 36));
        Label_Login->setFont(font1);

        gridLayout->addWidget(Label_Login, 2, 0, 1, 1);

        Port = new QLineEdit(layoutWidget);
        Port->setObjectName("Port");
        Port->setMinimumSize(QSize(251, 36));
        Port->setMaximumSize(QSize(251, 36));
        Port->setFont(font1);

        gridLayout->addWidget(Port, 8, 1, 1, 1);

        Label_Login_Window = new QLabel(layoutWidget);
        Label_Login_Window->setObjectName("Label_Login_Window");
        Label_Login_Window->setMinimumSize(QSize(0, 27));
        Label_Login_Window->setMaximumSize(QSize(16777215, 36));
        Label_Login_Window->setFont(font1);

        gridLayout->addWidget(Label_Login_Window, 10, 0, 1, 2, Qt::AlignHCenter);

        Label_IP_Address = new QLabel(layoutWidget);
        Label_IP_Address->setObjectName("Label_IP_Address");
        Label_IP_Address->setMinimumSize(QSize(0, 27));
        Label_IP_Address->setMaximumSize(QSize(16777215, 36));
        Label_IP_Address->setFont(font1);

        gridLayout->addWidget(Label_IP_Address, 7, 0, 1, 1);

        Label_Password = new QLabel(layoutWidget);
        Label_Password->setObjectName("Label_Password");
        Label_Password->setMinimumSize(QSize(0, 36));
        Label_Password->setMaximumSize(QSize(16777215, 36));
        Label_Password->setFont(font1);

        gridLayout->addWidget(Label_Password, 3, 0, 1, 1);

        Label_Port = new QLabel(layoutWidget);
        Label_Port->setObjectName("Label_Port");
        Label_Port->setMinimumSize(QSize(0, 27));
        Label_Port->setMaximumSize(QSize(16777215, 36));
        Label_Port->setFont(font1);

        gridLayout->addWidget(Label_Port, 8, 0, 1, 1);

        Reply_Password = new QLineEdit(layoutWidget);
        Reply_Password->setObjectName("Reply_Password");
        Reply_Password->setMinimumSize(QSize(251, 36));
        Reply_Password->setMaximumSize(QSize(251, 36));
        Reply_Password->setFont(font1);

        gridLayout->addWidget(Reply_Password, 4, 1, 1, 1);

        Label_Registration = new QLabel(layoutWidget);
        Label_Registration->setObjectName("Label_Registration");
        Label_Registration->setMinimumSize(QSize(0, 27));
        Label_Registration->setMaximumSize(QSize(16777215, 36));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        Label_Registration->setFont(font2);

        gridLayout->addWidget(Label_Registration, 0, 0, 1, 2, Qt::AlignHCenter);

        Label_Reply_Password = new QLabel(layoutWidget);
        Label_Reply_Password->setObjectName("Label_Reply_Password");
        Label_Reply_Password->setMinimumSize(QSize(0, 36));
        Label_Reply_Password->setMaximumSize(QSize(16777215, 36));
        Label_Reply_Password->setFont(font1);

        gridLayout->addWidget(Label_Reply_Password, 4, 0, 1, 1);

        Error = new QLabel(layoutWidget);
        Error->setObjectName("Error");
        Error->setMinimumSize(QSize(0, 90));
        Error->setMaximumSize(QSize(16777215, 90));
        Error->setFont(font1);
        Error->setWordWrap(true);

        gridLayout->addWidget(Error, 12, 0, 1, 2, Qt::AlignHCenter|Qt::AlignTop);

        Label_User_Data = new QLabel(layoutWidget);
        Label_User_Data->setObjectName("Label_User_Data");
        Label_User_Data->setMinimumSize(QSize(0, 27));
        Label_User_Data->setMaximumSize(QSize(16777215, 36));
        Label_User_Data->setFont(font);

        gridLayout->addWidget(Label_User_Data, 1, 0, 1, 2, Qt::AlignHCenter);

        Password = new QLineEdit(layoutWidget);
        Password->setObjectName("Password");
        Password->setMinimumSize(QSize(251, 36));
        Password->setMaximumSize(QSize(251, 36));
        Password->setFont(font1);

        gridLayout->addWidget(Password, 3, 1, 1, 1);

        Sign_Up = new QPushButton(layoutWidget);
        Sign_Up->setObjectName("Sign_Up");
        Sign_Up->setMinimumSize(QSize(0, 27));
        Sign_Up->setMaximumSize(QSize(16777215, 36));
        Sign_Up->setFont(font);

        gridLayout->addWidget(Sign_Up, 9, 0, 1, 2);

        IP_Address = new QLineEdit(layoutWidget);
        IP_Address->setObjectName("IP_Address");
        IP_Address->setMinimumSize(QSize(251, 36));
        IP_Address->setMaximumSize(QSize(251, 36));
        IP_Address->setFont(font1);

        gridLayout->addWidget(IP_Address, 7, 1, 1, 1);

        Show_Password = new QCheckBox(layoutWidget);
        Show_Password->setObjectName("Show_Password");
        Show_Password->setMinimumSize(QSize(0, 27));
        Show_Password->setMaximumSize(QSize(16777215, 36));
        Show_Password->setFont(font1);

        gridLayout->addWidget(Show_Password, 5, 1, 1, 1);


        retranslateUi(Window_Registration);

        QMetaObject::connectSlotsByName(Window_Registration);
    } // setupUi

    void retranslateUi(QWidget *Window_Registration)
    {
        Window_Registration->setWindowTitle(QCoreApplication::translate("Window_Registration", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        Label_Server_Data->setText(QCoreApplication::translate("Window_Registration", "\320\224\320\260\320\275\320\275\321\213\320\265 \321\201\320\265\321\200\320\262\320\265\321\200\320\260", nullptr));
        Login_Window->setText(QCoreApplication::translate("Window_Registration", "\320\222\321\205\320\276\320\264", nullptr));
        Label_Login->setText(QCoreApplication::translate("Window_Registration", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        Label_Login_Window->setText(QCoreApplication::translate("Window_Registration", "\320\243\320\266\320\265 \320\265\321\201\321\202\321\214 \321\203\321\207\320\265\321\202\320\275\320\260\321\217 \320\267\320\260\320\277\320\270\321\201\321\214?", nullptr));
        Label_IP_Address->setText(QCoreApplication::translate("Window_Registration", "IP-\320\260\320\264\321\200\320\265\321\201:", nullptr));
        Label_Password->setText(QCoreApplication::translate("Window_Registration", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        Label_Port->setText(QCoreApplication::translate("Window_Registration", "\320\237\320\276\321\200\321\202:", nullptr));
        Label_Registration->setText(QCoreApplication::translate("Window_Registration", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        Label_Reply_Password->setText(QCoreApplication::translate("Window_Registration", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214:", nullptr));
        Error->setText(QString());
        Label_User_Data->setText(QCoreApplication::translate("Window_Registration", "\320\224\320\260\320\275\320\275\321\213\320\265 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        Sign_Up->setText(QCoreApplication::translate("Window_Registration", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        Show_Password->setText(QCoreApplication::translate("Window_Registration", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window_Registration: public Ui_Window_Registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_REGISTRATION_H
