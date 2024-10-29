#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QFileDialog>
#include <QCloseEvent>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    txtEdit=new HelloTxtEdit();

    setCentralWidget(txtEdit);

    //文件
    connect(ui->actionNew,SIGNAL(triggered()),this,SLOT(newFile()));
    connect(ui->actionSave,SIGNAL(triggered()),this,SLOT(save()));
    connect(ui->actionOpen,SIGNAL(triggered()),this,SLOT(open()));
    connect(ui->actionSaveAs,SIGNAL(triggered()),this,SLOT(saveAs()));
    connect(txtEdit,SIGNAL(modified()),this,SLOT(txtEditModified()));
    connect(ui->actionExit, SIGNAL(triggered()), this, SLOT(close()));

    // 编辑
    connect(ui->actionUndo, SIGNAL(triggered()), this, SLOT(undo()));
    connect(txtEdit, SIGNAL(undoAvailable(bool )), this, SLOT(setUndoEnable(bool)));

    ui->actionUndo->setEnabled(false);
    connect(ui->actionCut, SIGNAL(triggered()), this, SLOT(cut()));
    ui->actionCut->setEnabled(false);
    connect(ui->actionCopy, SIGNAL(triggered()), this, SLOT(copy()));
    ui->actionCopy->setEnabled(false);
    connect(ui->actionPaste, SIGNAL(triggered()), this, SLOT(paste()));
    connect(ui->actionDelete, SIGNAL(triggered()), this, SLOT(cut()));
    ui->actionDelete->setEnabled(false);
    connect(txtEdit, SIGNAL(copyAvailable(bool )), this, SLOT(setCutCopyDelEnable(bool)));

    setCurrentFile("");
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::save()
{
    if(currFileName.isEmpty())
    {
        return saveAs();
    }
    else {
        return saveFile(currFileName);
    }
}
bool MainWindow::open()
{
    if(isOkToContinue())
    {
        QString fileName = QFileDialog::getOpenFileName(this,
                                   tr("Open HelloTxt"), ".",
                                   tr("text files (*.txt)"));
        if (fileName.isEmpty())
            return false;

        if(!txtEdit->loadFromFile(fileName))
        {
            return false;
        }

        setCurrentFile(fileName);
        return true;
    }
    else {
        return false;
    }
}

bool MainWindow::saveAs()
{
    QString fileName = QFileDialog::getSaveFileName(this,
                               tr("Save HelloTxt"), ".",
                               tr("text files (*.txt)"));
    if (fileName.isEmpty())
        return false;

    return saveFile(fileName);
}

bool MainWindow::newFile()
{
    if(isOkToContinue())
    {
        txtEdit->clear();
        setCurrentFile("");
        return true;
    }
    else {
        return false;
    }
}

bool MainWindow::isOkToContinue()
{
    if(isWindowModified())
    {
        int r = QMessageBox::warning(this, tr("HelloTxt"),
                        tr("The document has been modified.\n"
                           "Do you want to save your changes?"),
                        QMessageBox::Yes | QMessageBox::No
                        | QMessageBox::Cancel);
        if (r == QMessageBox::Yes) {
            return save();
        } else if (r == QMessageBox::Cancel) {
            return false;
        }
    }
    return true;
}

bool MainWindow::saveFile(QString& fileName)
{
    if(!txtEdit->saveToFile(fileName))
    {
        return false;
    }
    currFileName=fileName;
    return true;
}

void MainWindow::txtEditModified()
{
    setWindowModified(true);
}

void MainWindow::setCurrentFile(const QString &fileName)
{
    currFileName = fileName;
    setWindowModified(false);

    QString shownName = tr("Untitled");
    if (!currFileName.isEmpty()) {
        shownName = strippedName(currFileName);

    }

    setWindowTitle(tr("%1[*] - %2").arg(shownName)
                                   .arg(tr("HelloTxt")));
}

QString MainWindow::strippedName(const QString &fullFileName)
{
    return QFileInfo(fullFileName).fileName();
}

void MainWindow::undo()
{
    txtEdit->undo();
}

void MainWindow::setUndoEnable(bool activated)
{
    ui->actionUndo->setEnabled(activated);
}

void MainWindow::setCutCopyDelEnable(bool activated)
{
    ui->actionCut->setEnabled(activated);
    ui->actionCopy->setEnabled(activated);
    ui->actionDelete->setEnabled(activated);

}

void MainWindow::cut()
{
    txtEdit->cut();
}

void MainWindow::copy()
{
    txtEdit->copy();
}

void MainWindow::paste()
{
    txtEdit->paste();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    if (isOkToContinue()) {
        event->accept();
    } else {
        event->ignore();
    }
}
