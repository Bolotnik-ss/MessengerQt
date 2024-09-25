#include <QApplication>
#include "windows_login_and_regisration.h"

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    Client client;
    Window_Login w(nullptr, &client);
    w.show();
    return a.exec();
}
