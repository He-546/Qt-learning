#include "hellotxtedit.h"

#include <QFile>
#include <QMessageBox>
#include <QTextStream>

HelloTxtEdit::HelloTxtEdit(QWidget *parent) : QTextEdit(parent)
{
    connect(this,SIGNAL(textChanged()),this,SLOT(somethingChanged()));
}

bool HelloTxtEdit::saveToFile(QString& fileName)
{
    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly)) {
        QMessageBox::warning(this, tr("HelloTxt"),
                             tr("Cannot write file %1:\n%2.")
                             .arg(file.fileName())
                             .arg(file.errorString()));
        return false;
    }

    QTextStream out(&file);
    out<<this->toPlainText();
    return true;
}

bool HelloTxtEdit::loadFromFile(QString& fileName)
{
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, tr("HelloTxt"),
                             tr("Cannot write file %1:\n%2.")
                             .arg(file.fileName())
                             .arg(file.errorString()));
        return false;
    }

    QTextStream in(&file);
    QString str;
    in>>str;
    this->append(str);
    return true;
}
void HelloTxtEdit::somethingChanged()
{
    emit modified();
}
