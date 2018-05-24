#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "sudokufield.h"



#include <QMainWindow>
#include <QLineEdit>
#include <iostream>
#include <QString>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    void updateGUI();
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_enter_clicked();

    void on_pushButton_solve_clicked();

    void on_actionclear_all_triggered();

private:
    Ui::MainWindow *ui;
    SudokuField sudokuField;
};

#endif // MAINWINDOW_H
