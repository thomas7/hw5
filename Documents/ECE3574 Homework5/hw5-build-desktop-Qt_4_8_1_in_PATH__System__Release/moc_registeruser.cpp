/****************************************************************************
** Meta object code from reading C++ file 'registeruser.h'
**
** Created: Wed Oct 24 00:27:33 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hw5/registeruser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'registeruser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RegisterUser[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      25,   13,   13,   13, 0x08,
      45,   13,   13,   13, 0x08,
      67,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RegisterUser[] = {
    "RegisterUser\0\0okSignal()\0returnToMainLogin()\0"
    "on_okButton_clicked()\0on_cancelButton_clicked()\0"
};

void RegisterUser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RegisterUser *_t = static_cast<RegisterUser *>(_o);
        switch (_id) {
        case 0: _t->okSignal(); break;
        case 1: _t->returnToMainLogin(); break;
        case 2: _t->on_okButton_clicked(); break;
        case 3: _t->on_cancelButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData RegisterUser::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RegisterUser::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RegisterUser,
      qt_meta_data_RegisterUser, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RegisterUser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RegisterUser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RegisterUser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RegisterUser))
        return static_cast<void*>(const_cast< RegisterUser*>(this));
    return QWidget::qt_metacast(_clname);
}

int RegisterUser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void RegisterUser::okSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
