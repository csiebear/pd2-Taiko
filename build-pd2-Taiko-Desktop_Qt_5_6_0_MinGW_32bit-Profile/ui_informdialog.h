/********************************************************************************
** Form generated from reading UI file 'informdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMDIALOG_H
#define UI_INFORMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_InformDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *InformDialog)
    {
        if (InformDialog->objectName().isEmpty())
            InformDialog->setObjectName(QStringLiteral("InformDialog"));
        InformDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(InformDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(InformDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 380, 70));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);
        label->setIndent(-1);
        label_2 = new QLabel(InformDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 130, 381, 21));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2->setWordWrap(true);
        label_2->setIndent(-1);
        label_3 = new QLabel(InformDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 160, 381, 71));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3->setWordWrap(true);
        label_3->setIndent(-1);

        retranslateUi(InformDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), InformDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), InformDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(InformDialog);
    } // setupUi

    void retranslateUi(QDialog *InformDialog)
    {
        InformDialog->setWindowTitle(QApplication::translate("InformDialog", "Dialog", 0));
        label->setText(QApplication::translate("InformDialog", "      \346\255\241\350\277\216\344\275\277\347\224\250\347\224\261\346\235\216\347\242\251\350\273\222\350\243\275\344\275\234\347\232\204\345\244\252\351\274\223\351\201\224\344\272\272\357\274\214\346\234\254\351\201\212\346\210\262\345\217\257\347\266\223\347\224\261\346\273\221\351\274\240\351\273\236\351\201\270\346\203\263\350\246\201\345\237\267\350\241\214\347\232\204\345\213\225\344\275\234\343\200\202\n"
"\351\226\213\345\247\213\351\201\212\346\210\262\345\276\214\357\274\214\345\234\250\351\201\212\346\210\262\351\201\216\347\250\213\344\270\255\351\234\200\351\200\217\351\201\216\351\215\265\347\233\244\346\223\215\347\270\261\343\200\202", 0));
        label_2->setText(QApplication::translate("InformDialog", "\347\260\241\346\230\223\346\223\215\344\275\234\350\252\252\346\230\216\357\274\232", 0));
        label_3->setText(QApplication::translate("InformDialog", "\347\251\272\347\231\275\346\214\211\351\215\265 \351\226\213\345\247\213\351\201\212\346\210\262\n"
" F\343\200\201J\346\225\262\351\274\223(F\345\260\215\346\207\211\347\264\205\351\274\223\343\200\201J\345\260\215\346\207\211\350\227\215\351\274\223)\n"
"", 0));
    } // retranslateUi

};

namespace Ui {
    class InformDialog: public Ui_InformDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMDIALOG_H
