/****************************************************************************
** Meta object code from reading C++ file 'maininterface.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../lfversion/maininterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maininterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x09,
      41,   14,   14,   14, 0x09,
      66,   14,   14,   14, 0x09,
      84,   14,   14,   14, 0x09,
     104,   14,   14,   14, 0x09,
     124,   14,   14,   14, 0x09,
     153,   14,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MainInterface[] = {
    "MainInterface\0\0showSelectCertification()\0"
    "createNewCertification()\0createNewAESKey()\0"
    "openEncryptWindow()\0openDecryptWindow()\0"
    "openDigtialSignatureWindow()\0"
    "openAuthenticationWindow()\0"
};

void MainInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainInterface *_t = static_cast<MainInterface *>(_o);
        switch (_id) {
        case 0: _t->showSelectCertification(); break;
        case 1: _t->createNewCertification(); break;
        case 2: _t->createNewAESKey(); break;
        case 3: _t->openEncryptWindow(); break;
        case 4: _t->openDecryptWindow(); break;
        case 5: _t->openDigtialSignatureWindow(); break;
        case 6: _t->openAuthenticationWindow(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MainInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainInterface::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainInterface,
      qt_meta_data_MainInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainInterface))
        return static_cast<void*>(const_cast< MainInterface*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
