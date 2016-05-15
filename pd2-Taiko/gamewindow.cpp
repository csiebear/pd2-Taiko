#include "gamewindow.h"
#include "ui_gamewindow.h"
#include "dialog.h"

#include <QtCore>
#include <QWidget>
#include <QKeyEvent>
#include <QDialog>
#include <qtimer.h>
#include <QMediaPlayer>
//#include <>

//#include <time.h>

gameWindow::gameWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gameWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("太鼓達人(Beta 1.0)");
    isIni=0;
    count=0;
    P1.load(":/pic/pic/P1.png");//load the picture for animation
    P2.load(":/pic/pic/P2.png");
    P3.load(":/pic/pic/P3.png");
    mainTimer = new QTimer(this);
    connect(mainTimer , SIGNAL(timeout()) , this , SLOT( lcdTimeChange()) );
    mainTimer->start(100);

    if(isIni==0)
        ini();
}

gameWindow::~gameWindow()
{
    delete ui;
}


void gameWindow::on_pushButton_clicked()
{
    close();
}

void gameWindow::refresh()
{
    sample_palette.setColor(QPalette::Background,QColor(0,0,0,255));
    ui->label_Key_F->setPalette(sample_palette);//reset The F color
    ui->label_Key_J->setPalette(sample_palette);//reset The J color
    ui->HitDrum->hide();//hide the HitDrum Label(picture)
    //change the pixmap and like the animation
    if(count%10==0 || count%10==1 ||count%10==2 || count%10==3)
    {
        ui->taikoAnimate->setPixmap(QPixmap::fromImage(P1));
    }else if(count%10==4 || count%10==5 ||count%10==6){
        ui->taikoAnimate->setPixmap(QPixmap::fromImage(P2));
    }else
        ui->taikoAnimate->setPixmap(QPixmap::fromImage(P3));

    x=x-3;
    ui->DrumLine->setGeometry(x,0,628,320);
}

void gameWindow::lcdTimeChange()
{
    //modify the timer to countdown at 5/15 11:12
    //the total game the time is 30 sec,so I use the 30 minus the time elapsed
    count++;
    ui->lcd_timeboard->display(30-count/10);
}

void gameWindow::lcdScoreChange()
{
    ui->lcd_scoreboard->display(score);
}


void gameWindow::finish()
{
    //stop the timer,and it will alse stop the send the signal
    timer->stop();
    timer2->stop();
    mainTimer->stop();
    //stop the muisc
    mainMusic->stop();

    Dialog scoreDialog;
    scoreDialog.scoreboardChange(QString::number(score,10));
    scoreDialog.setWindowTitle("最終成績");
    scoreDialog.setModal(true);
    scoreDialog.exec();

}

void gameWindow::ini()
{

    isIni=1;
    x=rand()%200+150;//the DrumLine starting position x is randomly decided
    timer = new QTimer(this);
    timer2 = new QTimer(this);
    QDateTime startTime=QDateTime::currentDateTime();
    //0.1 sec(100 ms) change the timer and refresh the key pad
    connect(timer , SIGNAL(timeout()) , this , SLOT( refresh()) );
    connect(timer , SIGNAL(timeout()) , this , SLOT( lcdScoreChange()) );
    timer->start(100);

    //30sec (30*1000 ms) set the timer2 timeout and pop out the dialog
    connect(timer2 , SIGNAL(timeout()) , this , SLOT( finish() ) );
    timer2->start(32000);

    //for testing the scoreboard dialog is showing or not
    //timer2->start(2000);

    wrongHitTime=0;
    rightHitTime=0;
    ui->lcd_scoreboard->setPalette(Qt::black);
    ui->lcd_timeboard->setPalette(Qt::black);
    ui->lcd_hittime->setPalette(Qt::white);
    QPalette whiteText;
    whiteText.setColor(QPalette::WindowText,Qt::white);
    ui->HitandMiss->setPalette(whiteText);

    //create the media player for playing the sound
    mainMusic  = new QMediaPlayer();
    mainMusic->setMedia(QUrl("qrc:sound/sound/background.mp3"));
    mainMusic->play();

    //initialize the array (red/blue)BeingHit
    for(int i=0;i<=7;i++)
        redBeingHit[i]=false;
    for(int i=0;i<=2;i++)
        blueBeingHit[i]=false;

    score=0;
}

void gameWindow::restart()
{
    timer->stop();
    timer2->stop();
    mainTimer->stop();
    count=0;//reset the mainTimer
    mainMusic->stop();//stop the muisc

    score=0;
    wrongHitTime=0;
    rightHitTime=0;

    mainTimer = new QTimer(this);
    connect(mainTimer , SIGNAL(timeout()) , this , SLOT( lcdTimeChange()) );
    mainTimer->start(100);

    isIni=1;
    x=rand()%200+150;
    timer = new QTimer(this);
    timer2 = new QTimer(this);
    QDateTime startTime=QDateTime::currentDateTime();
    //0.1 sec(100 ms) change the timer and refresh the key pad
    connect(timer , SIGNAL(timeout()) , this , SLOT( refresh()) );
    connect(timer , SIGNAL(timeout()) , this , SLOT( lcdScoreChange()) );
    timer->start(100);

    //30sec (30*1000 ms) set the timer2 timeout and pop out the dialog
    connect(timer2 , SIGNAL(timeout()) , this , SLOT( finish() ) );
    timer2->start(32000);

    ui->lcd_scoreboard->setPalette(Qt::black);
    ui->lcd_timeboard->setPalette(Qt::black);
    ui->lcd_hittime->setPalette(Qt::white);
    QPalette whiteText;
    whiteText.setColor(QPalette::WindowText,Qt::white);
    ui->HitandMiss->setPalette(whiteText);

    //create the media player for playing the sound
    mainMusic  = new QMediaPlayer();
    mainMusic->setMedia(QUrl("qrc:sound/sound/background.mp3"));
    mainMusic->play();

    //reset the array (red/blue)BeingHit
    for(int i=0;i<=7;i++)
        redBeingHit[i]=false;
    for(int i=0;i<=2;i++)
        blueBeingHit[i]=false;


}

int gameWindow::redHitCheck(int Pos)
{
    int hitOrNot=0;
    //check the 8 drum
    for(int i=0;i<=8;i++){
        if((redBeingHit[i]==false) && (Pos+redPox[i])<=40 && (Pos+redPox[i])>=20){
            hitOrNot++;
            redBeingHit[i]=true;
        }
    }
    return hitOrNot;
}

int gameWindow::blueHitCheck(int Pos)
{
    int hitOrNot=0;
    //check the 3 drum
    for(int i=0;i<=2;i++){
        if((blueBeingHit[i]==false) && (Pos+bluePox[i])<=40 && (Pos+bluePox[i])>=20){
            hitOrNot++;
            blueBeingHit[i]=true;
        }
    }
    return hitOrNot;
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

        case Qt::Key_F:
            ui->label_Key_F->setPalette(sample_palette);
            ui->HitDrum->show();//The QLabel showing ,and it means the drum being hit

            if(redHitCheck(x)==1){
                score++;
                rightHitTime++;
                ui->lcd_hittime->display(rightHitTime);
            }else{
                wrongHitTime++;
                ui->lcd_wrongHitTime->display(wrongHitTime);
            }
            punchsound->setMedia(QUrl("qrc:sound/sound/drum_dong.wav"));
            punchsound->play();
            break;

        case Qt::Key_J:
            ui->label_Key_J->setPalette(sample_palette);
            ui->HitDrum->show();//The QLabel showing ,and it means the drum being hit

            if(blueHitCheck(x)==1){
                score++;
                rightHitTime++;
                ui->lcd_hittime->display(rightHitTime);
            }else{
                wrongHitTime++;
                ui->lcd_wrongHitTime->display(wrongHitTime);
            }
            punchsound->setMedia(QUrl("qrc:sound/sound/drum_dong.wav"));
            punchsound->play();
            break;
        default:
            QWidget::keyPressEvent(event);
    }
}


void gameWindow::on_pushButton_2_clicked()
{
    restart();
}
