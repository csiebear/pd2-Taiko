#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QImage>
#include <QDialog>
#include <QWidget>
#include <QMediaPlayer>
#include <QLabel>
#include "dialog.h"

namespace Ui {
class gameWindow;
}

class gameWindow : public QWidget
{
    Q_OBJECT

public:
    explicit gameWindow(QWidget *parent = 0);
    void moveDrum();
    ~gameWindow();


private slots:
    void on_pushButton_clicked();
    void lcdTimeChange();
    void lcdScoreChange();
    void finish();
    void refresh();
    void redHitCheck(int Pos);
    void blueHitCheck(int Pos);
    void keyPressEvent(QKeyEvent *);
    void ini();
signals:
    void hittimeChange();

private:
    Ui::gameWindow *ui;
    int count=0;
    int score,originScore;
    int F_hittime;
    int J_hittime;
    int numberOfDrum;
    int isIni;
    void showTheDrum();
    void moveTheDrum();
    void setDrum();
    QPalette sample_palette;
    QMediaPlayer * mainMusic;
    QMediaPlayer * startSound;
    QMediaPlayer * punchsound;
    QImage DrumSheet;
    QImage P1,P2,P3;//The QImage for loading the picture of the Taikoman
    QDialog * endWindow;
    Dialog * finalWindow;
    QTimer *timer;//the timer for changing the ui 100ms
    QTimer *timer2;//the timer for stop the game and show the final dialog
    QTimer *mainTimer;//the timer will show in the lcd and it start when we create the gamewindow ui
    int x;
    int redPox[];
    int bluePox[];
};

#endif // GAMEWINDOW_H
