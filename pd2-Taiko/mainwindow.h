#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "gamewindow.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_actionOpen_triggered();

    void on_actionInformation_triggered();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    gameWindow game;
    QMediaPlayer * musicplayer= new QMediaPlayer;
};

#endif // MAINWINDOW_H
