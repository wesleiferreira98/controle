/****************************************************************************
** Meta object code from reading C++ file 'fm_gestaocolaboradores.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../Qt_creator/Documentos/Qt_Creator/controlEstoque/fm_gestaocolaboradores.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fm_gestaocolaboradores.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_fm_gestaoColaboradores_t {
    QByteArrayData data[11];
    char stringdata0[276];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_fm_gestaoColaboradores_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_fm_gestaoColaboradores_t qt_meta_stringdata_fm_gestaoColaboradores = {
    {
QT_MOC_LITERAL(0, 0, 22), // "fm_gestaoColaboradores"
QT_MOC_LITERAL(1, 23, 31), // "on_btn_gravar_novocolab_clicked"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 33), // "on_btn_can_novo_novocolab_cli..."
QT_MOC_LITERAL(4, 90, 33), // "on_btn_cancalar_novocolab_cli..."
QT_MOC_LITERAL(5, 124, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(6, 152, 5), // "index"
QT_MOC_LITERAL(7, 158, 32), // "on_lv_colab_itemSelectionChanged"
QT_MOC_LITERAL(8, 191, 27), // "on_btn_flitro_colab_clicked"
QT_MOC_LITERAL(9, 219, 27), // "on_btn_editar_colab_clicked"
QT_MOC_LITERAL(10, 247, 28) // "on_btn_excluir_colab_clicked"

    },
    "fm_gestaoColaboradores\0"
    "on_btn_gravar_novocolab_clicked\0\0"
    "on_btn_can_novo_novocolab_clicked\0"
    "on_btn_cancalar_novocolab_clicked\0"
    "on_tabWidget_currentChanged\0index\0"
    "on_lv_colab_itemSelectionChanged\0"
    "on_btn_flitro_colab_clicked\0"
    "on_btn_editar_colab_clicked\0"
    "on_btn_excluir_colab_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_fm_gestaoColaboradores[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    1,   57,    2, 0x08 /* Private */,
       7,    0,   60,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void fm_gestaoColaboradores::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        fm_gestaoColaboradores *_t = static_cast<fm_gestaoColaboradores *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btn_gravar_novocolab_clicked(); break;
        case 1: _t->on_btn_can_novo_novocolab_clicked(); break;
        case 2: _t->on_btn_cancalar_novocolab_clicked(); break;
        case 3: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_lv_colab_itemSelectionChanged(); break;
        case 5: _t->on_btn_flitro_colab_clicked(); break;
        case 6: _t->on_btn_editar_colab_clicked(); break;
        case 7: _t->on_btn_excluir_colab_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject fm_gestaoColaboradores::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_fm_gestaoColaboradores.data,
      qt_meta_data_fm_gestaoColaboradores,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *fm_gestaoColaboradores::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fm_gestaoColaboradores::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_fm_gestaoColaboradores.stringdata0))
        return static_cast<void*>(const_cast< fm_gestaoColaboradores*>(this));
    return QDialog::qt_metacast(_clname);
}

int fm_gestaoColaboradores::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
