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
    QLabel *HitTitle;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_0;

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
        lcd_hittime->setGeometry(QRect(400, 160, 75, 35));
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
        HitTitle = new QLabel(gameWindow);
        HitTitle->setObjectName(QStringLiteral("HitTitle"));
        HitTitle->setGeometry(QRect(330, 160, 50, 35));
        HitTitle->setFont(font1);
        label_1 = new QLabel(gameWindow);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(430, 90, 45, 45));
        label_2 = new QLabel(gameWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(280, 280, 45, 45));
        label_3 = new QLabel(gameWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(280, 280, 45, 45));
        label_4 = new QLabel(gameWindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(280, 280, 45, 45));
        label_5 = new QLabel(gameWindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(280, 280, 45, 45));
        label_6 = new QLabel(gameWindow);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(280, 280, 45, 45));
        label_7 = new QLabel(gameWindow);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(280, 280, 45, 45));
        label_8 = new QLabel(gameWindow);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(280, 280, 45, 45));
        label_9 = new QLabel(gameWindow);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(280, 280, 45, 45));
        label_10 = new QLabel(gameWindow);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(280, 280, 45, 45));
        label_11 = new QLabel(gameWindow);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(280, 280, 45, 45));
        label_12 = new QLabel(gameWindow);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(280, 280, 45, 45));
        label_13 = new QLabel(gameWindow);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(280, 280, 45, 45));
        label_14 = new QLabel(gameWindow);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(280, 280, 45, 45));
        label_15 = new QLabel(gameWindow);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(280, 280, 45, 45));
        label_16 = new QLabel(gameWindow);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(280, 280, 45, 45));
        label_17 = new QLabel(gameWindow);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(280, 280, 45, 45));
        label_18 = new QLabel(gameWindow);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(280, 280, 45, 45));
        label_19 = new QLabel(gameWindow);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(280, 280, 45, 45));
        label_20 = new QLabel(gameWindow);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(280, 280, 45, 45));
        label_21 = new QLabel(gameWindow);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(280, 280, 45, 45));
        label_22 = new QLabel(gameWindow);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(280, 280, 45, 45));
        label_23 = new QLabel(gameWindow);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(280, 280, 45, 45));
        label_24 = new QLabel(gameWindow);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(280, 280, 45, 45));
        label_25 = new QLabel(gameWindow);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(280, 280, 45, 45));
        label_26 = new QLabel(gameWindow);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(280, 280, 45, 45));
        label_27 = new QLabel(gameWindow);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(280, 280, 45, 45));
        label_28 = new QLabel(gameWindow);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(280, 280, 45, 45));
        label_29 = new QLabel(gameWindow);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(280, 280, 45, 45));
        label_0 = new QLabel(gameWindow);
        label_0->setObjectName(QStringLiteral("label_0"));
        label_0->setGeometry(QRect(430, 90, 45, 45));

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
        HitTitle->setText(QApplication::translate("gameWindow", "Hit:", 0));
        label_1->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
        label_12->setText(QString());
        label_13->setText(QString());
        label_14->setText(QString());
        label_15->setText(QString());
        label_16->setText(QString());
        label_17->setText(QString());
        label_18->setText(QString());
        label_19->setText(QString());
        label_20->setText(QString());
        label_21->setText(QString());
        label_22->setText(QString());
        label_23->setText(QString());
        label_24->setText(QString());
        label_25->setText(QString());
        label_26->setText(QString());
        label_27->setText(QString());
        label_28->setText(QString());
        label_29->setText(QString());
        label_0->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class gameWindow: public Ui_gameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
