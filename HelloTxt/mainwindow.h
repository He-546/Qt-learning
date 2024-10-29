#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "hellotxtedit.h"

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
protected:
    void closeEvent(QCloseEvent *event);

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    HelloTxtEdit* txtEdit;
    QString currFileName;

private:
    bool isOkToContinue();
    bool saveFile(QString& fileName);
    void setCurrentFile(const QString &fileName);
    QString strippedName(const QString &fullFileName);

private slots:
    bool save();
    bool newFile();
    bool saveAs();
    bool open();
    void txtEditModified();

    void undo();
    void setUndoEnable(bool activated);
    void setCutCopyDelEnable(bool activated);
    void cut();
    void copy();
    void paste();


};

#endif // MAINWINDOW_H
