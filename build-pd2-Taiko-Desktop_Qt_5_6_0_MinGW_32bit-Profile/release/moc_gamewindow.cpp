/****************************************************************************
** Meta object code from reading C++ file 'gamewindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pd2-Taiko/gamewindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gameWindow_t {
    QByteArrayData data[12];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gameWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gameWindow_t qt_meta_stringdata_gameWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "gameWindow"
QT_MOC_LITERAL(1, 11, 13), // "hittimeChange"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(4, 48, 13), // "lcdTimeChange"
QT_MOC_LITERAL(5, 62, 14), // "lcdScoreChange"
QT_MOC_LITERAL(6, 77, 6), // "finish"
QT_MOC_LITERAL(7, 84, 7), // "refresh"
QT_MOC_LITERAL(8, 92, 13), // "keyPressEvent"
QT_MOC_LITERAL(9, 106, 10), // "QKeyEvent*"
QT_MOC_LITERAL(10, 117, 3), // "ini"
QT_MOC_LITERAL(11, 121, 23) // "on_pushButton_2_clicked"

    },
    "gameWindow\0hittimeChange\0\0"
    "on_pushButton_clicked\0lcdTimeChange\0"
    "lcdScoreChange\0finish\0refresh\0"
    "keyPressEvent\0QKeyEvent*\0ini\0"
    "on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gameWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    1,   65,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gameWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        gameWindow *_t = static_cast<gameWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hittimeChange(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->lcdTimeChange(); break;
        case 3: _t->lcdScoreChange(); break;
        case 4: _t->finish(); break;
        case 5: _t->refresh(); break;
        case 6: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 7: _t->ini(); break;
        case 8: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (gameWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gameWindow::hittimeChange)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject gameWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_gameWindow.data,
      qt_meta_data_gameWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gameWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gameWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gameWindow.stringdata0))
        return static_cast<void*>(const_cast< gameWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int gameWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void gameWindow::hittimeChange()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
