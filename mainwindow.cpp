#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateGUI()
{
    ui->lineEdit_11->setText(QString::number(sudokuField.getFieldValue(1,1)));
    ui->lineEdit_12->setText(QString::number(sudokuField.getFieldValue(1,2)));
    ui->lineEdit_13->setText(QString::number(sudokuField.getFieldValue(1,3)));
    ui->lineEdit_14->setText(QString::number(sudokuField.getFieldValue(1,4)));
    ui->lineEdit_15->setText(QString::number(sudokuField.getFieldValue(1,5)));
    ui->lineEdit_16->setText(QString::number(sudokuField.getFieldValue(1,6)));
    ui->lineEdit_17->setText(QString::number(sudokuField.getFieldValue(1,7)));
    ui->lineEdit_18->setText(QString::number(sudokuField.getFieldValue(1,8)));
    ui->lineEdit_19->setText(QString::number(sudokuField.getFieldValue(1,9)));
    ui->lineEdit_21->setText(QString::number(sudokuField.getFieldValue(2,1)));
    ui->lineEdit_22->setText(QString::number(sudokuField.getFieldValue(2,2)));
    ui->lineEdit_23->setText(QString::number(sudokuField.getFieldValue(2,3)));
    ui->lineEdit_24->setText(QString::number(sudokuField.getFieldValue(2,4)));
    ui->lineEdit_25->setText(QString::number(sudokuField.getFieldValue(2,5)));
    ui->lineEdit_26->setText(QString::number(sudokuField.getFieldValue(2,6)));
    ui->lineEdit_27->setText(QString::number(sudokuField.getFieldValue(2,7)));
    ui->lineEdit_28->setText(QString::number(sudokuField.getFieldValue(2,8)));
    ui->lineEdit_29->setText(QString::number(sudokuField.getFieldValue(2,9)));
    ui->lineEdit_31->setText(QString::number(sudokuField.getFieldValue(3,1)));
    ui->lineEdit_32->setText(QString::number(sudokuField.getFieldValue(3,2)));
    ui->lineEdit_33->setText(QString::number(sudokuField.getFieldValue(3,3)));
    ui->lineEdit_34->setText(QString::number(sudokuField.getFieldValue(3,4)));
    ui->lineEdit_35->setText(QString::number(sudokuField.getFieldValue(3,5)));
    ui->lineEdit_36->setText(QString::number(sudokuField.getFieldValue(3,6)));
    ui->lineEdit_37->setText(QString::number(sudokuField.getFieldValue(3,7)));
    ui->lineEdit_38->setText(QString::number(sudokuField.getFieldValue(3,8)));
    ui->lineEdit_39->setText(QString::number(sudokuField.getFieldValue(3,9)));
    ui->lineEdit_41->setText(QString::number(sudokuField.getFieldValue(4,1)));
    ui->lineEdit_42->setText(QString::number(sudokuField.getFieldValue(4,2)));
    ui->lineEdit_43->setText(QString::number(sudokuField.getFieldValue(4,3)));
    ui->lineEdit_44->setText(QString::number(sudokuField.getFieldValue(4,4)));
    ui->lineEdit_45->setText(QString::number(sudokuField.getFieldValue(4,5)));
    ui->lineEdit_46->setText(QString::number(sudokuField.getFieldValue(4,6)));
    ui->lineEdit_47->setText(QString::number(sudokuField.getFieldValue(4,7)));
    ui->lineEdit_48->setText(QString::number(sudokuField.getFieldValue(4,8)));
    ui->lineEdit_49->setText(QString::number(sudokuField.getFieldValue(4,9)));
    ui->lineEdit_51->setText(QString::number(sudokuField.getFieldValue(5,1)));
    ui->lineEdit_52->setText(QString::number(sudokuField.getFieldValue(5,2)));
    ui->lineEdit_53->setText(QString::number(sudokuField.getFieldValue(5,3)));
    ui->lineEdit_54->setText(QString::number(sudokuField.getFieldValue(5,4)));
    ui->lineEdit_55->setText(QString::number(sudokuField.getFieldValue(5,5)));
    ui->lineEdit_56->setText(QString::number(sudokuField.getFieldValue(5,6)));
    ui->lineEdit_57->setText(QString::number(sudokuField.getFieldValue(5,7)));
    ui->lineEdit_58->setText(QString::number(sudokuField.getFieldValue(5,8)));
    ui->lineEdit_59->setText(QString::number(sudokuField.getFieldValue(5,9)));
    ui->lineEdit_61->setText(QString::number(sudokuField.getFieldValue(6,1)));
    ui->lineEdit_62->setText(QString::number(sudokuField.getFieldValue(6,2)));
    ui->lineEdit_63->setText(QString::number(sudokuField.getFieldValue(6,3)));
    ui->lineEdit_64->setText(QString::number(sudokuField.getFieldValue(6,4)));
    ui->lineEdit_65->setText(QString::number(sudokuField.getFieldValue(6,5)));
    ui->lineEdit_66->setText(QString::number(sudokuField.getFieldValue(6,6)));
    ui->lineEdit_67->setText(QString::number(sudokuField.getFieldValue(6,7)));
    ui->lineEdit_68->setText(QString::number(sudokuField.getFieldValue(6,8)));
    ui->lineEdit_69->setText(QString::number(sudokuField.getFieldValue(6,9)));
    ui->lineEdit_71->setText(QString::number(sudokuField.getFieldValue(7,1)));
    ui->lineEdit_72->setText(QString::number(sudokuField.getFieldValue(7,2)));
    ui->lineEdit_73->setText(QString::number(sudokuField.getFieldValue(7,3)));
    ui->lineEdit_74->setText(QString::number(sudokuField.getFieldValue(7,4)));
    ui->lineEdit_75->setText(QString::number(sudokuField.getFieldValue(7,5)));
    ui->lineEdit_76->setText(QString::number(sudokuField.getFieldValue(7,6)));
    ui->lineEdit_77->setText(QString::number(sudokuField.getFieldValue(7,7)));
    ui->lineEdit_78->setText(QString::number(sudokuField.getFieldValue(7,8)));
    ui->lineEdit_79->setText(QString::number(sudokuField.getFieldValue(7,9)));
    ui->lineEdit_81->setText(QString::number(sudokuField.getFieldValue(8,1)));
    ui->lineEdit_82->setText(QString::number(sudokuField.getFieldValue(8,2)));
    ui->lineEdit_83->setText(QString::number(sudokuField.getFieldValue(8,3)));
    ui->lineEdit_84->setText(QString::number(sudokuField.getFieldValue(8,4)));
    ui->lineEdit_85->setText(QString::number(sudokuField.getFieldValue(8,5)));
    ui->lineEdit_86->setText(QString::number(sudokuField.getFieldValue(8,6)));
    ui->lineEdit_87->setText(QString::number(sudokuField.getFieldValue(8,7)));
    ui->lineEdit_88->setText(QString::number(sudokuField.getFieldValue(8,8)));
    ui->lineEdit_89->setText(QString::number(sudokuField.getFieldValue(8,9)));
    ui->lineEdit_91->setText(QString::number(sudokuField.getFieldValue(9,1)));
    ui->lineEdit_92->setText(QString::number(sudokuField.getFieldValue(9,2)));
    ui->lineEdit_93->setText(QString::number(sudokuField.getFieldValue(9,3)));
    ui->lineEdit_94->setText(QString::number(sudokuField.getFieldValue(9,4)));
    ui->lineEdit_95->setText(QString::number(sudokuField.getFieldValue(9,5)));
    ui->lineEdit_96->setText(QString::number(sudokuField.getFieldValue(9,6)));
    ui->lineEdit_97->setText(QString::number(sudokuField.getFieldValue(9,7)));
    ui->lineEdit_98->setText(QString::number(sudokuField.getFieldValue(9,8)));
    ui->lineEdit_99->setText(QString::number(sudokuField.getFieldValue(9,9)));

}

void MainWindow::on_pushButton_enter_clicked()
{

    sudokuField.deleteAll();
    QString string;

    string = ui->lineEdit_11->text();
    sudokuField.fillField(string.toInt(),0 ,0);
    string = ui->lineEdit_12->text();
    sudokuField.fillField(string.toInt(),0 ,1);
    string = ui->lineEdit_13->text();
    sudokuField.fillField(string.toInt(),0 ,2);
    string = ui->lineEdit_14->text();
    sudokuField.fillField(string.toInt(),0 ,3);
    string = ui->lineEdit_15->text();
    sudokuField.fillField(string.toInt(),0 ,4);
    string = ui->lineEdit_16->text();
    sudokuField.fillField(string.toInt(),0 ,5);
    string = ui->lineEdit_17->text();
    sudokuField.fillField(string.toInt(),0 ,6);
    string = ui->lineEdit_18->text();
    sudokuField.fillField(string.toInt(),0 ,7);
    string = ui->lineEdit_19->text();
    sudokuField.fillField(string.toInt(),0 ,8);
    string = ui->lineEdit_21->text();
    sudokuField.fillField(string.toInt(),1 ,0);
    string = ui->lineEdit_22->text();
    sudokuField.fillField(string.toInt(),1 ,1);
    string = ui->lineEdit_23->text();
    sudokuField.fillField(string.toInt(),1 ,2);
    string = ui->lineEdit_24->text();
    sudokuField.fillField(string.toInt(),1 ,3);
    string = ui->lineEdit_25->text();
    sudokuField.fillField(string.toInt(),1 ,4);
    string = ui->lineEdit_26->text();
    sudokuField.fillField(string.toInt(),1 ,5);
    string = ui->lineEdit_27->text();
    sudokuField.fillField(string.toInt(),1 ,6);
    string = ui->lineEdit_28->text();
    sudokuField.fillField(string.toInt(),1 ,7);
    string = ui->lineEdit_29->text();
    sudokuField.fillField(string.toInt(),1 ,8);
    string = ui->lineEdit_31->text();
    sudokuField.fillField(string.toInt(),2 ,0);
    string = ui->lineEdit_32->text();
    sudokuField.fillField(string.toInt(),2 ,1);
    string = ui->lineEdit_33->text();
    sudokuField.fillField(string.toInt(),2 ,2);
    string = ui->lineEdit_34->text();
    sudokuField.fillField(string.toInt(),2 ,3);
    string = ui->lineEdit_35->text();
    sudokuField.fillField(string.toInt(),2 ,4);
    string = ui->lineEdit_36->text();
    sudokuField.fillField(string.toInt(),2 ,5);
    string = ui->lineEdit_37->text();
    sudokuField.fillField(string.toInt(),2 ,6);
    string = ui->lineEdit_38->text();
    sudokuField.fillField(string.toInt(),2 ,7);
    string = ui->lineEdit_39->text();
    sudokuField.fillField(string.toInt(),2 ,8);
    string = ui->lineEdit_41->text();
    sudokuField.fillField(string.toInt(),3 ,0);
    string = ui->lineEdit_42->text();
    sudokuField.fillField(string.toInt(),3 ,1);
    string = ui->lineEdit_43->text();
    sudokuField.fillField(string.toInt(),3 ,2);
    string = ui->lineEdit_44->text();
    sudokuField.fillField(string.toInt(),3 ,3);
    string = ui->lineEdit_45->text();
    sudokuField.fillField(string.toInt(),3 ,4);
    string = ui->lineEdit_46->text();
    sudokuField.fillField(string.toInt(),3 ,5);
    string = ui->lineEdit_47->text();
    sudokuField.fillField(string.toInt(),3 ,6);
    string = ui->lineEdit_48->text();
    sudokuField.fillField(string.toInt(),3 ,7);
    string = ui->lineEdit_49->text();
    sudokuField.fillField(string.toInt(),3 ,8);
    string = ui->lineEdit_51->text();
    sudokuField.fillField(string.toInt(),4 ,0);
    string = ui->lineEdit_52->text();
    sudokuField.fillField(string.toInt(),4 ,1);
    string = ui->lineEdit_53->text();
    sudokuField.fillField(string.toInt(),4 ,2);
    string = ui->lineEdit_54->text();
    sudokuField.fillField(string.toInt(),4 ,3);
    string = ui->lineEdit_55->text();
    sudokuField.fillField(string.toInt(),4 ,4);
    string = ui->lineEdit_56->text();
    sudokuField.fillField(string.toInt(),4 ,5);
    string = ui->lineEdit_57->text();
    sudokuField.fillField(string.toInt(),4 ,6);
    string = ui->lineEdit_58->text();
    sudokuField.fillField(string.toInt(),4 ,7);
    string = ui->lineEdit_59->text();
    sudokuField.fillField(string.toInt(),4 ,8);
    string = ui->lineEdit_61->text();
    sudokuField.fillField(string.toInt(),5 ,0);
    string = ui->lineEdit_62->text();
    sudokuField.fillField(string.toInt(),5 ,1);
    string = ui->lineEdit_63->text();
    sudokuField.fillField(string.toInt(),5 ,2);
    string = ui->lineEdit_64->text();
    sudokuField.fillField(string.toInt(),5 ,3);
    string = ui->lineEdit_65->text();
    sudokuField.fillField(string.toInt(),5 ,4);
    string = ui->lineEdit_66->text();
    sudokuField.fillField(string.toInt(),5 ,5);
    string = ui->lineEdit_67->text();
    sudokuField.fillField(string.toInt(),5 ,6);
    string = ui->lineEdit_68->text();
    sudokuField.fillField(string.toInt(),5 ,7);
    string = ui->lineEdit_69->text();
    sudokuField.fillField(string.toInt(),5 ,8);
    string = ui->lineEdit_71->text();
    sudokuField.fillField(string.toInt(),6, 0);
    string = ui->lineEdit_72->text();
    sudokuField.fillField(string.toInt(),6, 1);
    string = ui->lineEdit_73->text();
    sudokuField.fillField(string.toInt(),6, 2);
    string = ui->lineEdit_74->text();
    sudokuField.fillField(string.toInt(),6, 3);
    string = ui->lineEdit_75->text();
    sudokuField.fillField(string.toInt(),6, 4);
    string = ui->lineEdit_76->text();
    sudokuField.fillField(string.toInt(),6, 5);
    string = ui->lineEdit_77->text();
    sudokuField.fillField(string.toInt(),6, 6);
    string = ui->lineEdit_78->text();
    sudokuField.fillField(string.toInt(),6, 7);
    string = ui->lineEdit_79->text();
    sudokuField.fillField(string.toInt(),6, 8);
    string = ui->lineEdit_81->text();
    sudokuField.fillField(string.toInt(),7, 0);
    string = ui->lineEdit_82->text();
    sudokuField.fillField(string.toInt(),7, 1);
    string = ui->lineEdit_83->text();
    sudokuField.fillField(string.toInt(),7, 2);
    string = ui->lineEdit_84->text();
    sudokuField.fillField(string.toInt(),7, 3);
    string = ui->lineEdit_85->text();
    sudokuField.fillField(string.toInt(),7, 4);
    string = ui->lineEdit_86->text();
    sudokuField.fillField(string.toInt(),7, 5);
    string = ui->lineEdit_87->text();
    sudokuField.fillField(string.toInt(),7, 6);
    string = ui->lineEdit_88->text();
    sudokuField.fillField(string.toInt(),7, 7);
    string = ui->lineEdit_89->text();
    sudokuField.fillField(string.toInt(),7, 8);
    string = ui->lineEdit_91->text();
    sudokuField.fillField(string.toInt(),8, 0);
    string = ui->lineEdit_92->text();
    sudokuField.fillField(string.toInt(),8, 1);
    string = ui->lineEdit_93->text();
    sudokuField.fillField(string.toInt(),8, 2);
    string = ui->lineEdit_94->text();
    sudokuField.fillField(string.toInt(),8, 3);
    string = ui->lineEdit_95->text();
    sudokuField.fillField(string.toInt(),8, 4);
    string = ui->lineEdit_96->text();
    sudokuField.fillField(string.toInt(),8, 5);
    string = ui->lineEdit_97->text();
    sudokuField.fillField(string.toInt(),8, 6);
    string = ui->lineEdit_98->text();
    sudokuField.fillField(string.toInt(),8, 7);
    string = ui->lineEdit_99->text();
    sudokuField.fillField(string.toInt(),8, 8);

    sudokuField.printField();
    sudokuField.searchEmptyFields();
    sudokuField.printEmptyFieldList();

}

void MainWindow::on_pushButton_solve_clicked()
{
    sudokuField.solve();
    this->updateGUI();
    /*QVector<EmptyField*>::iterator it = sudokuField.getEmptyFieldListIteratorBegin();
    while(it!=sudokuField.getEmptyFieldListIteratorEnd())
    {
        for(int value = 1; value <=9; value++)
        {
            if((*it)->testValue(value, sudokuField.field) && (*it)->compare(value))
            {
                sudokuField.fillField(value,(*it)->get_xCoord(),(*it)->get_yCoord());
                (*it)->setRemValue(value);
                it++;
                break;
            }
            if(value == 9)
            {
                this->updateGUI();
                (*it)->delRemValue();
                sudokuField.fillField(0,(*it)->get_xCoord(),(*it)->get_yCoord());
                it--;
            }
        }
    }*/

}

void MainWindow::on_actionclear_all_triggered()
{
    ui->lineEdit_11->setText("");
    ui->lineEdit_12->setText("");
    ui->lineEdit_13->setText("");
    ui->lineEdit_14->setText("");
    ui->lineEdit_15->setText("");
    ui->lineEdit_16->setText("");
    ui->lineEdit_17->setText("");
    ui->lineEdit_18->setText("");
    ui->lineEdit_19->setText("");
    ui->lineEdit_21->setText("");
    ui->lineEdit_22->setText("");
    ui->lineEdit_23->setText("");
    ui->lineEdit_24->setText("");
    ui->lineEdit_25->setText("");
    ui->lineEdit_26->setText("");
    ui->lineEdit_27->setText("");
    ui->lineEdit_28->setText("");
    ui->lineEdit_29->setText("");
    ui->lineEdit_31->setText("");
    ui->lineEdit_32->setText("");
    ui->lineEdit_33->setText("");
    ui->lineEdit_34->setText("");
    ui->lineEdit_35->setText("");
    ui->lineEdit_36->setText("");
    ui->lineEdit_37->setText("");
    ui->lineEdit_38->setText("");
    ui->lineEdit_39->setText("");
    ui->lineEdit_41->setText("");
    ui->lineEdit_42->setText("");
    ui->lineEdit_43->setText("");
    ui->lineEdit_44->setText("");
    ui->lineEdit_45->setText("");
    ui->lineEdit_46->setText("");
    ui->lineEdit_47->setText("");
    ui->lineEdit_48->setText("");
    ui->lineEdit_49->setText("");
    ui->lineEdit_51->setText("");
    ui->lineEdit_52->setText("");
    ui->lineEdit_53->setText("");
    ui->lineEdit_54->setText("");
    ui->lineEdit_55->setText("");
    ui->lineEdit_56->setText("");
    ui->lineEdit_57->setText("");
    ui->lineEdit_58->setText("");
    ui->lineEdit_59->setText("");
    ui->lineEdit_61->setText("");
    ui->lineEdit_62->setText("");
    ui->lineEdit_63->setText("");
    ui->lineEdit_64->setText("");
    ui->lineEdit_65->setText("");
    ui->lineEdit_66->setText("");
    ui->lineEdit_67->setText("");
    ui->lineEdit_68->setText("");
    ui->lineEdit_69->setText("");
    ui->lineEdit_71->setText("");
    ui->lineEdit_72->setText("");
    ui->lineEdit_73->setText("");
    ui->lineEdit_74->setText("");
    ui->lineEdit_75->setText("");
    ui->lineEdit_76->setText("");
    ui->lineEdit_77->setText("");
    ui->lineEdit_78->setText("");
    ui->lineEdit_79->setText("");
    ui->lineEdit_81->setText("");
    ui->lineEdit_82->setText("");
    ui->lineEdit_83->setText("");
    ui->lineEdit_84->setText("");
    ui->lineEdit_85->setText("");
    ui->lineEdit_86->setText("");
    ui->lineEdit_87->setText("");
    ui->lineEdit_88->setText("");
    ui->lineEdit_89->setText("");
    ui->lineEdit_91->setText("");
    ui->lineEdit_92->setText("");
    ui->lineEdit_93->setText("");
    ui->lineEdit_94->setText("");
    ui->lineEdit_95->setText("");
    ui->lineEdit_96->setText("");
    ui->lineEdit_97->setText("");
    ui->lineEdit_98->setText("");
    ui->lineEdit_99->setText("");
}
