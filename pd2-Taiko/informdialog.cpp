#include "informdialog.h"
#include "ui_informdialog.h"

InformDialog::InformDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InformDialog)
{
    ui->setupUi(this);
}

InformDialog::~InformDialog()
{
    delete ui;
}
