#ifndef SUDOKUFIELD_H
#define SUDOKUFIELD_H
#include <iostream>
#include <QVector>
#include <QDebug>
#include "emptyfield.h"
//#include "mainwindow.h"

class SudokuField
{


public:
    SudokuField();
    ~SudokuField();
    void fillField(int value, int xCoord, int yCoord);
    void printField();
    void searchEmptyFields();
    void printEmptyFieldList();
    void solve();
    void deleteAll();
    int getFieldValue(int x, int y);
    //QVector<EmptyField*>::iterator getEmptyFieldListIteratorBegin();
    //QVector<EmptyField*>::iterator getEmptyFieldListIteratorEnd();


private:
    int field[9][9];
    QVector<EmptyField*> emptyFieldList;

};

#endif // SUDOKUFIELD_H
