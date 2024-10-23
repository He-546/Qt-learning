#include <QMessageBox>
#include <QApplication>
#include <QFile>

#include "cell.h"
#include "spreadsheet.h"


SpreadSheet::SpreadSheet(QWidget *parent) : QTableWidget(parent)
{
    autoRecalc=true;
    setSelectionMode(ContiguousSelection);

    connect(this,SIGNAL(itemChanged(QTableWidgetItem*)),
            this,SLOT(somethingChanged()));

    clear();
}

void SpreadSheet::clear()
{
    setRowCount(0);
    setColumnCount(0);

    setRowCount(RowCount);
    setColumnCount(ColumnCount);

    for(int i=0;i<ColumnCount;++i)
    {
        QTableWidgetItem* item=new QTableWidgetItem;
        item->setText(QString(QChar('A'+i)));
        setHorizontalHeaderItem(i,item);
    }
    setCurrentCell(0,0);
}


QString SpreadSheet::text(int row,int column) const
{
    QTableWidgetItem* itemEle=item(row,column);
    if(itemEle)
    {
        return itemEle->text();
    }
    else {
        return "";
    }
}

bool SpreadSheet::writeFile(const QString& fileName)
{
    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly)) {
        QMessageBox::warning(this, tr("Spreadsheet"),
                             tr("Cannot write file %1:\n%2.")
                             .arg(file.fileName())
                             .arg(file.errorString()));
        return false;
    }

    QDataStream out(&file);
    out.setVersion(QDataStream::Qt_4_3);

    out << quint32(MagicNumber);

    QApplication::setOverrideCursor(Qt::WaitCursor);
    for (int row = 0; row < RowCount; ++row) {
        for (int column = 0; column < ColumnCount; ++column) {
            QString str = text(row, column);
            if (!str.isEmpty())
                out << quint16(row) << quint16(column) << str;
        }
    }
    QApplication::restoreOverrideCursor();
    return true;
}

bool SpreadSheet::readFile(const QString &fileName)
{
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, tr("Spreadsheet"),
                             tr("Cannot read file %1:\n%2.")
                             .arg(file.fileName())
                             .arg(file.errorString()));
        return false;
    }

    QDataStream in(&file);
    in.setVersion(QDataStream::Qt_4_3);

    quint32 magic;
    in >> magic;
    if (magic != MagicNumber) {
        QMessageBox::warning(this, tr("Spreadsheet"),
                             tr("The file is not a Spreadsheet file."));
        return false;
    }

    clear();

    quint16 row;
    quint16 column;
    QString str;

    QApplication::setOverrideCursor(Qt::WaitCursor);
    while (!in.atEnd()) {
        in >> row >> column >> str;
        QTableWidgetItem* item=new QTableWidgetItem;
        item->setText(str);
        setItem(row,column,item);
    }
    QApplication::restoreOverrideCursor();
    return true;
}

void SpreadSheet::somethingChanged()
{
    emit modified();
}

