/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Qt6Book/Samps/android/samp15_1AudioPlayer/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[24];
    char stringdata0[404];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 14), // "onStateChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 19), // "QMediaPlayer::State"
QT_MOC_LITERAL(4, 47, 5), // "state"
QT_MOC_LITERAL(5, 53, 17), // "onPlaylistChanged"
QT_MOC_LITERAL(6, 71, 8), // "position"
QT_MOC_LITERAL(7, 80, 17), // "onDurationChanged"
QT_MOC_LITERAL(8, 98, 8), // "duration"
QT_MOC_LITERAL(9, 107, 17), // "onPositionChanged"
QT_MOC_LITERAL(10, 125, 17), // "on_btnAdd_clicked"
QT_MOC_LITERAL(11, 143, 18), // "on_btnPlay_clicked"
QT_MOC_LITERAL(12, 162, 19), // "on_btnPause_clicked"
QT_MOC_LITERAL(13, 182, 18), // "on_btnStop_clicked"
QT_MOC_LITERAL(14, 201, 27), // "on_listWidget_doubleClicked"
QT_MOC_LITERAL(15, 229, 5), // "index"
QT_MOC_LITERAL(16, 235, 19), // "on_btnClear_clicked"
QT_MOC_LITERAL(17, 255, 28), // "on_sliderVolumn_valueChanged"
QT_MOC_LITERAL(18, 284, 5), // "value"
QT_MOC_LITERAL(19, 290, 19), // "on_btnSound_clicked"
QT_MOC_LITERAL(20, 310, 30), // "on_sliderPosition_valueChanged"
QT_MOC_LITERAL(21, 341, 20), // "on_btnRemove_clicked"
QT_MOC_LITERAL(22, 362, 22), // "on_btnPrevious_clicked"
QT_MOC_LITERAL(23, 385, 18) // "on_btnNext_clicked"

    },
    "MainWindow\0onStateChanged\0\0"
    "QMediaPlayer::State\0state\0onPlaylistChanged\0"
    "position\0onDurationChanged\0duration\0"
    "onPositionChanged\0on_btnAdd_clicked\0"
    "on_btnPlay_clicked\0on_btnPause_clicked\0"
    "on_btnStop_clicked\0on_listWidget_doubleClicked\0"
    "index\0on_btnClear_clicked\0"
    "on_sliderVolumn_valueChanged\0value\0"
    "on_btnSound_clicked\0on_sliderPosition_valueChanged\0"
    "on_btnRemove_clicked\0on_btnPrevious_clicked\0"
    "on_btnNext_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x08 /* Private */,
       5,    1,   97,    2, 0x08 /* Private */,
       7,    1,  100,    2, 0x08 /* Private */,
       9,    1,  103,    2, 0x08 /* Private */,
      10,    0,  106,    2, 0x08 /* Private */,
      11,    0,  107,    2, 0x08 /* Private */,
      12,    0,  108,    2, 0x08 /* Private */,
      13,    0,  109,    2, 0x08 /* Private */,
      14,    1,  110,    2, 0x08 /* Private */,
      16,    0,  113,    2, 0x08 /* Private */,
      17,    1,  114,    2, 0x08 /* Private */,
      19,    0,  117,    2, 0x08 /* Private */,
      20,    1,  118,    2, 0x08 /* Private */,
      21,    0,  121,    2, 0x08 /* Private */,
      22,    0,  122,    2, 0x08 /* Private */,
      23,    0,  123,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::LongLong,    8,
    QMetaType::Void, QMetaType::LongLong,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onStateChanged((*reinterpret_cast< QMediaPlayer::State(*)>(_a[1]))); break;
        case 1: _t->onPlaylistChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onDurationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 3: _t->onPositionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->on_btnAdd_clicked(); break;
        case 5: _t->on_btnPlay_clicked(); break;
        case 6: _t->on_btnPause_clicked(); break;
        case 7: _t->on_btnStop_clicked(); break;
        case 8: _t->on_listWidget_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->on_btnClear_clicked(); break;
        case 10: _t->on_sliderVolumn_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_btnSound_clicked(); break;
        case 12: _t->on_sliderPosition_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_btnRemove_clicked(); break;
        case 14: _t->on_btnPrevious_clicked(); break;
        case 15: _t->on_btnNext_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::State >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
