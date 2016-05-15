#include <QMediaPlayer>
#include "ui_mainwindow.h"
#include "mainwindow.h"
#include "informdialog.h"
#include "gamewindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //play background music
    musicplayer->setMedia(QUrl("qrc:sound/sound/background.mp3"));
    musicplayer->play();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionInforPop_triggered()
{
    //Create an QDialog object
    InformDialog oDialog;
    //set the windowTitle as gameInformation
    oDialog.setWindowTitle("遊戲簡介");
    oDialog.setModal(true);
    oDialog.exec();
}

void MainWindow::on_pushButton_clicked()
{
    //if we click the start button,then hide the mainwindow and stop the background sound
    this->hide();
    musicplayer->stop();
    //create the new game window and show it
    gamewin= new gameWindow;
    this->gamewin->show();
}

void MainWindow::on_actionClose_triggered()
{
    this->close();
}
