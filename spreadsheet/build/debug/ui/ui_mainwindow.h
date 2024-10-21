/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionEdit;
    QAction *actionNew_2;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionSave_As;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionDelete;
    QAction *actionFind;
    QAction *actionGo_to_Cell;
    QAction *actionRow;
    QAction *actionColumn;
    QAction *actionAll;
    QAction *actionRecalculate;
    QAction *actionSort;
    QAction *actionShow_Grid;
    QAction *actionAuto_Recalculate;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QWidget *centralWidget;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuSelect;
    QMenu *menuTools;
    QMenu *menuOptions;
    QMenu *menuHelp;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(787, 502);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionEdit = new QAction(MainWindow);
        actionEdit->setObjectName(QStringLiteral("actionEdit"));
        actionNew_2 = new QAction(MainWindow);
        actionNew_2->setObjectName(QStringLiteral("actionNew_2"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QStringLiteral("actionDelete"));
        actionFind = new QAction(MainWindow);
        actionFind->setObjectName(QStringLiteral("actionFind"));
        actionGo_to_Cell = new QAction(MainWindow);
        actionGo_to_Cell->setObjectName(QStringLiteral("actionGo_to_Cell"));
        actionRow = new QAction(MainWindow);
        actionRow->setObjectName(QStringLiteral("actionRow"));
        actionColumn = new QAction(MainWindow);
        actionColumn->setObjectName(QStringLiteral("actionColumn"));
        actionAll = new QAction(MainWindow);
        actionAll->setObjectName(QStringLiteral("actionAll"));
        actionRecalculate = new QAction(MainWindow);
        actionRecalculate->setObjectName(QStringLiteral("actionRecalculate"));
        actionSort = new QAction(MainWindow);
        actionSort->setObjectName(QStringLiteral("actionSort"));
        actionShow_Grid = new QAction(MainWindow);
        actionShow_Grid->setObjectName(QStringLiteral("actionShow_Grid"));
        actionAuto_Recalculate = new QAction(MainWindow);
        actionAuto_Recalculate->setObjectName(QStringLiteral("actionAuto_Recalculate"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 787, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuSelect = new QMenu(menuEdit);
        menuSelect->setObjectName(QStringLiteral("menuSelect"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QStringLiteral("menuOptions"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuOptions->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew_2);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionDelete);
        menuEdit->addAction(menuSelect->menuAction());
        menuEdit->addSeparator();
        menuEdit->addAction(actionFind);
        menuEdit->addAction(actionGo_to_Cell);
        menuSelect->addAction(actionRow);
        menuSelect->addAction(actionColumn);
        menuSelect->addAction(actionAll);
        menuTools->addAction(actionRecalculate);
        menuTools->addAction(actionSort);
        menuOptions->addAction(actionShow_Grid);
        menuOptions->addAction(actionAuto_Recalculate);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAbout_Qt);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionNew->setText(QApplication::translate("MainWindow", "New", Q_NULLPTR));
        actionEdit->setText(QApplication::translate("MainWindow", "Edit", Q_NULLPTR));
        actionNew_2->setText(QApplication::translate("MainWindow", "New", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        actionSave->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As", Q_NULLPTR));
        actionCut->setText(QApplication::translate("MainWindow", "Cut", Q_NULLPTR));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", Q_NULLPTR));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", Q_NULLPTR));
        actionDelete->setText(QApplication::translate("MainWindow", "Delete", Q_NULLPTR));
        actionFind->setText(QApplication::translate("MainWindow", "Find", Q_NULLPTR));
        actionGo_to_Cell->setText(QApplication::translate("MainWindow", "Go to Cell", Q_NULLPTR));
        actionRow->setText(QApplication::translate("MainWindow", "Row", Q_NULLPTR));
        actionColumn->setText(QApplication::translate("MainWindow", "Column", Q_NULLPTR));
        actionAll->setText(QApplication::translate("MainWindow", "All", Q_NULLPTR));
        actionRecalculate->setText(QApplication::translate("MainWindow", "Recalculate", Q_NULLPTR));
        actionSort->setText(QApplication::translate("MainWindow", "Sort", Q_NULLPTR));
        actionShow_Grid->setText(QApplication::translate("MainWindow", "Show Grid", Q_NULLPTR));
        actionAuto_Recalculate->setText(QApplication::translate("MainWindow", "Auto-Recalculate", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "About", Q_NULLPTR));
        actionAbout_Qt->setText(QApplication::translate("MainWindow", "About Qt", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", Q_NULLPTR));
        menuSelect->setTitle(QApplication::translate("MainWindow", "Select", Q_NULLPTR));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", Q_NULLPTR));
        menuOptions->setTitle(QApplication::translate("MainWindow", "Options", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
