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
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSaveAs;
    QAction *actionPageSetting;
    QAction *actionPrint;
    QAction *actionExit;
    QAction *actionUndo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionDelete;
    QAction *actionFind;
    QAction *actionGoto;
    QAction *actionSelectAll;
    QAction *actionData;
    QAction *actionFontSetting;
    QAction *actionShowStatusBar;
    QAction *actionAutoChangeLine;
    QAction *actionReduce;
    QAction *actionEnlarge;
    QAction *actionToDefault;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName(QStringLiteral("actionSaveAs"));
        actionPageSetting = new QAction(MainWindow);
        actionPageSetting->setObjectName(QStringLiteral("actionPageSetting"));
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QStringLiteral("actionPrint"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
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
        actionGoto = new QAction(MainWindow);
        actionGoto->setObjectName(QStringLiteral("actionGoto"));
        actionSelectAll = new QAction(MainWindow);
        actionSelectAll->setObjectName(QStringLiteral("actionSelectAll"));
        actionData = new QAction(MainWindow);
        actionData->setObjectName(QStringLiteral("actionData"));
        actionFontSetting = new QAction(MainWindow);
        actionFontSetting->setObjectName(QStringLiteral("actionFontSetting"));
        actionShowStatusBar = new QAction(MainWindow);
        actionShowStatusBar->setObjectName(QStringLiteral("actionShowStatusBar"));
        actionAutoChangeLine = new QAction(MainWindow);
        actionAutoChangeLine->setObjectName(QStringLiteral("actionAutoChangeLine"));
        actionReduce = new QAction(MainWindow);
        actionReduce->setObjectName(QStringLiteral("actionReduce"));
        actionEnlarge = new QAction(MainWindow);
        actionEnlarge->setObjectName(QStringLiteral("actionEnlarge"));
        actionToDefault = new QAction(MainWindow);
        actionToDefault->setObjectName(QStringLiteral("actionToDefault"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 28));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        menu_4 = new QMenu(menu_3);
        menu_4->setObjectName(QStringLiteral("menu_4"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(actionNew);
        menu->addAction(actionOpen);
        menu->addAction(actionSave);
        menu->addAction(actionSaveAs);
        menu->addSeparator();
        menu->addAction(actionPageSetting);
        menu->addAction(actionPrint);
        menu->addSeparator();
        menu->addAction(actionExit);
        menu_2->addAction(actionUndo);
        menu_2->addAction(actionCut);
        menu_2->addAction(actionCopy);
        menu_2->addAction(actionPaste);
        menu_2->addAction(actionDelete);
        menu_2->addAction(actionFind);
        menu_2->addAction(actionGoto);
        menu_2->addSeparator();
        menu_2->addAction(actionSelectAll);
        menu_2->addAction(actionData);
        menu_2->addSeparator();
        menu_2->addAction(actionFontSetting);
        menu_3->addAction(menu_4->menuAction());
        menu_3->addAction(actionShowStatusBar);
        menu_3->addAction(actionAutoChangeLine);
        menu_4->addAction(actionReduce);
        menu_4->addAction(actionEnlarge);
        menu_4->addAction(actionToDefault);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionNew->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
        actionSave->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", Q_NULLPTR));
        actionSaveAs->setText(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272", Q_NULLPTR));
        actionPageSetting->setText(QApplication::translate("MainWindow", "\351\241\265\351\235\242\350\256\276\347\275\256", Q_NULLPTR));
        actionPrint->setText(QApplication::translate("MainWindow", "\346\211\223\345\215\260", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
        actionUndo->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200", Q_NULLPTR));
        actionCut->setText(QApplication::translate("MainWindow", "\345\211\252\345\210\207", Q_NULLPTR));
        actionCopy->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266", Q_NULLPTR));
        actionPaste->setText(QApplication::translate("MainWindow", "\347\262\230\350\264\264", Q_NULLPTR));
        actionDelete->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", Q_NULLPTR));
        actionFind->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276", Q_NULLPTR));
        actionGoto->setText(QApplication::translate("MainWindow", "\350\275\254\345\210\260", Q_NULLPTR));
        actionSelectAll->setText(QApplication::translate("MainWindow", "\345\205\250\351\200\211", Q_NULLPTR));
        actionData->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264/\346\227\245\346\234\237", Q_NULLPTR));
        actionFontSetting->setText(QApplication::translate("MainWindow", "\345\255\227\344\275\223", Q_NULLPTR));
        actionShowStatusBar->setText(QApplication::translate("MainWindow", "\347\212\266\346\200\201\346\240\217", Q_NULLPTR));
        actionAutoChangeLine->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\346\215\242\350\241\214", Q_NULLPTR));
        actionReduce->setText(QApplication::translate("MainWindow", "\347\274\251\345\260\217", Q_NULLPTR));
        actionEnlarge->setText(QApplication::translate("MainWindow", "\346\224\276\345\244\247", Q_NULLPTR));
        actionToDefault->setText(QApplication::translate("MainWindow", "\350\277\230\345\216\237\351\273\230\350\256\244\346\257\224\344\276\213", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221", Q_NULLPTR));
        menu_3->setTitle(QApplication::translate("MainWindow", "\346\237\245\347\234\213", Q_NULLPTR));
        menu_4->setTitle(QApplication::translate("MainWindow", "\347\274\251\346\224\276", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
