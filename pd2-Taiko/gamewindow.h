#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QImage>
#include <QWidget>
#include <QMediaPlayer>
#include <QLabel>
#include <QGraphicsView>
#include <QGraphicsScene>

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
    QMediaPlayer * mainMusic;
    QMediaPlayer * punchsound;
    QImage BlueDrum;
    QImage RedDrum;
    int xpox[30];
};

#endif // GAMEWINDOW_H
