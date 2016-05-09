#include "gamewindow.h"
#include "ui_gamewindow.h"

#include <QtCore>
#include <QWidget>
#include <QKeyEvent>
#include <QDialog>
#include <qtimer.h>
#include <time.h>
#include <QMediaPlayer>

gameWindow::gameWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gameWindow)
{
    ui->setupUi(this);
    isIni=0;
    BlueDrum.load("qrc:pic/pic/Drum1.jpg");
    RedDrum.load("qrc:pic/pic/Drum2.jpgg");
}

gameWindow::~gameWindow()
{
    delete ui;
}

void gameWindow::setDrum()
{
    srand(time(NULL));
    ui->label_0->setPixmap(QPixmap::fromImage(RedDrum));//assign as red drum
//creating the 30 drum face and initialize them
    for(int i =0; i< 30 ;i++)
    {
        int random=rand()%2;
        //assign the drum face
        //if(random==0)
            //ui->drum_array->setPixmap(QPixmap::fromImage(RedDrum));//assign as red drum
        //else
            //ui->drum_array->setPixmap(QPixmap::fromImage(BlueDrum));//assign as red drum
    }
}

void gameWindow::moveDrum()
{
    xpox[0]=xpox[0]-3;
    ui->label_0->setGeometry(45,45,xpox[0],90);
}

void gameWindow::on_pushButton_clicked()
{
    close();
}

void gameWindow::refresh()
{
    QPalette sample_palette;
    sample_palette.setColor(QPalette::Background,QColor(0,0,0,255));
    ui->label_Key_F->setPalette(sample_palette);
    ui->label_Key_J->setPalette(sample_palette);
}

void gameWindow::lcdTimeChange()
{
    count++;
    ui->lcd_timeboard->display(count/10);
    moveDrum();
}

void gameWindow::lcdScoreChange()
{
    ui->lcd_scoreboard->display(score);
}


void gameWindow::finish()
{
    //finish;
    //QPushButton accept,exit;
    //accept.setText("再玩一次");
    //exit.setText("離開");
    //finishDialog.setModal(true);
    //finishDialog.show();
}

void gameWindow::ini()
{
    isIni=1;
    QTimer *timer = new QTimer(this);
    QTimer *timer2 = new QTimer(this);
    QDateTime startTime=QDateTime::currentDateTime();
    //0.1 sec(100 ms) change the timer and refresh the key pad
    connect(timer , SIGNAL(timeout()) , this , SLOT( lcdTimeChange()) );
    connect(timer , SIGNAL(timeout()) , this , SLOT( refresh()) );
    connect(timer , SIGNAL(timeout()) , this , SLOT( lcdScoreChange()) );
    timer->start(100);
    //30sec (30*1000 ms) set the timer2 timeout and pop out the dialog
    score=5;//the test score

    connect(timer2 , SIGNAL(timeout()) , this , SLOT( finish() ) );
    timer2->start(5000);

    F_hittime=0;
    ui->lcd_scoreboard->setPalette(Qt::black);
    ui->lcd_timeboard->setPalette(Qt::black);
    ui->lcd_hittime->setPalette(Qt::black);

    //create the media player for playing the sound
    mainMusic  = new QMediaPlayer();
    mainMusic->setMedia(QUrl("qrc:sound/sound/background.mp3"));
    mainMusic->play();

    xpox[0]=480;

    setDrum();
}

void gameWindow::keyPressEvent(QKeyEvent * event)
{
    QMediaPlayer * punchsound;
    punchsound = new QMediaPlayer();
    QPalette sample_palette;
    //sample_palette.setColor(QPalette::Window, Qt::white);
    sample_palette.setColor(QPalette::WindowText, Qt::red);
    //sample_palette.setColor(QPalette::Background,QColor(0,0,0,255));
    switch(event->key()){
        case Qt::Key_S:
            if(isIni==0){
                ini();
            }
            break;

        case Qt::Key_F:
            ui->label_Key_F->show();
            ui->label_Key_F->setPalette(sample_palette);
            ui->label_Key_F->setText("F");
            F_hittime++;
            score++;//test score change
            ui->lcd_hittime->display(F_hittime);
            punchsound->setMedia(QUrl("qrc:sound/sound/drum_dong.wav"));
            punchsound->play();
            break;

        case Qt::Key_J:
            ui->label_Key_J->show();
            ui->label_Key_J->setPalette(sample_palette);
            ui->label_Key_J->setText("J");
            J_hittime++;
            punchsound->setMedia(QUrl("qrc:sound/sound/drum_dong.wav"));
            punchsound->play();
            break;
        default:
            QWidget::keyPressEvent(event);
    }
}
