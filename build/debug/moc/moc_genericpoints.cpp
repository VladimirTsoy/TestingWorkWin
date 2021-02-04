/****************************************************************************
** Meta object code from reading C++ file 'genericpoints.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../testing_work/genericpoints.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'genericpoints.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GenericPoints_t {
    QByteArrayData data[14];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GenericPoints_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GenericPoints_t qt_meta_stringdata_GenericPoints = {
    {
QT_MOC_LITERAL(0, 0, 13), // "GenericPoints"
QT_MOC_LITERAL(1, 14, 8), // "finished"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 10), // "send_point"
QT_MOC_LITERAL(4, 35, 5), // "point"
QT_MOC_LITERAL(5, 41, 14), // "runningChanged"
QT_MOC_LITERAL(6, 56, 7), // "running"
QT_MOC_LITERAL(7, 64, 12), // "pointChanged"
QT_MOC_LITERAL(8, 77, 17), // "sleep_timeChanged"
QT_MOC_LITERAL(9, 95, 10), // "sleep_time"
QT_MOC_LITERAL(10, 106, 3), // "run"
QT_MOC_LITERAL(11, 110, 10), // "setRunning"
QT_MOC_LITERAL(12, 121, 8), // "setPoint"
QT_MOC_LITERAL(13, 130, 13) // "setSleep_time"

    },
    "GenericPoints\0finished\0\0send_point\0"
    "point\0runningChanged\0running\0pointChanged\0"
    "sleep_timeChanged\0sleep_time\0run\0"
    "setRunning\0setPoint\0setSleep_time"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GenericPoints[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       3,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    1,   60,    2, 0x06 /* Public */,
       5,    1,   63,    2, 0x06 /* Public */,
       7,    1,   66,    2, 0x06 /* Public */,
       8,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   72,    2, 0x0a /* Public */,
      11,    1,   73,    2, 0x0a /* Public */,
      12,    1,   76,    2, 0x0a /* Public */,
      13,    1,   79,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPointF,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QPointF,    4,
    QMetaType::Void, QMetaType::Int,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QPointF,    4,
    QMetaType::Void, QMetaType::Int,    9,

 // properties: name, type, flags
       6, QMetaType::Bool, 0x00495103,
       4, QMetaType::QPointF, 0x00495103,
       9, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       2,
       3,
       4,

       0        // eod
};

void GenericPoints::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GenericPoints *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->send_point((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 2: _t->runningChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->pointChanged((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 4: _t->sleep_timeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->run(); break;
        case 6: _t->setRunning((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setPoint((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 8: _t->setSleep_time((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GenericPoints::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GenericPoints::finished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GenericPoints::*)(QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GenericPoints::send_point)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GenericPoints::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GenericPoints::runningChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GenericPoints::*)(QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GenericPoints::pointChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GenericPoints::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GenericPoints::sleep_timeChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<GenericPoints *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->running(); break;
        case 1: *reinterpret_cast< QPointF*>(_v) = _t->point(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->sleep_time(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<GenericPoints *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRunning(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setPoint(*reinterpret_cast< QPointF*>(_v)); break;
        case 2: _t->setSleep_time(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject GenericPoints::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GenericPoints.data,
    qt_meta_data_GenericPoints,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GenericPoints::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GenericPoints::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GenericPoints.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GenericPoints::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void GenericPoints::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GenericPoints::send_point(QPointF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GenericPoints::runningChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GenericPoints::pointChanged(QPointF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GenericPoints::sleep_timeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
