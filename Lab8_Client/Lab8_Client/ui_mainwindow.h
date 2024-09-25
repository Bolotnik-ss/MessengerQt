/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *Form;
    QListWidget *Chatlist;
    QLabel *Label_Chatlist;
    QTextBrowser *History;
    QPushButton *Join;
    QLabel *Label_History;
    QPushButton *Create;
    QLabel *Label_Identificator;
    QLineEdit *Identificator;
    QLabel *Label_Message;
    QLineEdit *Message;
    QLabel *Error;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1352, 768);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 20, 1309, 717));
        Form = new QGridLayout(layoutWidget);
        Form->setObjectName("Form");
        Form->setContentsMargins(0, 0, 0, 0);
        Chatlist = new QListWidget(layoutWidget);
        Chatlist->setObjectName("Chatlist");
        Chatlist->setMinimumSize(QSize(500, 500));
        Chatlist->setMaximumSize(QSize(500, 500));
        QFont font;
        font.setPointSize(12);
        Chatlist->setFont(font);

        Form->addWidget(Chatlist, 1, 0, 1, 1);

        Label_Chatlist = new QLabel(layoutWidget);
        Label_Chatlist->setObjectName("Label_Chatlist");
        Label_Chatlist->setMinimumSize(QSize(0, 36));
        Label_Chatlist->setMaximumSize(QSize(16777215, 36));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        Label_Chatlist->setFont(font1);

        Form->addWidget(Label_Chatlist, 0, 0, 1, 1);

        History = new QTextBrowser(layoutWidget);
        History->setObjectName("History");
        History->setMinimumSize(QSize(800, 500));
        History->setMaximumSize(QSize(800, 500));
        History->setFont(font);

        Form->addWidget(History, 1, 1, 1, 1);

        Join = new QPushButton(layoutWidget);
        Join->setObjectName("Join");
        Join->setMinimumSize(QSize(0, 36));
        Join->setMaximumSize(QSize(16777215, 36));
        Join->setFont(font);

        Form->addWidget(Join, 5, 0, 1, 1);

        Label_History = new QLabel(layoutWidget);
        Label_History->setObjectName("Label_History");
        Label_History->setMinimumSize(QSize(0, 36));
        Label_History->setMaximumSize(QSize(16777215, 36));
        Label_History->setFont(font1);

        Form->addWidget(Label_History, 0, 1, 1, 1);

        Create = new QPushButton(layoutWidget);
        Create->setObjectName("Create");
        Create->setMinimumSize(QSize(0, 36));
        Create->setMaximumSize(QSize(16777215, 36));
        Create->setFont(font);

        Form->addWidget(Create, 4, 0, 1, 1);

        Label_Identificator = new QLabel(layoutWidget);
        Label_Identificator->setObjectName("Label_Identificator");
        Label_Identificator->setMinimumSize(QSize(0, 36));
        Label_Identificator->setMaximumSize(QSize(16777215, 36));
        Label_Identificator->setFont(font1);

        Form->addWidget(Label_Identificator, 2, 0, 1, 1);

        Identificator = new QLineEdit(layoutWidget);
        Identificator->setObjectName("Identificator");
        Identificator->setMinimumSize(QSize(499, 36));
        Identificator->setMaximumSize(QSize(499, 36));
        Identificator->setFont(font);

        Form->addWidget(Identificator, 3, 0, 1, 1);

        Label_Message = new QLabel(layoutWidget);
        Label_Message->setObjectName("Label_Message");
        Label_Message->setMinimumSize(QSize(0, 36));
        Label_Message->setMaximumSize(QSize(16777215, 36));
        Label_Message->setFont(font1);

        Form->addWidget(Label_Message, 2, 1, 1, 1);

        Message = new QLineEdit(layoutWidget);
        Message->setObjectName("Message");
        Message->setMinimumSize(QSize(799, 36));
        Message->setMaximumSize(QSize(799, 36));
        Message->setFont(font);

        Form->addWidget(Message, 3, 1, 1, 1);

        Error = new QLabel(layoutWidget);
        Error->setObjectName("Error");
        Error->setFont(font);
        Error->setWordWrap(true);

        Form->addWidget(Error, 4, 1, 2, 1, Qt::AlignHCenter|Qt::AlignTop);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Label_Chatlist->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \321\207\320\260\321\202\320\276\320\262:", nullptr));
        Join->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\321\201\320\276\320\265\320\264\320\265\320\275\320\270\321\202\321\214\321\201\321\217 \320\272 \321\201\321\203\321\211\320\265\321\201\321\202\320\262\321\203\321\216\321\211\320\265\320\274\321\203 \321\207\320\260\321\202\321\203", nullptr));
        Label_History->setText(QCoreApplication::translate("MainWindow", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\320\271:", nullptr));
        Create->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\275\320\276\320\262\321\213\320\271 \321\207\320\260\321\202", nullptr));
        Label_Identificator->setText(QCoreApplication::translate("MainWindow", "\320\230\320\264\320\265\320\275\321\202\320\265\321\204\320\270\320\272\320\260\321\202\320\276\321\200 \321\207\320\260\321\202\320\260:", nullptr));
        Label_Message->setText(QCoreApplication::translate("MainWindow", "\320\222\320\260\321\210\320\265 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\320\265:", nullptr));
        Error->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
