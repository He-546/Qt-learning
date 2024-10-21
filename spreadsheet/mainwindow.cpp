#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionOpen, SIGNAL(triggered()), this, SLOT(newFile()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::newFile()
{
    qDebug() << "This is a debug message";
}

void MainWindow::open()
{

}
void MainWindow::save()
{

}
void MainWindow::saveAs()
{

}
