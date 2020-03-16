/****************************************************************************
** Meta object code from reading C++ file 'fm_gestaoestoque.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../Qt_creator/Documentos/Qt_Creator/controlEstoque/fm_gestaoestoque.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fm_gestaoestoque.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_fm_gestaoEstoque_t {
    QByteArrayData data[10];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_fm_gestaoEstoque_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_fm_gestaoEstoque_t qt_meta_stringdata_fm_gestaoEstoque = {
    {
QT_MOC_LITERAL(0, 0, 16), // "fm_gestaoEstoque"
QT_MOC_LITERAL(1, 17, 20), // "on_btn_novop_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 22), // "on_btn_gravarp_clicked"
QT_MOC_LITERAL(4, 62, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(5, 90, 5), // "index"
QT_MOC_LITERAL(6, 96, 38), // "on_tw_ge_produtos_itemSelecti..."
QT_MOC_LITERAL(7, 135, 24), // "on_btn_ge_gravar_clicked"
QT_MOC_LITERAL(8, 160, 25), // "on_btn_ge_excluir_clicked"
QT_MOC_LITERAL(9, 186, 24) // "on_btn_pesquisar_clicked"

    },
    "fm_gestaoEstoque\0on_btn_novop_clicked\0"
    "\0on_btn_gravarp_clicked\0"
    "on_tabWidget_currentChanged\0index\0"
    "on_tw_ge_produtos_itemSelectionChanged\0"
    "on_btn_ge_gravar_clicked\0"
    "on_btn_ge_excluir_clicked\0"
    "on_btn_pesquisar_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_fm_gestaoEstoque[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    1,   51,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void fm_gestaoEstoque::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        fm_gestaoEstoque *_t = static_cast<fm_gestaoEstoque *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btn_novop_clicked(); break;
        case 1: _t->on_btn_gravarp_clicked(); break;
        case 2: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_tw_ge_produtos_itemSelectionChanged(); break;
        case 4: _t->on_btn_ge_gravar_clicked(); break;
        case 5: _t->on_btn_ge_excluir_clicked(); break;
        case 6: _t->on_btn_pesquisar_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject fm_gestaoEstoque::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_fm_gestaoEstoque.data,
      qt_meta_data_fm_gestaoEstoque,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *fm_gestaoEstoque::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fm_gestaoEstoque::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_fm_gestaoEstoque.stringdata0))
        return static_cast<void*>(const_cast< fm_gestaoEstoque*>(this));
    return QDialog::qt_metacast(_clname);
}

int fm_gestaoEstoque::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
