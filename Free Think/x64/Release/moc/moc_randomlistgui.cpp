/****************************************************************************
** Meta object code from reading C++ file 'randomlistgui.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../randomlistgui.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'randomlistgui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSrandomlistguiENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSrandomlistguiENDCLASS = QtMocHelpers::stringData(
    "randomlistgui",
    "on_randomlist_itemDoubleClicked",
    "",
    "QListWidgetItem*",
    "item",
    "on_searchmodelbutton_clicked",
    "on_searchpricebutton_clicked",
    "on_filterbutton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSrandomlistguiENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[14];
    char stringdata1[32];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[5];
    char stringdata5[29];
    char stringdata6[29];
    char stringdata7[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSrandomlistguiENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSrandomlistguiENDCLASS_t qt_meta_stringdata_CLASSrandomlistguiENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "randomlistgui"
        QT_MOC_LITERAL(14, 31),  // "on_randomlist_itemDoubleClicked"
        QT_MOC_LITERAL(46, 0),  // ""
        QT_MOC_LITERAL(47, 16),  // "QListWidgetItem*"
        QT_MOC_LITERAL(64, 4),  // "item"
        QT_MOC_LITERAL(69, 28),  // "on_searchmodelbutton_clicked"
        QT_MOC_LITERAL(98, 28),  // "on_searchpricebutton_clicked"
        QT_MOC_LITERAL(127, 23)   // "on_filterbutton_clicked"
    },
    "randomlistgui",
    "on_randomlist_itemDoubleClicked",
    "",
    "QListWidgetItem*",
    "item",
    "on_searchmodelbutton_clicked",
    "on_searchpricebutton_clicked",
    "on_filterbutton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSrandomlistguiENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x08,    1 /* Private */,
       5,    0,   41,    2, 0x08,    3 /* Private */,
       6,    0,   42,    2, 0x08,    4 /* Private */,
       7,    0,   43,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject randomlistgui::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSrandomlistguiENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSrandomlistguiENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSrandomlistguiENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<randomlistgui, std::true_type>,
        // method 'on_randomlist_itemDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'on_searchmodelbutton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_searchpricebutton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_filterbutton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void randomlistgui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<randomlistgui *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_randomlist_itemDoubleClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 1: _t->on_searchmodelbutton_clicked(); break;
        case 2: _t->on_searchpricebutton_clicked(); break;
        case 3: _t->on_filterbutton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *randomlistgui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *randomlistgui::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSrandomlistguiENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int randomlistgui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
