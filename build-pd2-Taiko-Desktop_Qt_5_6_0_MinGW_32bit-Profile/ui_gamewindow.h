/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gameWindow
{
public:
    QLabel *background;
    QLCDNumber *lcd_timeboard;
    QPushButton *pushButton;
    QLabel *label_Key_F;
    QLabel *label_Key_J;
    QLCDNumber *lcd_hittime;
    QLCDNumber *lcd_scoreboard;
    QLabel *TimeTitle;
    QLabel *ScoreTitle;
    QLabel *HitandMiss;
    QLabel *DrumLine;
    QLabel *taikoAnimate;
    QLabel *HitDrum;

    void setupUi(QWidget *gameWindow)
    {
        if (gameWindow->objectName().isEmpty())
            gameWindow->setObjectName(QStringLiteral("gameWindow"));
        gameWindow->resize(480, 320);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gameWindow->sizePolicy().hasHeightForWidth());
        gameWindow->setSizePolicy(sizePolicy);
        gameWindow->setMinimumSize(QSize(480, 320));
        gameWindow->setMaximumSize(QSize(480, 320));
        background = new QLabel(gameWindow);
        background->setObjectName(QStringLiteral("background"));
        background->setGeometry(QRect(0, 0, 480, 320));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(background->sizePolicy().hasHeightForWidth());
        background->setSizePolicy(sizePolicy1);
        background->setPixmap(QPixmap(QString::fromUtf8(":/pic/pic/GameBackGround.jpg")));
        lcd_timeboard = new QLCDNumber(gameWindow);
        lcd_timeboard->setObjectName(QStringLiteral("lcd_timeboard"));
        lcd_timeboard->setGeometry(QRect(400, 10, 70, 35));
        lcd_timeboard->setSizeIncrement(QSize(0, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        lcd_timeboard->setFont(font);
        lcd_timeboard->setContextMenuPolicy(Qt::DefaultContextMenu);
        lcd_timeboard->setAcceptDrops(false);
        lcd_timeboard->setFrameShape(QFrame::Box);
        lcd_timeboard->setFrameShadow(QFrame::Plain);
        lcd_timeboard->setLineWidth(2);
        lcd_timeboard->setMidLineWidth(0);
        lcd_timeboard->setSmallDecimalPoint(false);
        lcd_timeboard->setDigitCount(8);
        lcd_timeboard->setMode(QLCDNumber::Dec);
        pushButton = new QPushButton(gameWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(400, 290, 75, 25));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        label_Key_F = new QLabel(gameWindow);
        label_Key_F->setObjectName(QStringLiteral("label_Key_F"));
        label_Key_F->setGeometry(QRect(180, 250, 50, 50));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font2.setPointSize(36);
        font2.setBold(true);
        font2.setWeight(75);
        label_Key_F->setFont(font2);
        label_Key_F->setAlignment(Qt::AlignCenter);
        label_Key_J = new QLabel(gameWindow);
        label_Key_J->setObjectName(QStringLiteral("label_Key_J"));
        label_Key_J->setGeometry(QRect(250, 250, 50, 50));
        label_Key_J->setFont(font2);
        label_Key_J->setAlignment(Qt::AlignCenter);
        lcd_hittime = new QLCDNumber(gameWindow);
        lcd_hittime->setObjectName(QStringLiteral("lcd_hittime"));
        lcd_hittime->setGeometry(QRect(400, 164, 75, 35));
        lcd_hittime->setSizeIncrement(QSize(0, 0));
        lcd_hittime->setFont(font);
        lcd_hittime->setContextMenuPolicy(Qt::DefaultContextMenu);
        lcd_hittime->setAcceptDrops(false);
        lcd_hittime->setFrameShape(QFrame::Box);
        lcd_hittime->setFrameShadow(QFrame::Plain);
        lcd_hittime->setLineWidth(2);
        lcd_hittime->setMidLineWidth(0);
        lcd_hittime->setSmallDecimalPoint(false);
        lcd_hittime->setDigitCount(8);
        lcd_hittime->setMode(QLCDNumber::Dec);
        lcd_scoreboard = new QLCDNumber(gameWindow);
        lcd_scoreboard->setObjectName(QStringLiteral("lcd_scoreboard"));
        lcd_scoreboard->setGeometry(QRect(260, 10, 70, 35));
        lcd_scoreboard->setSizeIncrement(QSize(0, 0));
        lcd_scoreboard->setFont(font);
        lcd_scoreboard->setContextMenuPolicy(Qt::DefaultContextMenu);
        lcd_scoreboard->setAcceptDrops(false);
        lcd_scoreboard->setFrameShape(QFrame::Box);
        lcd_scoreboard->setFrameShadow(QFrame::Plain);
        lcd_scoreboard->setLineWidth(2);
        lcd_scoreboard->setMidLineWidth(0);
        lcd_scoreboard->setSmallDecimalPoint(false);
        lcd_scoreboard->setDigitCount(8);
        lcd_scoreboard->setMode(QLCDNumber::Dec);
        TimeTitle = new QLabel(gameWindow);
        TimeTitle->setObjectName(QStringLiteral("TimeTitle"));
        TimeTitle->setGeometry(QRect(340, 10, 50, 35));
        TimeTitle->setFont(font1);
        ScoreTitle = new QLabel(gameWindow);
        ScoreTitle->setObjectName(QStringLiteral("ScoreTitle"));
        ScoreTitle->setGeometry(QRect(200, 10, 50, 35));
        ScoreTitle->setFont(font1);
        HitandMiss = new QLabel(gameWindow);
        HitandMiss->setObjectName(QStringLiteral("HitandMiss"));
        HitandMiss->setGeometry(QRect(330, 164, 50, 35));
        HitandMiss->setFont(font1);
        DrumLine = new QLabel(gameWindow);
        DrumLine->setObjectName(QStringLiteral("DrumLine"));
        DrumLine->setGeometry(QRect(480, 0, 628, 320));
        DrumLine->setPixmap(QPixmap(QString::fromUtf8(":/pic/pic/DrumLine.png")));
        taikoAnimate = new QLabel(gameWindow);
        taikoAnimate->setObjectName(QStringLiteral("taikoAnimate"));
        taikoAnimate->setGeometry(QRect(0, 0, 160, 80));
        HitDrum = new QLabel(gameWindow);
        HitDrum->setObjectName(QStringLiteral("HitDrum"));
        HitDrum->setGeometry(QRect(-8, 87, 91, 61));
        HitDrum->setPixmap(QPixmap(QString::fromUtf8(":/pic/pic/hitdrum.png")));

        retranslateUi(gameWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), background, SLOT(clear()));

        QMetaObject::connectSlotsByName(gameWindow);
    } // setupUi

    void retranslateUi(QWidget *gameWindow)
    {
        gameWindow->setWindowTitle(QApplication::translate("gameWindow", "Form", 0));
        background->setText(QString());
        pushButton->setText(QApplication::translate("gameWindow", "\351\233\242\351\226\213", 0));
        label_Key_F->setText(QApplication::translate("gameWindow", "F", 0));
        label_Key_J->setText(QApplication::translate("gameWindow", "J", 0));
        TimeTitle->setText(QApplication::translate("gameWindow", "Time:", 0));
        ScoreTitle->setText(QApplication::translate("gameWindow", "Score:", 0));
        HitandMiss->setText(QApplication::translate("gameWindow", "Hit:", 0));
        DrumLine->setText(QString());
        taikoAnimate->setText(QString());
        HitDrum->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class gameWindow: public Ui_gameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
