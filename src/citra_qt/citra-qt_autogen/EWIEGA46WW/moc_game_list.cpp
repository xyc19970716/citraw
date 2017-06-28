/****************************************************************************
** Meta object code from reading C++ file 'game_list.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../citra/src/citra_qt/game_list.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'game_list.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GameList_t {
    QByteArrayData data[11];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameList_t qt_meta_stringdata_GameList = {
    {
QT_MOC_LITERAL(0, 0, 8), // "GameList"
QT_MOC_LITERAL(1, 9, 10), // "GameChosen"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 9), // "game_path"
QT_MOC_LITERAL(4, 31, 18), // "ShouldCancelWorker"
QT_MOC_LITERAL(5, 50, 23), // "OpenSaveFolderRequested"
QT_MOC_LITERAL(6, 74, 3), // "u64"
QT_MOC_LITERAL(7, 78, 10), // "program_id"
QT_MOC_LITERAL(8, 89, 13), // "onTextChanged"
QT_MOC_LITERAL(9, 103, 7), // "newText"
QT_MOC_LITERAL(10, 111, 20) // "onFilterCloseClicked"

    },
    "GameList\0GameChosen\0\0game_path\0"
    "ShouldCancelWorker\0OpenSaveFolderRequested\0"
    "u64\0program_id\0onTextChanged\0newText\0"
    "onFilterCloseClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    0,   42,    2, 0x06 /* Public */,
       5,    1,   43,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   46,    2, 0x08 /* Private */,
      10,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,

       0        // eod
};

void GameList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GameList *_t = static_cast<GameList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->GameChosen((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->ShouldCancelWorker(); break;
        case 2: _t->OpenSaveFolderRequested((*reinterpret_cast< u64(*)>(_a[1]))); break;
        case 3: _t->onTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->onFilterCloseClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GameList::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameList::GameChosen)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (GameList::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameList::ShouldCancelWorker)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (GameList::*_t)(u64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameList::OpenSaveFolderRequested)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject GameList::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GameList.data,
      qt_meta_data_GameList,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GameList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameList::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GameList.stringdata0))
        return static_cast<void*>(const_cast< GameList*>(this));
    return QWidget::qt_metacast(_clname);
}

int GameList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void GameList::GameChosen(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GameList::ShouldCancelWorker()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void GameList::OpenSaveFolderRequested(u64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
