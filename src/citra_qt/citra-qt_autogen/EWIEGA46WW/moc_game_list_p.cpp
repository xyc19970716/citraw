/****************************************************************************
** Meta object code from reading C++ file 'game_list_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../citra/src/citra_qt/game_list_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'game_list_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GameListWorker_t {
    QByteArrayData data[9];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameListWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameListWorker_t qt_meta_stringdata_GameListWorker = {
    {
QT_MOC_LITERAL(0, 0, 14), // "GameListWorker"
QT_MOC_LITERAL(1, 15, 10), // "EntryReady"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 21), // "QList<QStandardItem*>"
QT_MOC_LITERAL(4, 49, 11), // "entry_items"
QT_MOC_LITERAL(5, 61, 8), // "Finished"
QT_MOC_LITERAL(6, 70, 10), // "watch_list"
QT_MOC_LITERAL(7, 81, 3), // "run"
QT_MOC_LITERAL(8, 85, 6) // "Cancel"

    },
    "GameListWorker\0EntryReady\0\0"
    "QList<QStandardItem*>\0entry_items\0"
    "Finished\0watch_list\0run\0Cancel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameListWorker[] = {

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
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   40,    2, 0x0a /* Public */,
       8,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QStringList,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GameListWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GameListWorker *_t = static_cast<GameListWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->EntryReady((*reinterpret_cast< QList<QStandardItem*>(*)>(_a[1]))); break;
        case 1: _t->Finished((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 2: _t->run(); break;
        case 3: _t->Cancel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GameListWorker::*_t)(QList<QStandardItem*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameListWorker::EntryReady)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (GameListWorker::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameListWorker::Finished)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject GameListWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GameListWorker.data,
      qt_meta_data_GameListWorker,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GameListWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameListWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GameListWorker.stringdata0))
        return static_cast<void*>(const_cast< GameListWorker*>(this));
    if (!strcmp(_clname, "QRunnable"))
        return static_cast< QRunnable*>(const_cast< GameListWorker*>(this));
    return QObject::qt_metacast(_clname);
}

int GameListWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void GameListWorker::EntryReady(QList<QStandardItem*> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GameListWorker::Finished(QStringList _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
