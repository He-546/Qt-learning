#ifndef CELL_H
#define CELL_H

#include <QTableWidgetItem>

class Cell : public QTableWidgetItem
{
public:
    Cell();
private:
    mutable QVariant cachedValue;
    mutable bool cacheIsDirty;
};

#endif // CELL_H
