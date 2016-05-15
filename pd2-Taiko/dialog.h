#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QLabel>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    void scoreboardChange(QString score);
    ~Dialog();

private slots:

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
