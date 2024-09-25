#include "mainwindow_and_client.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QMainWindow* parent, Client* client)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , client(client)
{
    ui->setupUi(this);

    ui->Chatlist->setSelectionMode(QAbstractItemView::SingleSelection);

    ui->Create->setEnabled(false);
    ui->Join->setEnabled(false);
    ui->Message->setReadOnly(true);

    ui->Message->setFocus();
    QWidget::setTabOrder(ui->Message, ui->Identificator);

    ui->Label_Chatlist->setText(QString("Список чатов пользователя: %1:").arg(client->Get_Login()));

    client->SendToServer(QString("/g/%1/e/").arg(client->Get_Login()));

    connect(ui->Identificator, &QLineEdit::textEdited, this, &MainWindow::UpdateButtons);

    connect(client, &Client::getMessage, this, &MainWindow::Get_List);

    connect(ui->Create, &QPushButton::clicked, this, &MainWindow::Try_Create);
    connect(client, &Client::getMessage, this, &MainWindow::Create);

    connect(ui->Join, &QPushButton::clicked, this, &MainWindow::Try_Join);
    connect(client, &Client::getMessage, this, &MainWindow::Join);

    connect(ui->Chatlist, &QListWidget::itemSelectionChanged, this, &MainWindow::Try_Select);
    connect(client, &Client::getMessage, this, &MainWindow::Select);

    connect(ui->Message, &QLineEdit::returnPressed, this, &MainWindow::Send);
    connect(client, &Client::getMessage, this, &MainWindow::Get);

    connect(client, &Client::getMessage, this, &MainWindow::Error);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::UpdateButtons()
{
    if(ui->Identificator->text().isEmpty())
    {
        ui->Create->setEnabled(false);
        ui->Join->setEnabled(false);
    }
    else
    {
        ui->Create->setEnabled(true);
        ui->Join->setEnabled(true);
    }
}

void MainWindow::Get_List(QString List)
{
    if(List.startsWith("/g/"))
    {
        ui->Chatlist->clear();

        QRegularExpression regex("/g/(.*)/e/");
        QRegularExpressionMatch match = regex.match(List);
        List = match.captured(1);
        QVector<QString> Chats = List.split("//");

        for(QVector<QString>::ConstIterator cit = Chats.cbegin(); cit != Chats.cend(); ++cit)
        {
            ui->Chatlist->addItem(*cit);
        }
    }
}

void MainWindow::Try_Create()
{
    client->SendToServer(QString("/c/%1//%2/e/").arg(client->Get_Login(), ui->Identificator->text()));
}

void MainWindow::Create(QString Answer)
{
    if(Answer.startsWith("/c/"))
    {
        QRegularExpression regex("/c/(.*)/e/");
        QRegularExpressionMatch match = regex.match(Answer);
        Answer = match.captured(1);

        if(Answer == "success")
        {
            ui->Error->setText("Беседа успешно создана.");
            ui->Error->setStyleSheet("color: rgb(55, 250, 55)");
            client->SendToServer(QString("/g/%1/e/").arg(client->Get_Login()));
        }
        else
        {
            ui->Error->setText(Answer);
            ui->Error->setStyleSheet("color: rgb(250, 55, 55)");
        }
    }
}

void MainWindow::Try_Join()
{
    client->SendToServer(QString("/j/%1//%2/e/").arg(client->Get_Login(), ui->Identificator->text()));
}

void MainWindow::Join(QString Answer)
{
    if(Answer.startsWith("/j/"))
    {
        QRegularExpression regex("/j/(.*)/e/");
        QRegularExpressionMatch match = regex.match(Answer);
        Answer = match.captured(1);

        if(Answer == "success")
        {
            ui->Error->setText("Вы успешно добавлены в беседу.");
            ui->Error->setStyleSheet("color: rgb(55, 250, 55)");
            client->SendToServer(QString("/g/%1/e/").arg(client->Get_Login()));
        }
        else
        {
            ui->Error->setText(Answer);
            ui->Error->setStyleSheet("color: rgb(250, 55, 55)");
        }
    }
}

void MainWindow::Try_Select()
{
    ui->History->clear();
    if(!ui->Chatlist->selectedItems().isEmpty())
    {
        ui->Message->setReadOnly(false);
        client->Set_Active_Chat(ui->Chatlist->currentItem()->text());
        client->SendToServer(QString("/s/%1/e/").arg(client->Get_Active_Chat()));
    }
    else
        ui->Message->setReadOnly(true);
}

void MainWindow::Select(QString History)
{
    if(History.startsWith("/s/"))
    {
        QVector<QString> Messages = History.split("\n");

        for(QVector<QString>::ConstIterator cit = Messages.cbegin(); cit != Messages.cend(); ++cit)
        {
            QRegularExpression regex("/s/(.*)/e/");
            QRegularExpressionMatch match = regex.match(*cit);
            History = match.captured(1);
            ui->History->append(History);
        }

        QTextCursor cursor = ui->History->textCursor();
        cursor.movePosition(QTextCursor::End);
        ui->History->setTextCursor(cursor);
        cursor.deletePreviousChar();
    }
}

void MainWindow::Send()
{
    client->SendToServer(QString("/m/%1//%2//%3/e/").arg(client->Get_Login(), client->Get_Active_Chat(), ui->Message->text()));
    ui->Message->clear();
}

void MainWindow::Get(QString Message)
{
    if(Message.startsWith("/m/"))
    {
        QRegularExpression regex("/m/(.*)//(.*)/e/");
        QRegularExpressionMatch match = regex.match(Message);
        QString Chat = match.captured(1);
        Message = match.captured(2);

        if(Chat == client->Get_Active_Chat())
            ui->History->append(Message);
    }
}

void MainWindow::Error(QString Answer)
{
    if(Answer.startsWith("/e/"))
    {
        QRegularExpression regex("/e/(.*)/e/");
        QRegularExpressionMatch match = regex.match(Answer);
        Answer = match.captured(1);

        ui->Error->setText(Answer);
        ui->Error->setStyleSheet("color: rgb(250, 55, 55)");
    }
}
