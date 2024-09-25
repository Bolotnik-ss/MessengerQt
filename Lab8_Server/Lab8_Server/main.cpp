#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QHash<QString, User_Info>* Users = new QHash<QString, User_Info>();
    QHash<QString, Abstract_Chat_Info*>* Chats = new  QHash<QString, Abstract_Chat_Info*>();
    Database_Fasade* Database = new Database_Fasade(Users, Chats);
    Server server(Database);
    MainWindow w(nullptr, &server);
    w.show();
    return a.exec();
}
