#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "spreadsheet.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
protected:
    void closeEvent(QCloseEvent *event);

private:
    Ui::MainWindow *ui;

    SpreadSheet *spreadsheet;
    QString curFile;
    QStringList recentFiles;
    enum { MaxRecentFiles = 5 };
    QAction* recentFileActions[MaxRecentFiles];
    QAction* separatorAction;

private slots:
    void newFile();
    void open();
    bool save();
    bool saveAs();
    void edit();
    void spreadsheetModifed();
    void openRecentFile();
private:
    bool okToContinue();
    void setCurrentFile(const QString &fileName);
    QString strippedName(const QString &fullFileName);
    bool saveFile(const QString &fileName);
    bool loadFile(const QString &fileName);
    void writeSettings();
    void readSettings();
    void updateRecentFileActions();

};

#endif // MAINWINDOW_H
