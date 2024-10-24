#ifndef SPREADSHEET_H
#define SPREADSHEET_H

#include <QTableWidget>

class Cell;
class SpreadSheetCompare;

class SpreadSheet : public QTableWidget
{
    Q_OBJECT
public:
    explicit SpreadSheet(QWidget *parent = nullptr);
    void clear();
    QString text(int row,int column) const;

    bool writeFile(const QString& fileName);
    bool readFile(const QString &fileName);

    QTableWidgetSelectionRange selectedRange() const;

signals:
    void modified();

public slots:
    //Edit
    void cut();
    void copy();
    void paste();
    void del();
    void findNext(const QString &str, Qt::CaseSensitivity cs);
    void findPrevious(const QString &str, Qt::CaseSensitivity cs);

private slots:
    void somethingChanged();

private:
    enum{MagicNumber=0x7F51C883,RowCount=999,ColumnCount=26};
    bool autoRecalc;

};

class SpreadSheetCompare
{
public:
    bool operator()(const QStringList& row1,const QStringList& row2) const;
    enum {KeyCount=3};
    int keys[KeyCount];
    bool ascending[KeyCount];
};

#endif // SPREADSHEET_H
