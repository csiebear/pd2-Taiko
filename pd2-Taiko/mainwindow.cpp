#include <QMediaPlayer>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "informdialog.h"
#include "gamewindow.h"
#include "ui_gamewindow.h"
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

void MainWindow::on_actionOpen_triggered()
{

}

void MainWindow::on_actionInformation_triggered()
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
    this->hide();
    musicplayer->stop();
    //gameWindow *game= new gameWindow;
    this->game.show();
}
