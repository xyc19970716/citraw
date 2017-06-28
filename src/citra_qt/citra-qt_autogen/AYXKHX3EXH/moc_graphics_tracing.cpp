/****************************************************************************
** Meta object code from reading C++ file 'graphics_tracing.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../citra/src/citra_qt/debugger/graphics/graphics_tracing.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphics_tracing.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GraphicsTracingWidget_t {
    QByteArrayData data[14];
    char stringdata0[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphicsTracingWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphicsTracingWidget_t qt_meta_stringdata_GraphicsTracingWidget = {
    {
QT_MOC_LITERAL(0, 0, 21), // "GraphicsTracingWidget"
QT_MOC_LITERAL(1, 22, 28), // "SetStartTracingButtonEnabled"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 6), // "enable"
QT_MOC_LITERAL(4, 59, 27), // "SetStopTracingButtonEnabled"
QT_MOC_LITERAL(5, 87, 28), // "SetAbortTracingButtonEnabled"
QT_MOC_LITERAL(6, 116, 14), // "StartRecording"
QT_MOC_LITERAL(7, 131, 13), // "StopRecording"
QT_MOC_LITERAL(8, 145, 14), // "AbortRecording"
QT_MOC_LITERAL(9, 160, 15), // "OnBreakPointHit"
QT_MOC_LITERAL(10, 176, 25), // "Pica::DebugContext::Event"
QT_MOC_LITERAL(11, 202, 5), // "event"
QT_MOC_LITERAL(12, 208, 4), // "data"
QT_MOC_LITERAL(13, 213, 9) // "OnResumed"

    },
    "GraphicsTracingWidget\0"
    "SetStartTracingButtonEnabled\0\0enable\0"
    "SetStopTracingButtonEnabled\0"
    "SetAbortTracingButtonEnabled\0"
    "StartRecording\0StopRecording\0"
    "AbortRecording\0OnBreakPointHit\0"
    "Pica::DebugContext::Event\0event\0data\0"
    "OnResumed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphicsTracingWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       5,    1,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    2,   66,    2, 0x08 /* Private */,
      13,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, QMetaType::VoidStar,   11,   12,
    QMetaType::Void,

       0        // eod
};

void GraphicsTracingWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GraphicsTracingWidget *_t = static_cast<GraphicsTracingWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SetStartTracingButtonEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->SetStopTracingButtonEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->SetAbortTracingButtonEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->StartRecording(); break;
        case 4: _t->StopRecording(); break;
        case 5: _t->AbortRecording(); break;
        case 6: _t->OnBreakPointHit((*reinterpret_cast< Pica::DebugContext::Event(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 7: _t->OnResumed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GraphicsTracingWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphicsTracingWidget::SetStartTracingButtonEnabled)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (GraphicsTracingWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphicsTracingWidget::SetStopTracingButtonEnabled)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (GraphicsTracingWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphicsTracingWidget::SetAbortTracingButtonEnabled)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject GraphicsTracingWidget::staticMetaObject = {
    { &BreakPointObserverDock::staticMetaObject, qt_meta_stringdata_GraphicsTracingWidget.data,
      qt_meta_data_GraphicsTracingWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GraphicsTracingWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphicsTracingWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GraphicsTracingWidget.stringdata0))
        return static_cast<void*>(const_cast< GraphicsTracingWidget*>(this));
    return BreakPointObserverDock::qt_metacast(_clname);
}

int GraphicsTracingWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BreakPointObserverDock::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void GraphicsTracingWidget::SetStartTracingButtonEnabled(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GraphicsTracingWidget::SetStopTracingButtonEnabled(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GraphicsTracingWidget::SetAbortTracingButtonEnabled(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
