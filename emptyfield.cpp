#include "emptyfield.h"
#include <QDebug>

EmptyField::EmptyField(int x, int y): xCoord(x), yCoord(y)
{

}

int EmptyField::get_xCoord()
{
    return this->yCoord;
}

int EmptyField::get_yCoord()
{
    return this->xCoord;
}

bool EmptyField::checkVertical(int testValue, int sudokuField[9][9])
{
    int xCoord = this->get_xCoord();

    for (int i = 0; i < 9; ++i) {

        if(sudokuField[xCoord][i]==testValue){

            return false;
        }
    }
    return true;
}

bool EmptyField::checkHorizontal(int testValue, int sudokuField[9][9])
{
    int yCoord = this->get_yCoord();

    for (int i = 0; i < 9; ++i) {

        if(sudokuField[i][yCoord] == testValue){

            return false;
        }
    }
    return true;
}

bool EmptyField::checkSquare(int testValue, int sudokuField[9][9])
{
    int xCoord = this->get_xCoord();
    int yCoord = this->get_yCoord();
    int xCorner = 0;
    int yCorner = 0;

    if(xCoord <= 2)
    {
        xCorner = 0;
    }
    else if (xCoord <= 5 && xCoord >= 3)
    {
        xCorner = 3;
    }
    else
    {
        xCorner = 6;
    }

    if(yCoord <= 2)
    {
        yCorner = 0;
    }
    else if (yCoord <= 5 && yCoord >= 3)
    {
        yCorner = 3;
    }
    else
    {
        yCorner = 6;
    }

    for (int i = xCorner; i < xCorner+3; ++i)
    {
        for (int j = yCorner; j < yCorner+3; ++j)
        {
            if(sudokuField[i][j] == testValue)
            {
                return false;
            }
        }
    }
    return true;
}

bool EmptyField::testValue(int testValue, int sudokuField[9][9])
{
    if(checkHorizontal(testValue, sudokuField) && checkVertical(testValue, sudokuField) && checkSquare(testValue, sudokuField))

    {//qDebug() << "test passed";
       return true;

    }
    //qDebug() << "test not passed";
    return false;
}

void EmptyField::setRemValue(int value)
{
   this->RemValues << value;
}

bool EmptyField::compare(int value)
{
    if(this->RemValues.indexOf(value) != -1 )
    {
        return false;
    }
    return true;
}

void EmptyField::delRemValue()
{
    QVector<int> RemValues;
    this->RemValues.swap(RemValues);

}
