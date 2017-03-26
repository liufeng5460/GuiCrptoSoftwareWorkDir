/****************************************************************************
** Meta object code from reading C++ file 'showwidgetui.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../lfversion/showwidgetui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'showwidgetui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ShowWidgetUI[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      33,   13,   13,   13, 0x0a,
      46,   13,   13,   13, 0x0a,
      65,   13,   13,   13, 0x0a,
      84,   13,   13,   13, 0x0a,
     102,   13,   13,   13, 0x0a,
     127,   13,   13,   13, 0x0a,
     147,   13,   13,   13, 0x0a,
     178,   13,   13,   13, 0x0a,
     205,   13,   13,   13, 0x0a,
     254,  251,  243,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ShowWidgetUI[] = {
    "ShowWidgetUI\0\0AddCertification()\0"
    "createMenu()\0showMenu01(QPoint)\0"
    "showMenu02(QPoint)\0deletePubKeyFun()\0"
    "deletePubAndPrivKeyFun()\0showPubKeyMessFun()\0"
    "showPubKeyMessFun(QModelIndex)\0"
    "showPubAndPrivKeyMessFun()\0"
    "showPubAndPrivKeyMessFun(QModelIndex)\0"
    "QString\0,,\0readTableData(QTableView*,int,int)\0"
};

void ShowWidgetUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ShowWidgetUI *_t = static_cast<ShowWidgetUI *>(_o);
        switch (_id) {
        case 0: _t->AddCertification(); break;
        case 1: _t->createMenu(); break;
        case 2: _t->showMenu01((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 3: _t->showMenu02((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 4: _t->deletePubKeyFun(); break;
        case 5: _t->deletePubAndPrivKeyFun(); break;
        case 6: _t->showPubKeyMessFun(); break;
        case 7: _t->showPubKeyMessFun((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->showPubAndPrivKeyMessFun(); break;
        case 9: _t->showPubAndPrivKeyMessFun((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: { QString _r = _t->readTableData((*reinterpret_cast< QTableView*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ShowWidgetUI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ShowWidgetUI::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_ShowWidgetUI,
      qt_meta_data_ShowWidgetUI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ShowWidgetUI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ShowWidgetUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ShowWidgetUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ShowWidgetUI))
        return static_cast<void*>(const_cast< ShowWidgetUI*>(this));
    return QFrame::qt_metacast(_clname);
}

int ShowWidgetUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
