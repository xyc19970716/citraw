/****************************************************************************
** Meta object code from reading C++ file 'graphics_breakpoints.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../citra/src/citra_qt/debugger/graphics/graphics_breakpoints.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphics_breakpoints.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GraphicsBreakPointsWidget_t {
    QByteArrayData data[14];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphicsBreakPointsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphicsBreakPointsWidget_t qt_meta_stringdata_GraphicsBreakPointsWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "GraphicsBreakPointsWidget"
QT_MOC_LITERAL(1, 26, 7), // "Resumed"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 13), // "BreakPointHit"
QT_MOC_LITERAL(4, 49, 25), // "Pica::DebugContext::Event"
QT_MOC_LITERAL(5, 75, 5), // "event"
QT_MOC_LITERAL(6, 81, 4), // "data"
QT_MOC_LITERAL(7, 86, 18), // "BreakPointsChanged"
QT_MOC_LITERAL(8, 105, 7), // "topLeft"
QT_MOC_LITERAL(9, 113, 11), // "bottomRight"
QT_MOC_LITERAL(10, 125, 15), // "OnBreakPointHit"
QT_MOC_LITERAL(11, 141, 19), // "OnItemDoubleClicked"
QT_MOC_LITERAL(12, 161, 17), // "OnResumeRequested"
QT_MOC_LITERAL(13, 179, 9) // "OnResumed"

    },
    "GraphicsBreakPointsWidget\0Resumed\0\0"
    "BreakPointHit\0Pica::DebugContext::Event\0"
    "event\0data\0BreakPointsChanged\0topLeft\0"
    "bottomRight\0OnBreakPointHit\0"
    "OnItemDoubleClicked\0OnResumeRequested\0"
    "OnResumed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphicsBreakPointsWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    2,   50,    2, 0x06 /* Public */,
       7,    2,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    2,   60,    2, 0x0a /* Public */,
      11,    1,   65,    2, 0x0a /* Public */,
      12,    0,   68,    2, 0x0a /* Public */,
      13,    0,   69,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::VoidStar,    5,    6,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    8,    9,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, QMetaType::VoidStar,    5,    6,
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GraphicsBreakPointsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GraphicsBreakPointsWidget *_t = static_cast<GraphicsBreakPointsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Resumed(); break;
        case 1: _t->BreakPointHit((*reinterpret_cast< Pica::DebugContext::Event(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 2: _t->BreakPointsChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 3: _t->OnBreakPointHit((*reinterpret_cast< Pica::DebugContext::Event(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 4: _t->OnItemDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->OnResumeRequested(); break;
        case 6: _t->OnResumed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GraphicsBreakPointsWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphicsBreakPointsWidget::Resumed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (GraphicsBreakPointsWidget::*_t)(Pica::DebugContext::Event , void * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphicsBreakPointsWidget::BreakPointHit)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (GraphicsBreakPointsWidget::*_t)(const QModelIndex & , const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphicsBreakPointsWidget::BreakPointsChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject GraphicsBreakPointsWidget::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_GraphicsBreakPointsWidget.data,
      qt_meta_data_GraphicsBreakPointsWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GraphicsBreakPointsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphicsBreakPointsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GraphicsBreakPointsWidget.stringdata0))
        return static_cast<void*>(const_cast< GraphicsBreakPointsWidget*>(this));
    if (!strcmp(_clname, "Pica::DebugContext::BreakPointObserver"))
        return static_cast< Pica::DebugContext::BreakPointObserver*>(const_cast< GraphicsBreakPointsWidget*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int GraphicsBreakPointsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void GraphicsBreakPointsWidget::Resumed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void GraphicsBreakPointsWidget::BreakPointHit(Pica::DebugContext::Event _t1, void * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GraphicsBreakPointsWidget::BreakPointsChanged(const QModelIndex & _t1, const QModelIndex & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
