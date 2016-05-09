#ifndef INFORMDIALOG_H
#define INFORMDIALOG_H

#include <QDialog>

namespace Ui {
class InformDialog;
}

class InformDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InformDialog(QWidget *parent = 0);
    ~InformDialog();

private:
    Ui::InformDialog *ui;
};

#endif // INFORMDIALOG_H
