/****************************************************************************
** Meta object code from reading C++ file 'windows_login_and_regisration.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Lab8_Client/windows_login_and_regisration.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windows_login_and_regisration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSWindow_LoginENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSWindow_LoginENDCLASS = QtMocHelpers::stringData(
    "Window_Login",
    "Show_Password",
    "",
    "Update_Button",
    "Registration_Window",
    "Log_In",
    "Connection_Error",
    "Answer"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSWindow_LoginENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[13];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[20];
    char stringdata5[7];
    char stringdata6[17];
    char stringdata7[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSWindow_LoginENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSWindow_LoginENDCLASS_t qt_meta_stringdata_CLASSWindow_LoginENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "Window_Login"
        QT_MOC_LITERAL(13, 13),  // "Show_Password"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 13),  // "Update_Button"
        QT_MOC_LITERAL(42, 19),  // "Registration_Window"
        QT_MOC_LITERAL(62, 6),  // "Log_In"
        QT_MOC_LITERAL(69, 16),  // "Connection_Error"
        QT_MOC_LITERAL(86, 6)   // "Answer"
    },
    "Window_Login",
    "Show_Password",
    "",
    "Update_Button",
    "Registration_Window",
    "Log_In",
    "Connection_Error",
    "Answer"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSWindow_LoginENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    1,   55,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject Window_Login::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSWindow_LoginENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSWindow_LoginENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSWindow_LoginENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Window_Login, std::true_type>,
        // method 'Show_Password'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Update_Button'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Registration_Window'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Log_In'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Connection_Error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Answer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void Window_Login::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Window_Login *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Show_Password(); break;
        case 1: _t->Update_Button(); break;
        case 2: _t->Registration_Window(); break;
        case 3: _t->Log_In(); break;
        case 4: _t->Connection_Error(); break;
        case 5: _t->Answer((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *Window_Login::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Window_Login::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSWindow_LoginENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Window_Login::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSWindow_RegistrationENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSWindow_RegistrationENDCLASS = QtMocHelpers::stringData(
    "Window_Registration",
    "Show_Password",
    "",
    "Update_Button",
    "Login_Window",
    "Sign_Up",
    "Answer",
    "Connection_Error"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSWindow_RegistrationENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[20];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[13];
    char stringdata5[8];
    char stringdata6[7];
    char stringdata7[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSWindow_RegistrationENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSWindow_RegistrationENDCLASS_t qt_meta_stringdata_CLASSWindow_RegistrationENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "Window_Registration"
        QT_MOC_LITERAL(20, 13),  // "Show_Password"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 13),  // "Update_Button"
        QT_MOC_LITERAL(49, 12),  // "Login_Window"
        QT_MOC_LITERAL(62, 7),  // "Sign_Up"
        QT_MOC_LITERAL(70, 6),  // "Answer"
        QT_MOC_LITERAL(77, 16)   // "Connection_Error"
    },
    "Window_Registration",
    "Show_Password",
    "",
    "Update_Button",
    "Login_Window",
    "Sign_Up",
    "Answer",
    "Connection_Error"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSWindow_RegistrationENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    1,   54,    2, 0x08,    5 /* Private */,
       7,    0,   57,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Window_Registration::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSWindow_RegistrationENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSWindow_RegistrationENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSWindow_RegistrationENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Window_Registration, std::true_type>,
        // method 'Show_Password'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Update_Button'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Login_Window'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Sign_Up'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Answer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'Connection_Error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Window_Registration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Window_Registration *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Show_Password(); break;
        case 1: _t->Update_Button(); break;
        case 2: _t->Login_Window(); break;
        case 3: _t->Sign_Up(); break;
        case 4: _t->Answer((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->Connection_Error(); break;
        default: ;
        }
    }
}

const QMetaObject *Window_Registration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Window_Registration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSWindow_RegistrationENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Window_Registration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
