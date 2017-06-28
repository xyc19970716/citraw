/****************************************************************************
** Meta object code from reading C++ file 'graphics_vertex_shader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../citra/src/citra_qt/debugger/graphics/graphics_vertex_shader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphics_vertex_shader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GraphicsVertexShaderModel_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphicsVertexShaderModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphicsVertexShaderModel_t qt_meta_stringdata_GraphicsVertexShaderModel = {
    {
QT_MOC_LITERAL(0, 0, 25) // "GraphicsVertexShaderModel"

    },
    "GraphicsVertexShaderModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphicsVertexShaderModel[] = {

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

void GraphicsVertexShaderModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject GraphicsVertexShaderModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_GraphicsVertexShaderModel.data,
      qt_meta_data_GraphicsVertexShaderModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GraphicsVertexShaderModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphicsVertexShaderModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GraphicsVertexShaderModel.stringdata0))
        return static_cast<void*>(const_cast< GraphicsVertexShaderModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int GraphicsVertexShaderModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_GraphicsVertexShaderWidget_t {
    QByteArrayData data[14];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphicsVertexShaderWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphicsVertexShaderWidget_t qt_meta_stringdata_GraphicsVertexShaderWidget = {
    {
QT_MOC_LITERAL(0, 0, 26), // "GraphicsVertexShaderWidget"
QT_MOC_LITERAL(1, 27, 15), // "OnBreakPointHit"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 25), // "Pica::DebugContext::Event"
QT_MOC_LITERAL(4, 70, 5), // "event"
QT_MOC_LITERAL(5, 76, 4), // "data"
QT_MOC_LITERAL(6, 81, 9), // "OnResumed"
QT_MOC_LITERAL(7, 91, 23), // "OnInputAttributeChanged"
QT_MOC_LITERAL(8, 115, 5), // "index"
QT_MOC_LITERAL(9, 121, 19), // "OnCycleIndexChanged"
QT_MOC_LITERAL(10, 141, 10), // "DumpShader"
QT_MOC_LITERAL(11, 152, 6), // "Reload"
QT_MOC_LITERAL(12, 159, 19), // "replace_vertex_data"
QT_MOC_LITERAL(13, 179, 11) // "vertex_data"

    },
    "GraphicsVertexShaderWidget\0OnBreakPointHit\0"
    "\0Pica::DebugContext::Event\0event\0data\0"
    "OnResumed\0OnInputAttributeChanged\0"
    "index\0OnCycleIndexChanged\0DumpShader\0"
    "Reload\0replace_vertex_data\0vertex_data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphicsVertexShaderWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    1,   60,    2, 0x08 /* Private */,
       9,    1,   63,    2, 0x08 /* Private */,
      10,    0,   66,    2, 0x08 /* Private */,
      11,    2,   67,    2, 0x08 /* Private */,
      11,    1,   72,    2, 0x28 /* Private | MethodCloned */,
      11,    0,   75,    2, 0x28 /* Private | MethodCloned */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::VoidStar,    4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::VoidStar,   12,   13,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,

       0        // eod
};

void GraphicsVertexShaderWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GraphicsVertexShaderWidget *_t = static_cast<GraphicsVertexShaderWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnBreakPointHit((*reinterpret_cast< Pica::DebugContext::Event(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 1: _t->OnResumed(); break;
        case 2: _t->OnInputAttributeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->OnCycleIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->DumpShader(); break;
        case 5: _t->Reload((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 6: _t->Reload((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->Reload(); break;
        default: ;
        }
    }
}

const QMetaObject GraphicsVertexShaderWidget::staticMetaObject = {
    { &BreakPointObserverDock::staticMetaObject, qt_meta_stringdata_GraphicsVertexShaderWidget.data,
      qt_meta_data_GraphicsVertexShaderWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GraphicsVertexShaderWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphicsVertexShaderWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GraphicsVertexShaderWidget.stringdata0))
        return static_cast<void*>(const_cast< GraphicsVertexShaderWidget*>(this));
    return BreakPointObserverDock::qt_metacast(_clname);
}

int GraphicsVertexShaderWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
