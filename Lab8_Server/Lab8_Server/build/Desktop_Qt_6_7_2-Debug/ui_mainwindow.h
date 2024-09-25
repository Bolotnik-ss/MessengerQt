/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QGridLayout *Form;
    QLabel *Label_IP_Address;
    QLabel *Label_Port;
    QLabel *Label_State;
    QLineEdit *IP_Address;
    QLineEdit *Port;
    QLineEdit *State;
    QHBoxLayout *Buttons;
    QPushButton *Deploy;
    QPushButton *Retract;
    QTextBrowser *Logs;
    QLabel *Label_Logs;
    QLabel *Label_Server;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(809, 758);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 20, 767, 719));
        Form = new QGridLayout(widget);
        Form->setObjectName("Form");
        Form->setContentsMargins(0, 0, 0, 0);
        Label_IP_Address = new QLabel(widget);
        Label_IP_Address->setObjectName("Label_IP_Address");
        Label_IP_Address->setMinimumSize(QSize(0, 36));
        Label_IP_Address->setMaximumSize(QSize(16777215, 36));
        QFont font;
        font.setPointSize(12);
        Label_IP_Address->setFont(font);

        Form->addWidget(Label_IP_Address, 1, 0, 1, 1);

        Label_Port = new QLabel(widget);
        Label_Port->setObjectName("Label_Port");
        Label_Port->setMinimumSize(QSize(0, 36));
        Label_Port->setMaximumSize(QSize(16777215, 36));
        Label_Port->setFont(font);

        Form->addWidget(Label_Port, 1, 1, 1, 1);

        Label_State = new QLabel(widget);
        Label_State->setObjectName("Label_State");
        Label_State->setMinimumSize(QSize(0, 36));
        Label_State->setMaximumSize(QSize(16777215, 36));
        Label_State->setFont(font);

        Form->addWidget(Label_State, 1, 2, 1, 1);

        IP_Address = new QLineEdit(widget);
        IP_Address->setObjectName("IP_Address");
        IP_Address->setMinimumSize(QSize(250, 36));
        IP_Address->setMaximumSize(QSize(250, 36));
        IP_Address->setFont(font);
        IP_Address->setReadOnly(true);

        Form->addWidget(IP_Address, 2, 0, 1, 1);

        Port = new QLineEdit(widget);
        Port->setObjectName("Port");
        Port->setMinimumSize(QSize(249, 36));
        Port->setMaximumSize(QSize(249, 36));
        Port->setFont(font);

        Form->addWidget(Port, 2, 1, 1, 1);

        State = new QLineEdit(widget);
        State->setObjectName("State");
        State->setMinimumSize(QSize(250, 36));
        State->setMaximumSize(QSize(250, 36));
        State->setFont(font);
        State->setReadOnly(true);

        Form->addWidget(State, 2, 2, 1, 1);

        Buttons = new QHBoxLayout();
        Buttons->setObjectName("Buttons");
        Deploy = new QPushButton(widget);
        Deploy->setObjectName("Deploy");
        Deploy->setMinimumSize(QSize(0, 36));
        Deploy->setMaximumSize(QSize(16777215, 36));
        Deploy->setFont(font);

        Buttons->addWidget(Deploy);

        Retract = new QPushButton(widget);
        Retract->setObjectName("Retract");
        Retract->setMinimumSize(QSize(0, 36));
        Retract->setMaximumSize(QSize(16777215, 36));
        Retract->setFont(font);

        Buttons->addWidget(Retract);


        Form->addLayout(Buttons, 3, 0, 1, 3);

        Logs = new QTextBrowser(widget);
        Logs->setObjectName("Logs");
        Logs->setMinimumSize(QSize(0, 500));
        Logs->setMaximumSize(QSize(16777215, 500));
        Logs->setFont(font);

        Form->addWidget(Logs, 5, 0, 1, 3);

        Label_Logs = new QLabel(widget);
        Label_Logs->setObjectName("Label_Logs");
        Label_Logs->setMinimumSize(QSize(0, 36));
        Label_Logs->setMaximumSize(QSize(16777215, 36));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        Label_Logs->setFont(font1);

        Form->addWidget(Label_Logs, 4, 0, 1, 3, Qt::AlignHCenter);

        Label_Server = new QLabel(widget);
        Label_Server->setObjectName("Label_Server");
        Label_Server->setMinimumSize(QSize(0, 36));
        Label_Server->setMaximumSize(QSize(16777215, 36));
        Label_Server->setFont(font1);

        Form->addWidget(Label_Server, 0, 0, 1, 3, Qt::AlignHCenter);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\201\320\265\321\200\320\262\320\265\321\200\320\276\320\274", nullptr));
        Label_IP_Address->setText(QCoreApplication::translate("MainWindow", "\320\222\320\260\321\210 IP-\320\260\320\264\321\200\320\265\321\201:", nullptr));
        Label_Port->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\200\321\202:", nullptr));
        Label_State->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \321\201\320\265\321\200\320\262\320\265\321\200\320\260:", nullptr));
        IP_Address->setText(QString());
        State->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\265\320\275", nullptr));
        Deploy->setText(QCoreApplication::translate("MainWindow", "\320\222\320\272\320\273\321\216\321\207\320\270\321\202\321\214", nullptr));
        Retract->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\270\321\202\321\214", nullptr));
        Label_Logs->setText(QCoreApplication::translate("MainWindow", "\320\233\320\276\320\263\320\270:", nullptr));
        Label_Server->setText(QCoreApplication::translate("MainWindow", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\201\320\265\321\200\320\262\320\265\321\200\320\276\320\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
