/****************************************************************************
** Meta object code from reading C++ file 'registers.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../citra/src/citra_qt/debugger/registers.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'registers.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RegistersWidget_t {
    QByteArrayData data[8];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RegistersWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RegistersWidget_t qt_meta_stringdata_RegistersWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "RegistersWidget"
QT_MOC_LITERAL(1, 16, 18), // "OnDebugModeEntered"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 15), // "OnDebugModeLeft"
QT_MOC_LITERAL(4, 52, 19), // "OnEmulationStarting"
QT_MOC_LITERAL(5, 72, 10), // "EmuThread*"
QT_MOC_LITERAL(6, 83, 10), // "emu_thread"
QT_MOC_LITERAL(7, 94, 19) // "OnEmulationStopping"

    },
    "RegistersWidget\0OnDebugModeEntered\0\0"
    "OnDebugModeLeft\0OnEmulationStarting\0"
    "EmuThread*\0emu_thread\0OnEmulationStopping"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RegistersWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    1,   36,    2, 0x0a /* Public */,
       7,    0,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

       0        // eod
};

void RegistersWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RegistersWidget *_t = static_cast<RegistersWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnDebugModeEntered(); break;
        case 1: _t->OnDebugModeLeft(); break;
        case 2: _t->OnEmulationStarting((*reinterpret_cast< EmuThread*(*)>(_a[1]))); break;
        case 3: _t->OnEmulationStopping(); break;
        default: ;
        }
    }
}

const QMetaObject RegistersWidget::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_RegistersWidget.data,
      qt_meta_data_RegistersWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RegistersWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RegistersWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RegistersWidget.stringdata0))
        return static_cast<void*>(const_cast< RegistersWidget*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int RegistersWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
