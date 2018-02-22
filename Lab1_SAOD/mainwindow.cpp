#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <fstream>
#include <iostream>
#include <ctime>

const int n = 45000;
int rBubble = 0, cBubble = 0, rBinary = 0, cBinary = 0,
rShell = 0, cShell = 0, rPyramid = 0, cPyramid = 0;
using namespace std;

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

// Функция "просеивания" через кучу - формирование кучи
void siftDown(int *a, int k, int l)
{
  int child; // индекс максимального потомка
  int elem = a[k]; // флаг того, что куча сформирована
  while(k <= l/2) {  		// пока у a[k] есть дети
      child = 2*k;
      //  выбираем большего сына
      cPyramid++;
      if( child < l && a[child] < a[child+1] )
          child++;
      if( elem >= a[child] ) break;
      // иначе
      a[k] = a[child]; 	// переносим сына наверх
      k = child;
      rPyramid++;
    }
    a[k] = elem;
}

// Функция "просеивания" через кучу - формирование кучи
void siftDown(string *a, int k, int l)
{
  int child; // индекс максимального потомка
  string elem = a[k]; // флаг того, что куча сформирована
  while(k <= l/2) {  		// пока у a[k] есть дети
      child = 2*k;
      //  выбираем большего сына
      cPyramid++;
      if( child < l && a[child] < a[child+1] )
          child++;
      if( elem >= a[child] ) break;
      // иначе
      a[k] = a[child]; 	// переносим сына наверх
      k = child;
      rPyramid++;
    }
    a[k] = elem;
}
// Функция сортировки на куче
void Pyramid(int *numbers)
{
  // Формируем нижний ряд пирамиды
  for (int i = (n / 2) - 1; i >= 0; i--)
    siftDown(numbers, i, n-1);
  // Просеиваем через пирамиду остальные элементы
  for (int i = n - 1; i > 0; i--)
  {
    int temp = numbers[0];
    numbers[0] = numbers[i];
    numbers[i] = temp;
    rPyramid+=3;
    siftDown(numbers, 0, i - 1);
  }
}
void Pyramid(string *text)
{
  // Формируем нижний ряд пирамиды
  for (int i = (n / 2) - 1; i >= 0; i--)
    siftDown(text, i, n-1);
  // Просеиваем через пирамиду остальные элементы
  for (int i = n - 1; i > 0; i--)
  {
    string temp = text[0];
    text[0] = text[i];
    text[i] = temp;
    rPyramid+=3;
    siftDown(text, 0, i - 1);
  }
}


void Shell(int inNumData[n])
{
    int i,j,k,t;
    for(k = n/2; k > 0; k /=2)
        for(i = k; i < n; i++)
        {
            t = inNumData[i];
            for(j = i; j>=k; j-=k)
            {
                if(t < inNumData[j-k])
                {
                    cShell++;
                    inNumData[j] = inNumData[j-k];
                    rShell++;
                }
                else
                    break;
            }
            inNumData[j] = t;
            rShell++;
        }
}
void Shell(string inTextData[n])
{
    int i,j,k;
    string t;
    for(k = n/2; k > 0; k /=2)
        for(i = k; i < n; i++)
        {
            t = inTextData[i];
            for(j = i; j>=k; j-=k)
            {
                if(t < inTextData[j-k])
                {
                    cShell++;
                    inTextData[j] = inTextData[j-k];
                    rShell++;
                }
                else
                    break;
            }
            inTextData[j] = t;
            rShell++;
        }
}

void Bubble(int inNumData[n])
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (inNumData[j] > inNumData[j + 1])
            {
                cBubble++;
                int tmp = inNumData[j];
                inNumData[j] = inNumData[j + 1];
                inNumData[j + 1] = tmp;
                rBubble+=3;
            }
        }
     }
}
void Bubble(string inTextData[n])
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (inTextData[j] > inTextData[j + 1])
            {
                cBubble++;
                string tmp = inTextData[j];
                inTextData[j] = inTextData[j + 1];
                inTextData[j + 1] = tmp;
                rBubble+=3;
            }
        }
     }
}
void BinaryInsert(int inNumData[n])
{
    int x, left, right, average;
    for (int i = 1; i < n; i++)
    {
        if ( inNumData[i-1] > inNumData[i])
        {
            cBinary++;
            x = inNumData[i];      // x – включаемый элемент
            left = 0;       // левая граница отсортированной части массива
            right = i-1;    // правая граница отсортированной части массива
            do
            {
                average = (left+right)/2;      // average – новая "середина" последовательности
                if (inNumData[average] < x )
                {
                    left = average + 1;
                    cBinary++;
                }
                else
                    right=average - 1;
            } while (left<=right);     // поиск ведется до тех пор, пока левая граница
            //не окажется правее правой границы
            for (int  j=i-1; j>=left; j--)
            {
                inNumData[j+1] = inNumData[j];
                rBinary++;
            }
            inNumData[left] = x;
            rBinary++;
        }
    }
}

void BinaryInsert(string inTextData[n])
{
    int left, right, average;
    string x;
    for (int i = 1; i < n; i++)
    {
        if ( inTextData[i-1] > inTextData[i])
        {   cBinary++;
            x = inTextData[i];      // x – включаемый элемент
            left = 0;       // левая граница отсортированной части массива
            right = i-1;    // правая граница отсортированной части массива
            do
            {
                average = (left+right)/2;      // average – новая "середина" последовательности
                if (inTextData[average] < x )
                {
                    left = average + 1;
                    cBinary++;
                }
                else
                    right = average - 1;
            } while (left <= right);     // поиск ведется до тех пор, пока левая граница
            //не окажется правее правой границы
            for (int  j=i-1; j>=left; j--)
            {
                inTextData[j+1]= inTextData[j];
                rBinary++;
            }
            inTextData[left] = x;
            rBinary++;
        }
    }
}

void MainWindow::on_pushLoad_clicked()
{
    if(!ui->checkBox_1->isChecked() && !ui->checkBox_2->isChecked())
    {
        QMessageBox::warning(this, "Warning","Incorrect! Please, choose one type of data!");
    }
    //проверка: не выбраны ли 2 типа данных
    else if ((ui->checkBox_1->isChecked()) && (ui->checkBox_2->isChecked()))
        {
            QMessageBox::warning(this, "Warning","Incorrect! Please, choose one type of data!");
        }
    //отображение входных данных в окне приложения
        else if(ui->checkBox_1->isChecked())
        {
            QFile file("C://Qt//qtcreator-2.0.1//Lab1_SAOD//inputNum.txt");
            if (!file.open(QIODevice::ReadOnly))
                QMessageBox::information(0, "Information", "File can not be opened!");
            QTextStream in(&file);
            ui->textInput->setText((in.readAll()));
        }
        else if (ui->checkBox_2->isChecked())
        {
            QFile file("C://Qt//qtcreator-2.0.1//Lab1_SAOD//inputStr.txt");
            if (!file.open(QIODevice::ReadOnly))
                QMessageBox::information(0, "Information", "File can not be opened!");
            QTextStream in(&file);
            ui->textInput->setText((in.readAll()));
        }
}

void MainWindow::on_pushDone_clicked()
{
    if(!ui->radioBinary->isChecked() && !ui->radioBubble->isChecked() &&
       !ui->radioShell->isChecked() && !ui->radioPyramid->isChecked())
    {
        QMessageBox::warning(this, "Warning","Incorrect! Please, choose one type of sort!");
    }
    //проверка: выбран метод двоичных вставок?
    else if(ui->radioBinary->isChecked())
        {
        //проверка: не выбраны ли 2 типа данных
            if ((ui->checkBox_1->isChecked()) && (ui->checkBox_2->isChecked()))
            {
                QMessageBox::warning(this, "Warning","Incorrect! Please, choose one type of data!");
            }
            //проверка: выбран числовой тип?
            else if (ui->checkBox_1->isChecked())
            {
                int inNumData[n];
                cBinary = 0; rBinary = 0;
                ifstream fileIn ("C://Qt//qtcreator-2.0.1//Lab1_SAOD//inputNum.txt");
                for (int i = 0; i < n; i++)
                {
                    fileIn >> inNumData[i];
                }
                clock_t start = clock();
                BinaryInsert(inNumData);
                clock_t end = clock();
                ofstream fileOut ("C://Qt//qtcreator-2.0.1//Lab1_SAOD//outNumBinary.txt");
                for (int i = 0; i < n; i++)
                {
                    fileOut << inNumData[i] << "\n";
                }
                double binaryInsertTime = double(double(end - start)/CLOCKS_PER_SEC)/CLOCKS_PER_SEC;
                ui->textTime->setText(QString::number(binaryInsertTime, 'f', 3));
                ui->textRearrange->setText(QString::number(rBinary));
                ui->textCompare->setText(QString::number(cBinary));

                QFile file("C://Qt//qtcreator-2.0.1//Lab1_SAOD//outNumBinary.txt");
                if (!file.open(QIODevice::ReadOnly))
                    QMessageBox::information(0, "Information", "File can not be opened!");
                QTextStream out(&file);
                ui->textOutput->setText((out.readAll()));
            }
            else if(ui->checkBox_2->isChecked())
            {
                string inTextData[n];
                cBinary = 0; rBinary = 0;
                ifstream fileIn ("C://Qt//qtcreator-2.0.1//Lab1_SAOD//inputStr.txt");
                for (int i = 0; i < n; i++)
                {
                    fileIn >> inTextData[i];
                }
                clock_t start = clock();
                BinaryInsert(inTextData);
                clock_t end = clock();
                ofstream fileOut ("C://Qt//qtcreator-2.0.1//Lab1_SAOD//outTextBinary.txt");
                for (int i = 0; i < n; i++)
                {
                    fileOut << inTextData[i] << "\n";
                }
                double binaryInsertTime = double(end - start)/CLOCKS_PER_SEC;
                ui->textTime->setText(QString::number(binaryInsertTime, 'f', 3));
                ui->textRearrange->setText(QString::number(rBinary));
                ui->textCompare->setText(QString::number(cBinary));
                QFile file("C://Qt//qtcreator-2.0.1//Lab1_SAOD//outTextBinary.txt");
                if (!file.open(QIODevice::ReadOnly))
                    QMessageBox::information(0, "Information", "File can not be opened!");
                QTextStream out(&file);
                ui->textOutput->setText((out.readAll()));
            }
        }
    else if(ui->radioBubble->isChecked())
        {
        //проверка: не выбраны ли 2 типа данных
            if ((ui->checkBox_1->isChecked()) && (ui->checkBox_2->isChecked()))
            {
                QMessageBox::warning(this, "Warning","Incorrect! Please, choose one type of data!");
            }
            //проверка: выбран числовой тип?
            else if (ui->checkBox_1->isChecked())
            {
                int inNumData[n];
                cBubble = 0; rBubble = 0;
                ifstream fileIn ("C://Qt//qtcreator-2.0.1//Lab1_SAOD//inputNum.txt");
                for (int i = 0; i < n; i++)
                {
                    fileIn >> inNumData[i];
                }
                clock_t start = clock();
                Bubble(inNumData);
                clock_t end = clock();
                ofstream fileOut ("C://Qt//qtcreator-2.0.1//Lab1_SAOD//outNumBubble.txt");
                for (int i = 0; i < n; i++)
                {
                    fileOut << inNumData[i] << "\n";
                }
                double bubbleTime = double(end - start)/CLOCKS_PER_SEC;
                ui->textTime->setText(QString::number(bubbleTime, 'f', 3));
                ui->textRearrange->setText(QString::number(rBubble));
                ui->textCompare->setText(QString::number(cBubble));

                QFile file("C://Qt//qtcreator-2.0.1//Lab1_SAOD//outNumBubble.txt");
                if (!file.open(QIODevice::ReadOnly))
                    QMessageBox::information(0, "Information", "File can not be opened!");
                QTextStream out(&file);
                ui->textOutput->setText((out.readAll()));
            }
            else if(ui->checkBox_2->isChecked())
            {
                string inTextData[n];
                cBubble = 0; rBubble = 0;
                ifstream fileIn ("C://Qt//qtcreator-2.0.1//Lab1_SAOD//inputStr.txt");
                for (int i = 0; i < n; i++)
                {
                    fileIn >> inTextData[i];
                }
                clock_t start = clock();
                Bubble(inTextData);
                clock_t end = clock();
                ofstream fileOut ("C://Qt//qtcreator-2.0.1//Lab1_SAOD//outTextBubble.txt");
                for (int i = 0; i < n; i++)
                {
                    fileOut << inTextData[i] << "\n";
                }
                double BubbleTime = double(end - start)/CLOCKS_PER_SEC;
                ui->textTime->setText(QString::number(BubbleTime, 'f', 3));
                ui->textRearrange->setText(QString::number(rBubble));
                ui->textCompare->setText(QString::number(cBubble));
                QFile file("C://Qt//qtcreator-2.0.1//Lab1_SAOD//outTextBubble.txt");
                if (!file.open(QIODevice::ReadOnly))
                    QMessageBox::information(0, "Information", "File can not be opened!");
                QTextStream out(&file);
                ui->textOutput->setText((out.readAll()));
            }
        }
    else if(ui->radioShell->isChecked())
        {
        //проверка: не выбраны ли 2 типа данных
            if ((ui->checkBox_1->isChecked()) && (ui->checkBox_2->isChecked()))
            {
                QMessageBox::warning(this, "Warning","Incorrect! Please, choose one type of data!");
            }
            //проверка: выбран числовой тип?
            else if (ui->checkBox_1->isChecked())
            {
                int inNumData[n];
                cShell = 0; rShell = 0;
                ifstream fileIn ("C://Qt//qtcreator-2.0.1//Lab1_SAOD//inputNum.txt");
                for (int i = 0; i < n; i++)
                {
                    fileIn >> inNumData[i];
                }
                clock_t start = clock();
                Shell(inNumData);
                clock_t end = clock();
                ofstream fileOut ("C://Qt//qtcreator-2.0.1//Lab1_SAOD//outNumShell.txt");
                for (int i = 0; i < n; i++)
                {
                    fileOut << inNumData[i] << "\n";
                }
                double ShellTime = double(end - start)/CLOCKS_PER_SEC;
                ui->textTime->setText(QString::number(ShellTime, 'f', 3));
                ui->textRearrange->setText(QString::number(rShell));
                ui->textCompare->setText(QString::number(cShell));

                QFile file("C://Qt//qtcreator-2.0.1//Lab1_SAOD//outNumShell.txt");
                if (!file.open(QIODevice::ReadOnly))
                    QMessageBox::information(0, "Information", "File can not be opened!");
                QTextStream out(&file);
                ui->textOutput->setText((out.readAll()));
            }
            else if(ui->checkBox_2->isChecked())
            {
                string inTextData[n];
                cShell = 0; rShell = 0;
                ifstream fileIn ("C://Qt//qtcreator-2.0.1//Lab1_SAOD//inputStr.txt");
                for (int i = 0; i < n; i++)
                {
                    fileIn >> inTextData[i];
                }
                clock_t start = clock();
                Shell(inTextData);
                clock_t end = clock();
                ofstream fileOut ("C://Qt//qtcreator-2.0.1//Lab1_SAOD//outTextShell.txt");
                for (int i = 0; i < n; i++)
                {
                    fileOut << inTextData[i] << "\n";
                }
                double ShellTime = double(end - start)/CLOCKS_PER_SEC;
                ui->textTime->setText(QString::number(ShellTime, 'f', 3));
                ui->textRearrange->setText(QString::number(rShell));
                ui->textCompare->setText(QString::number(cShell));
                QFile file("C://Qt//qtcreator-2.0.1//Lab1_SAOD//outTextShell.txt");
                if (!file.open(QIODevice::ReadOnly))
                    QMessageBox::information(0, "Information", "File can not be opened!");
                QTextStream out(&file);
                ui->textOutput->setText((out.readAll()));
            }
        }
    else if(ui->radioPyramid->isChecked())
        {
        //проверка: не выбраны ли 2 типа данных
            if ((ui->checkBox_1->isChecked()) && (ui->checkBox_2->isChecked()))
            {
                QMessageBox::warning(this, "Warning","Incorrect! Please, choose one type of data!");
            }
            //проверка: выбран числовой тип?
            else if (ui->checkBox_1->isChecked())
            {
                int *inNumData=new int[n];
                cPyramid = 0; rPyramid = 0;
                ifstream fileIn ("C://Qt//qtcreator-2.0.1//Lab1_SAOD//inputNum.txt");
                for (int i = 0; i < n; i++)
                {
                    fileIn >> inNumData[i];
                }
                clock_t start = clock();
                Pyramid(inNumData);
                clock_t end = clock();
                ofstream fileOut ("C://Qt//qtcreator-2.0.1//Lab1_SAOD//outNumPyramid.txt");
                for (int i = 1; i < n; i++)
                {
                    fileOut << inNumData[i] << "\n";
                }
                double PyramidTime = double(end - start)/CLOCKS_PER_SEC;
                ui->textTime->setText(QString::number(PyramidTime, 'f', 3));
                ui->textRearrange->setText(QString::number(rPyramid));
                ui->textCompare->setText(QString::number(cPyramid));

                QFile file("C://Qt//qtcreator-2.0.1//Lab1_SAOD//outNumPyramid.txt");
                if (!file.open(QIODevice::ReadOnly))
                    QMessageBox::information(0, "Information", "File can not be opened!");
                QTextStream out(&file);
                ui->textOutput->setText((out.readAll()));
            }
            else if(ui->checkBox_2->isChecked())
            {
                string inTextData[n];
                cPyramid = 0; rPyramid = 0;
                ifstream fileIn ("C://Qt//qtcreator-2.0.1//Lab1_SAOD//inputStr.txt");
                for (int i = 0; i < n; i++)
                {
                    fileIn >> inTextData[i];
                }
                clock_t start = clock();
                Pyramid(inTextData);
                clock_t end = clock();
                ofstream fileOut ("C://Qt//qtcreator-2.0.1//Lab1_SAOD//outTextPyramid.txt");
                for (int i = 0; i < n; i++)
                {
                    fileOut << inTextData[i] << "\n";
                }
                double PyramidTime = double(end - start)/CLOCKS_PER_SEC;
                ui->textTime->setText(QString::number(PyramidTime, 'f', 3));
                ui->textRearrange->setText(QString::number(rPyramid));
                ui->textCompare->setText(QString::number(cPyramid));
                QFile file("C://Qt//qtcreator-2.0.1//Lab1_SAOD//outTextPyramid.txt");
                if (!file.open(QIODevice::ReadOnly))
                    QMessageBox::information(0, "Information", "File can not be opened!");
                QTextStream out(&file);
                ui->textOutput->setText((out.readAll()));
            }
        }
}
