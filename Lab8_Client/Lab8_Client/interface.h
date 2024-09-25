#ifndef INTERFACE_H
#define INTERFACE_H

#include <QLineEdit>

class Interface
{
public:
    Interface(){};
    static void Show(QLineEdit* LineEdit, bool& Is_Hidden)
    {
        if(Is_Hidden)
        {
            LineEdit->setEchoMode(QLineEdit::Normal);
            Is_Hidden = false;
        }
        else
        {
            LineEdit->setEchoMode(QLineEdit::Password);
            Is_Hidden = true;
        }
    }
};

#endif // INTERFACE_H
