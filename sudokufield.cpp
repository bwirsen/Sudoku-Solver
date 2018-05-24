#include "sudokufield.h"
#include <QMainWindow>


#define X_MAX 9
#define Y_MAX 9

SudokuField::SudokuField()
{

}

SudokuField::~SudokuField()
{

}

void SudokuField::fillField(int value, int xCoord, int yCoord)
{
    this->field[xCoord][yCoord] = value;
}

void SudokuField::printField()
{
    for (int i = 0; i < X_MAX; ++i)
    {
        for (int j = 0; j < Y_MAX; ++j)
        {
            std::cout << this->field[i][j] << " ";
        }

        std::cout<<std::endl;
    }
    std::cout << std::endl;

}

void SudokuField::searchEmptyFields()
{
    for (int i = 0; i < X_MAX; ++i)
    {
        for (int j = 0; j < Y_MAX; ++j)
        {
            if (this->field[i][j] == 0)
            {
                EmptyField* emptyField = new EmptyField(j,i);
                this->emptyFieldList.push_back(emptyField);
            }
        }

        std::cout<<std::endl;
    }
}

void SudokuField::printEmptyFieldList()
{
    std::cout << "Empty fields: " << std::endl;
    for (QVector<EmptyField*>::iterator it = this->emptyFieldList.begin(); it != this->emptyFieldList.end(); ++it) {

        std::cout << "Zeile: " << (*it)->get_xCoord() + 1  << ", Spalte: " << (*it)->get_yCoord() + 1<< std::endl;
    }
}

void SudokuField::solve()
{
    QVector<EmptyField*>::iterator it = this->emptyFieldList.begin();
    while(it!=this->emptyFieldList.end())
    {
        for(int value = 1; value <=9; value++)
        {
            if((*it)->testValue(value, this->field) && (*it)->compare(value))
            {
                this->field[(*it)->get_xCoord()][(*it)->get_yCoord()] = value;
                (*it)->setRemValue(value);

                this->printField();
                it++;
                break;
            }
            if(value == 9)
            {

                (*it)->delRemValue();
                this->field[(*it)->get_xCoord()][(*it)->get_yCoord()] = 0;
                it--;
            }
        }
    }

    this->printField();
}

void SudokuField::deleteAll()
{
    QVector<EmptyField*> emptyFieldList;
    this->emptyFieldList.swap(emptyFieldList);
}

/*QVector<EmptyField*>::iterator SudokuField::getEmptyFieldListIteratorBegin()
{
    QVector<EmptyField*>::iterator it = this->emptyFieldList.begin();
    return it;

}*/

/*QVector<EmptyField*>::iterator SudokuField::getEmptyFieldListIteratorEnd()
{
    QVector<EmptyField*>::iterator it = this->emptyFieldList.end();
    return it;

}*/

int SudokuField::getFieldValue(int x, int y)
{
    return this->field[x-1][y-1];
}





