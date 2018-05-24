#ifndef EMPTYFIELD_H
#define EMPTYFIELD_H

#include <QVector>

class EmptyField
{
public:
    EmptyField(int x, int y);
    int get_xCoord();
    int get_yCoord();
    bool checkVertical(int testValue, int sudokuField[9][9]);
    bool checkHorizontal(int testValue, int sudokuField[9][9]);
    bool checkSquare(int testValue, int sudokuField[9][9]);
    bool testValue(int testValue, int sudokuField[9][9]);
    void setRemValue(int value);
    bool compare(int value);
    void delRemValue();

private:
    int xCoord;
    int yCoord;
    QVector<int> RemValues;
};

#endif // EMPTYFIELD_H
