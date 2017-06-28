/****************************************************************************
** Meta object code from reading C++ file 'graphics_breakpoint_observer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../citra/src/citra_qt/debugger/graphics/graphics_breakpoint_observer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphics_breakpoint_observer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BreakPointObserverDock_t {
    QByteArrayData data[9];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BreakPointObserverDock_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BreakPointObserverDock_t qt_meta_stringdata_BreakPointObserverDock = {
    {
QT_MOC_LITERAL(0, 0, 22), // "BreakPointObserverDock"
QT_MOC_LITERAL(1, 23, 7), // "Resumed"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 13), // "BreakPointHit"
QT_MOC_LITERAL(4, 46, 25), // "Pica::DebugContext::Event"
QT_MOC_LITERAL(5, 72, 5), // "event"
QT_MOC_LITERAL(6, 78, 4), // "data"
QT_MOC_LITERAL(7, 83, 15), // "OnBreakPointHit"
QT_MOC_LITERAL(8, 99, 9) // "OnResumed"

    },
    "BreakPointObserverDock\0Resumed\0\0"
    "BreakPointHit\0Pica::DebugContext::Event\0"
    "event\0data\0OnBreakPointHit\0OnResumed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BreakPointObserverDock[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    2,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   40,    2, 0x08 /* Private */,
       8,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::VoidStar,    5,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, QMetaType::VoidStar,    5,    6,
    QMetaType::Void,

       0        // eod
};

void BreakPointObserverDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BreakPointObserverDock *_t = static_cast<BreakPointObserverDock *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Resumed(); break;
        case 1: _t->BreakPointHit((*reinterpret_cast< Pica::DebugContext::Event(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 2: _t->OnBreakPointHit((*reinterpret_cast< Pica::DebugContext::Event(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 3: _t->OnResumed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BreakPointObserverDock::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BreakPointObserverDock::Resumed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BreakPointObserverDock::*_t)(Pica::DebugContext::Event , void * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BreakPointObserverDock::BreakPointHit)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject BreakPointObserverDock::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_BreakPointObserverDock.data,
      qt_meta_data_BreakPointObserverDock,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BreakPointObserverDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BreakPointObserverDock::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BreakPointObserverDock.stringdata0))
        return static_cast<void*>(const_cast< BreakPointObserverDock*>(this));
    if (!strcmp(_clname, "Pica::DebugContext::BreakPointObserver"))
        return static_cast< Pica::DebugContext::BreakPointObserver*>(const_cast< BreakPointObserverDock*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int BreakPointObserverDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void BreakPointObserverDock::Resumed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void BreakPointObserverDock::BreakPointHit(Pica::DebugContext::Event _t1, void * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
