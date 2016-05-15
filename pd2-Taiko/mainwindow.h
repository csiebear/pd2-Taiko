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
    void on_actionInforPop_triggered();
    void on_pushButton_clicked();
    void on_actionClose_triggered();

private:
    Ui::MainWindow *ui;
    gameWindow * gamewin;//game ui
    QMediaPlayer * musicplayer= new QMediaPlayer;
};

#endif // MAINWINDOW_H
