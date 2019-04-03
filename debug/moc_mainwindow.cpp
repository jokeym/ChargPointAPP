/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[19];
    char stringdata0[403];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 17), // "NewConnectionSlot"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 16), // "disconnectedSlot"
QT_MOC_LITERAL(4, 47, 9), // "Read_Data"
QT_MOC_LITERAL(5, 57, 26), // "on_pushButton_Open_clicked"
QT_MOC_LITERAL(6, 84, 27), // "on_pushButton_Clean_clicked"
QT_MOC_LITERAL(7, 112, 26), // "on_pushButton_Send_clicked"
QT_MOC_LITERAL(8, 139, 9), // "DecodeMsg"
QT_MOC_LITERAL(9, 149, 15), // "updateDateSlots"
QT_MOC_LITERAL(10, 165, 31), // "on_pushButton_CreateKey_clicked"
QT_MOC_LITERAL(11, 197, 28), // "on_checkBox_KMS_stateChanged"
QT_MOC_LITERAL(12, 226, 4), // "arg1"
QT_MOC_LITERAL(13, 231, 30), // "on_pushButton_TCP_Open_clicked"
QT_MOC_LITERAL(14, 262, 30), // "on_pushButton_TCP_Send_clicked"
QT_MOC_LITERAL(15, 293, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(16, 315, 31), // "on_pushButton_heartbeat_clicked"
QT_MOC_LITERAL(17, 347, 27), // "on_pushButton_GetSN_clicked"
QT_MOC_LITERAL(18, 375, 27) // "on_pushButton_SetSN_clicked"

    },
    "MainWindow\0NewConnectionSlot\0\0"
    "disconnectedSlot\0Read_Data\0"
    "on_pushButton_Open_clicked\0"
    "on_pushButton_Clean_clicked\0"
    "on_pushButton_Send_clicked\0DecodeMsg\0"
    "updateDateSlots\0on_pushButton_CreateKey_clicked\0"
    "on_checkBox_KMS_stateChanged\0arg1\0"
    "on_pushButton_TCP_Open_clicked\0"
    "on_pushButton_TCP_Send_clicked\0"
    "on_pushButton_clicked\0"
    "on_pushButton_heartbeat_clicked\0"
    "on_pushButton_GetSN_clicked\0"
    "on_pushButton_SetSN_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    0,   97,    2, 0x08 /* Private */,
       6,    0,   98,    2, 0x08 /* Private */,
       7,    0,   99,    2, 0x08 /* Private */,
       8,    0,  100,    2, 0x08 /* Private */,
       9,    0,  101,    2, 0x08 /* Private */,
      10,    0,  102,    2, 0x08 /* Private */,
      11,    1,  103,    2, 0x08 /* Private */,
      13,    0,  106,    2, 0x08 /* Private */,
      14,    0,  107,    2, 0x08 /* Private */,
      15,    0,  108,    2, 0x08 /* Private */,
      16,    0,  109,    2, 0x08 /* Private */,
      17,    0,  110,    2, 0x08 /* Private */,
      18,    0,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->NewConnectionSlot(); break;
        case 1: _t->disconnectedSlot(); break;
        case 2: _t->Read_Data(); break;
        case 3: _t->on_pushButton_Open_clicked(); break;
        case 4: _t->on_pushButton_Clean_clicked(); break;
        case 5: _t->on_pushButton_Send_clicked(); break;
        case 6: _t->DecodeMsg(); break;
        case 7: _t->updateDateSlots(); break;
        case 8: _t->on_pushButton_CreateKey_clicked(); break;
        case 9: _t->on_checkBox_KMS_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_pushButton_TCP_Open_clicked(); break;
        case 11: _t->on_pushButton_TCP_Send_clicked(); break;
        case 12: _t->on_pushButton_clicked(); break;
        case 13: _t->on_pushButton_heartbeat_clicked(); break;
        case 14: _t->on_pushButton_GetSN_clicked(); break;
        case 15: _t->on_pushButton_SetSN_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
