#ifndef HELLOTXTEDIT_H
#define HELLOTXTEDIT_H

#include <QWidget>
#include <QTextEdit>

class HelloTxtEdit : public QTextEdit
{
    Q_OBJECT
public:
    explicit HelloTxtEdit(QWidget *parent = nullptr);

signals:
    void modified();
public slots:
    void somethingChanged();
public:
    bool saveToFile(QString& fileName);
    bool loadFromFile(QString& fileName);
};

#endif // HELLOTXTEDIT_H
