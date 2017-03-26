/****************************************************************************
** Meta object code from reading C++ file 'createcertificationui.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../lfversion/createcertificationui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'createcertificationui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CreateCertificationUI[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      53,   22,   22,   22, 0x08,
      77,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CreateCertificationUI[] = {
    "CreateCertificationUI\0\0"
    "toShowWidget(QStack<QString>)\0"
    "pushShowWidget(QString)\0genKey()\0"
};

void CreateCertificationUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CreateCertificationUI *_t = static_cast<CreateCertificationUI *>(_o);
        switch (_id) {
        case 0: _t->toShowWidget((*reinterpret_cast< QStack<QString>(*)>(_a[1]))); break;
        case 1: _t->pushShowWidget((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->genKey(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CreateCertificationUI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CreateCertificationUI::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CreateCertificationUI,
      qt_meta_data_CreateCertificationUI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CreateCertificationUI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CreateCertificationUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CreateCertificationUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CreateCertificationUI))
        return static_cast<void*>(const_cast< CreateCertificationUI*>(this));
    return QWidget::qt_metacast(_clname);
}

int CreateCertificationUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void CreateCertificationUI::toShowWidget(QStack<QString> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
