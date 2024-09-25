#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QIntValidator>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QEventLoop>
#include "server.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr, Server* server = nullptr);
    ~MainWindow();


private slots:
    void Update_Buttons();
    void Try_Deploy();
    void Deploy();
    void Try_Retract();
    void Retract();
    void Write_Log(QString);

private:
    Ui::MainWindow *ui;
    bool Is_Key_Hidden;
    bool State;
    Server* server;

};
#endif // MAINWINDOW_H
