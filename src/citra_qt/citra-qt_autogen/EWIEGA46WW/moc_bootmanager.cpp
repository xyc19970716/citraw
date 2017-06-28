/****************************************************************************
** Meta object code from reading C++ file 'bootmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../citra/src/citra_qt/bootmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bootmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EmuThread_t {
    QByteArrayData data[7];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EmuThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EmuThread_t qt_meta_stringdata_EmuThread = {
    {
QT_MOC_LITERAL(0, 0, 9), // "EmuThread"
QT_MOC_LITERAL(1, 10, 16), // "DebugModeEntered"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 13), // "DebugModeLeft"
QT_MOC_LITERAL(4, 42, 11), // "ErrorThrown"
QT_MOC_LITERAL(5, 54, 26), // "Core::System::ResultStatus"
QT_MOC_LITERAL(6, 81, 11) // "std::string"

    },
    "EmuThread\0DebugModeEntered\0\0DebugModeLeft\0"
    "ErrorThrown\0Core::System::ResultStatus\0"
    "std::string"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EmuThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    2,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 6,    2,    2,

       0        // eod
};

void EmuThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EmuThread *_t = static_cast<EmuThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->DebugModeEntered(); break;
        case 1: _t->DebugModeLeft(); break;
        case 2: _t->ErrorThrown((*reinterpret_cast< Core::System::ResultStatus(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (EmuThread::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EmuThread::DebugModeEntered)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (EmuThread::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EmuThread::DebugModeLeft)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (EmuThread::*_t)(Core::System::ResultStatus , std::string );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EmuThread::ErrorThrown)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject EmuThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_EmuThread.data,
      qt_meta_data_EmuThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EmuThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EmuThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EmuThread.stringdata0))
        return static_cast<void*>(const_cast< EmuThread*>(this));
    return QThread::qt_metacast(_clname);
}

int EmuThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void EmuThread::DebugModeEntered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void EmuThread::DebugModeLeft()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void EmuThread::ErrorThrown(Core::System::ResultStatus _t1, std::string _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_GRenderWindow_t {
    QByteArrayData data[9];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GRenderWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GRenderWindow_t qt_meta_stringdata_GRenderWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "GRenderWindow"
QT_MOC_LITERAL(1, 14, 6), // "Closed"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 11), // "moveContext"
QT_MOC_LITERAL(4, 34, 19), // "OnEmulationStarting"
QT_MOC_LITERAL(5, 54, 10), // "EmuThread*"
QT_MOC_LITERAL(6, 65, 10), // "emu_thread"
QT_MOC_LITERAL(7, 76, 19), // "OnEmulationStopping"
QT_MOC_LITERAL(8, 96, 24) // "OnFramebufferSizeChanged"

    },
    "GRenderWindow\0Closed\0\0moveContext\0"
    "OnEmulationStarting\0EmuThread*\0"
    "emu_thread\0OnEmulationStopping\0"
    "OnFramebufferSizeChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GRenderWindow[] = {

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
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x0a /* Public */,
       4,    1,   41,    2, 0x0a /* Public */,
       7,    0,   44,    2, 0x0a /* Public */,
       8,    0,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GRenderWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GRenderWindow *_t = static_cast<GRenderWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Closed(); break;
        case 1: _t->moveContext(); break;
        case 2: _t->OnEmulationStarting((*reinterpret_cast< EmuThread*(*)>(_a[1]))); break;
        case 3: _t->OnEmulationStopping(); break;
        case 4: _t->OnFramebufferSizeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EmuThread* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GRenderWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GRenderWindow::Closed)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject GRenderWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GRenderWindow.data,
      qt_meta_data_GRenderWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GRenderWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GRenderWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GRenderWindow.stringdata0))
        return static_cast<void*>(const_cast< GRenderWindow*>(this));
    if (!strcmp(_clname, "EmuWindow"))
        return static_cast< EmuWindow*>(const_cast< GRenderWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int GRenderWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void GRenderWindow::Closed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
