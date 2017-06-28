/****************************************************************************
** Meta object code from reading C++ file 'graphics.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../citra/src/citra_qt/debugger/graphics/graphics.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphics.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GPUCommandStreamItemModel_t {
    QByteArrayData data[5];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPUCommandStreamItemModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPUCommandStreamItemModel_t qt_meta_stringdata_GPUCommandStreamItemModel = {
    {
QT_MOC_LITERAL(0, 0, 25), // "GPUCommandStreamItemModel"
QT_MOC_LITERAL(1, 26, 17), // "GXCommandFinished"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 19), // "total_command_count"
QT_MOC_LITERAL(4, 65, 27) // "OnGXCommandFinishedInternal"

    },
    "GPUCommandStreamItemModel\0GXCommandFinished\0"
    "\0total_command_count\0OnGXCommandFinishedInternal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPUCommandStreamItemModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void GPUCommandStreamItemModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GPUCommandStreamItemModel *_t = static_cast<GPUCommandStreamItemModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->GXCommandFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->OnGXCommandFinishedInternal((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GPUCommandStreamItemModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GPUCommandStreamItemModel::GXCommandFinished)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject GPUCommandStreamItemModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_GPUCommandStreamItemModel.data,
      qt_meta_data_GPUCommandStreamItemModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GPUCommandStreamItemModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPUCommandStreamItemModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GPUCommandStreamItemModel.stringdata0))
        return static_cast<void*>(const_cast< GPUCommandStreamItemModel*>(this));
    if (!strcmp(_clname, "GraphicsDebugger::DebuggerObserver"))
        return static_cast< GraphicsDebugger::DebuggerObserver*>(const_cast< GPUCommandStreamItemModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int GPUCommandStreamItemModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void GPUCommandStreamItemModel::GXCommandFinished(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_GPUCommandStreamWidget_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPUCommandStreamWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPUCommandStreamWidget_t qt_meta_stringdata_GPUCommandStreamWidget = {
    {
QT_MOC_LITERAL(0, 0, 22) // "GPUCommandStreamWidget"

    },
    "GPUCommandStreamWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPUCommandStreamWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void GPUCommandStreamWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject GPUCommandStreamWidget::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_GPUCommandStreamWidget.data,
      qt_meta_data_GPUCommandStreamWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GPUCommandStreamWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPUCommandStreamWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GPUCommandStreamWidget.stringdata0))
        return static_cast<void*>(const_cast< GPUCommandStreamWidget*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int GPUCommandStreamWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
