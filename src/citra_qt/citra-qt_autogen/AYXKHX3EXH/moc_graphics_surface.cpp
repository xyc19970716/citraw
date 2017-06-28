/****************************************************************************
** Meta object code from reading C++ file 'graphics_surface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../citra/src/citra_qt/debugger/graphics/graphics_surface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphics_surface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SurfacePicture_t {
    QByteArrayData data[6];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SurfacePicture_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SurfacePicture_t qt_meta_stringdata_SurfacePicture = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SurfacePicture"
QT_MOC_LITERAL(1, 15, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 12), // "QMouseEvent*"
QT_MOC_LITERAL(4, 44, 5), // "event"
QT_MOC_LITERAL(5, 50, 15) // "mousePressEvent"

    },
    "SurfacePicture\0mouseMoveEvent\0\0"
    "QMouseEvent*\0event\0mousePressEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SurfacePicture[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x09 /* Protected */,
       5,    1,   27,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void SurfacePicture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SurfacePicture *_t = static_cast<SurfacePicture *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 1: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SurfacePicture::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_SurfacePicture.data,
      qt_meta_data_SurfacePicture,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SurfacePicture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SurfacePicture::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SurfacePicture.stringdata0))
        return static_cast<void*>(const_cast< SurfacePicture*>(this));
    return QLabel::qt_metacast(_clname);
}

int SurfacePicture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_GraphicsSurfaceWidget_t {
    QByteArrayData data[18];
    char stringdata0[287];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphicsSurfaceWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphicsSurfaceWidget_t qt_meta_stringdata_GraphicsSurfaceWidget = {
    {
QT_MOC_LITERAL(0, 0, 21), // "GraphicsSurfaceWidget"
QT_MOC_LITERAL(1, 22, 6), // "Update"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 22), // "OnSurfaceSourceChanged"
QT_MOC_LITERAL(4, 53, 9), // "new_value"
QT_MOC_LITERAL(5, 63, 23), // "OnSurfaceAddressChanged"
QT_MOC_LITERAL(6, 87, 21), // "OnSurfaceWidthChanged"
QT_MOC_LITERAL(7, 109, 22), // "OnSurfaceHeightChanged"
QT_MOC_LITERAL(8, 132, 22), // "OnSurfaceFormatChanged"
QT_MOC_LITERAL(9, 155, 23), // "OnSurfacePickerXChanged"
QT_MOC_LITERAL(10, 179, 23), // "OnSurfacePickerYChanged"
QT_MOC_LITERAL(11, 203, 8), // "OnUpdate"
QT_MOC_LITERAL(12, 212, 15), // "OnBreakPointHit"
QT_MOC_LITERAL(13, 228, 25), // "Pica::DebugContext::Event"
QT_MOC_LITERAL(14, 254, 5), // "event"
QT_MOC_LITERAL(15, 260, 4), // "data"
QT_MOC_LITERAL(16, 265, 9), // "OnResumed"
QT_MOC_LITERAL(17, 275, 11) // "SaveSurface"

    },
    "GraphicsSurfaceWidget\0Update\0\0"
    "OnSurfaceSourceChanged\0new_value\0"
    "OnSurfaceAddressChanged\0OnSurfaceWidthChanged\0"
    "OnSurfaceHeightChanged\0OnSurfaceFormatChanged\0"
    "OnSurfacePickerXChanged\0OnSurfacePickerYChanged\0"
    "OnUpdate\0OnBreakPointHit\0"
    "Pica::DebugContext::Event\0event\0data\0"
    "OnResumed\0SaveSurface"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphicsSurfaceWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   75,    2, 0x0a /* Public */,
       5,    1,   78,    2, 0x0a /* Public */,
       6,    1,   81,    2, 0x0a /* Public */,
       7,    1,   84,    2, 0x0a /* Public */,
       8,    1,   87,    2, 0x0a /* Public */,
       9,    1,   90,    2, 0x0a /* Public */,
      10,    1,   93,    2, 0x0a /* Public */,
      11,    0,   96,    2, 0x0a /* Public */,
      12,    2,   97,    2, 0x08 /* Private */,
      16,    0,  102,    2, 0x08 /* Private */,
      17,    0,  103,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::LongLong,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, QMetaType::VoidStar,   14,   15,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GraphicsSurfaceWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GraphicsSurfaceWidget *_t = static_cast<GraphicsSurfaceWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Update(); break;
        case 1: _t->OnSurfaceSourceChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->OnSurfaceAddressChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 3: _t->OnSurfaceWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->OnSurfaceHeightChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->OnSurfaceFormatChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->OnSurfacePickerXChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->OnSurfacePickerYChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->OnUpdate(); break;
        case 9: _t->OnBreakPointHit((*reinterpret_cast< Pica::DebugContext::Event(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 10: _t->OnResumed(); break;
        case 11: _t->SaveSurface(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GraphicsSurfaceWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphicsSurfaceWidget::Update)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject GraphicsSurfaceWidget::staticMetaObject = {
    { &BreakPointObserverDock::staticMetaObject, qt_meta_stringdata_GraphicsSurfaceWidget.data,
      qt_meta_data_GraphicsSurfaceWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GraphicsSurfaceWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphicsSurfaceWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GraphicsSurfaceWidget.stringdata0))
        return static_cast<void*>(const_cast< GraphicsSurfaceWidget*>(this));
    return BreakPointObserverDock::qt_metacast(_clname);
}

int GraphicsSurfaceWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BreakPointObserverDock::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void GraphicsSurfaceWidget::Update()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
