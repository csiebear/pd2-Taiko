/********************************************************************************
** Form generated from reading UI file 'finaldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINALDIALOG_H
#define UI_FINALDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_finalDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *finalDialog)
    {
        if (finalDialog->objectName().isEmpty())
            finalDialog->setObjectName(QStringLiteral("finalDialog"));
        finalDialog->resize(460, 300);
        finalDialog->setFocusPolicy(Qt::StrongFocus);
        label = new QLabel(finalDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 60, 130, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setTextFormat(Qt::PlainText);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(finalDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(250, 60, 130, 50));
        label_2->setFont(font);
        label_2->setTextFormat(Qt::PlainText);
        label_2->setAlignment(Qt::AlignCenter);
        widget = new QWidget(finalDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 190, 441, 51));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setFont(font);

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font);

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font);

        horizontalLayout_2->addWidget(pushButton_2);


        retranslateUi(finalDialog);
        QObject::connect(pushButton_3, SIGNAL(clicked()), finalDialog, SLOT(accept()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), finalDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(finalDialog);
    } // setupUi

    void retranslateUi(QDialog *finalDialog)
    {
        finalDialog->setWindowTitle(QApplication::translate("finalDialog", "Dialog", 0));
        label->setText(QApplication::translate("finalDialog", "Score:", 0));
        label_2->setText(QString());
        pushButton_3->setText(QApplication::translate("finalDialog", "\345\233\236\351\226\213\345\247\213\351\201\270\345\226\256", 0));
        pushButton->setText(QApplication::translate("finalDialog", "\345\206\215\347\216\251\344\270\200\346\254\241", 0));
        pushButton_2->setText(QApplication::translate("finalDialog", "\347\265\220\346\235\237\351\201\212\346\210\262", 0));
    } // retranslateUi

};

namespace Ui {
    class finalDialog: public Ui_finalDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINALDIALOG_H
