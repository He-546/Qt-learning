/********************************************************************************
** Form generated from reading UI file 'finddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDDIALOG_H
#define UI_FINDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FindDialog
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QCheckBox *caseCheckBox;
    QCheckBox *backwardCheckBox;
    QPushButton *findButton;
    QPushButton *closeButton;

    void setupUi(QDialog *FindDialog)
    {
        if (FindDialog->objectName().isEmpty())
            FindDialog->setObjectName(QStringLiteral("FindDialog"));
        FindDialog->resize(393, 165);
        label = new QLabel(FindDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 81, 17));
        lineEdit = new QLineEdit(FindDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 30, 121, 25));
        caseCheckBox = new QCheckBox(FindDialog);
        caseCheckBox->setObjectName(QStringLiteral("caseCheckBox"));
        caseCheckBox->setGeometry(QRect(30, 80, 101, 23));
        backwardCheckBox = new QCheckBox(FindDialog);
        backwardCheckBox->setObjectName(QStringLiteral("backwardCheckBox"));
        backwardCheckBox->setGeometry(QRect(30, 110, 141, 23));
        findButton = new QPushButton(FindDialog);
        findButton->setObjectName(QStringLiteral("findButton"));
        findButton->setGeometry(QRect(290, 30, 89, 25));
        closeButton = new QPushButton(FindDialog);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setGeometry(QRect(290, 90, 89, 25));

        retranslateUi(FindDialog);

        QMetaObject::connectSlotsByName(FindDialog);
    } // setupUi

    void retranslateUi(QDialog *FindDialog)
    {
        FindDialog->setWindowTitle(QApplication::translate("FindDialog", "FindDialog", Q_NULLPTR));
        label->setText(QApplication::translate("FindDialog", "Find what:", Q_NULLPTR));
        caseCheckBox->setText(QApplication::translate("FindDialog", "Match case", Q_NULLPTR));
        backwardCheckBox->setText(QApplication::translate("FindDialog", "Search backward", Q_NULLPTR));
        findButton->setText(QApplication::translate("FindDialog", "Find", Q_NULLPTR));
        closeButton->setText(QApplication::translate("FindDialog", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FindDialog: public Ui_FindDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDDIALOG_H
