/****************************************************************************
** Meta object code from reading C++ file 'fourwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "fourwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fourwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFourWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSFourWindowENDCLASS = QtMocHelpers::stringData(
    "FourWindow",
    "on_pushButton_6_clicked",
    "",
    "on_saveButton_clicked",
    "saveInput"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFourWindowENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[11];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFourWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFourWindowENDCLASS_t qt_meta_stringdata_CLASSFourWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "FourWindow"
        QT_MOC_LITERAL(11, 23),  // "on_pushButton_6_clicked"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 21),  // "on_saveButton_clicked"
        QT_MOC_LITERAL(58, 9)   // "saveInput"
    },
    "FourWindow",
    "on_pushButton_6_clicked",
    "",
    "on_saveButton_clicked",
    "saveInput"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFourWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x08,    1 /* Private */,
       3,    0,   33,    2, 0x08,    2 /* Private */,
       4,    0,   34,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject FourWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSFourWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFourWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFourWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FourWindow, std::true_type>,
        // method 'on_pushButton_6_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_saveButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveInput'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FourWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FourWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_6_clicked(); break;
        case 1: _t->on_saveButton_clicked(); break;
        case 2: _t->saveInput(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *FourWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FourWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFourWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FourWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP