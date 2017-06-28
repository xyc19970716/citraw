/****************************************************************************
** Meta object code from reading C++ file 'graphics_cmdlists.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../citra/src/citra_qt/debugger/graphics/graphics_cmdlists.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphics_cmdlists.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GPUCommandListModel_t {
    QByteArrayData data[5];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPUCommandListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPUCommandListModel_t qt_meta_stringdata_GPUCommandListModel = {
    {
QT_MOC_LITERAL(0, 0, 19), // "GPUCommandListModel"
QT_MOC_LITERAL(1, 20, 19), // "OnPicaTraceFinished"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 27), // "Pica::DebugUtils::PicaTrace"
QT_MOC_LITERAL(4, 69, 5) // "trace"

    },
    "GPUCommandListModel\0OnPicaTraceFinished\0"
    "\0Pica::DebugUtils::PicaTrace\0trace"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPUCommandListModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void GPUCommandListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GPUCommandListModel *_t = static_cast<GPUCommandListModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnPicaTraceFinished((*reinterpret_cast< const Pica::DebugUtils::PicaTrace(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject GPUCommandListModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_GPUCommandListModel.data,
      qt_meta_data_GPUCommandListModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GPUCommandListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPUCommandListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GPUCommandListModel.stringdata0))
        return static_cast<void*>(const_cast< GPUCommandListModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int GPUCommandListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_GPUCommandListWidget_t {
    QByteArrayData data[8];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPUCommandListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPUCommandListWidget_t qt_meta_stringdata_GPUCommandListWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "GPUCommandListWidget"
QT_MOC_LITERAL(1, 21, 15), // "TracingFinished"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 27), // "Pica::DebugUtils::PicaTrace"
QT_MOC_LITERAL(4, 66, 15), // "OnToggleTracing"
QT_MOC_LITERAL(5, 82, 22), // "OnCommandDoubleClicked"
QT_MOC_LITERAL(6, 105, 14), // "SetCommandInfo"
QT_MOC_LITERAL(7, 120, 18) // "CopyAllToClipboard"

    },
    "GPUCommandListWidget\0TracingFinished\0"
    "\0Pica::DebugUtils::PicaTrace\0"
    "OnToggleTracing\0OnCommandDoubleClicked\0"
    "SetCommandInfo\0CopyAllToClipboard"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPUCommandListWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   42,    2, 0x0a /* Public */,
       5,    1,   43,    2, 0x0a /* Public */,
       6,    1,   46,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void,

       0        // eod
};

void GPUCommandListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GPUCommandListWidget *_t = static_cast<GPUCommandListWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->TracingFinished((*reinterpret_cast< const Pica::DebugUtils::PicaTrace(*)>(_a[1]))); break;
        case 1: _t->OnToggleTracing(); break;
        case 2: _t->OnCommandDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->SetCommandInfo((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->CopyAllToClipboard(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GPUCommandListWidget::*_t)(const Pica::DebugUtils::PicaTrace & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GPUCommandListWidget::TracingFinished)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject GPUCommandListWidget::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_GPUCommandListWidget.data,
      qt_meta_data_GPUCommandListWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GPUCommandListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPUCommandListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GPUCommandListWidget.stringdata0))
        return static_cast<void*>(const_cast< GPUCommandListWidget*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int GPUCommandListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void GPUCommandListWidget::TracingFinished(const Pica::DebugUtils::PicaTrace & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
