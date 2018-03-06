#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>
#include <stdlib.h>
#include "sllist.c"
#include <string.h>
#include <QMessageBox>

FILE *f = NULL;
SLLIST *Head = NULL, *Current = NULL;
int flag1 = 1, flag2 = 0, ct_i = 0;
int min = INT_MAX, max = 0;

typedef struct CATALOG
{
    char name[20];
    char date[15];
    char val[5];
}CATALOG;

CATALOG ct[50];
int sizeCT = sizeof(CATALOG);

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    listPos = 0;
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::PrintList()
{
    CATALOG *ctTemp = NULL;
    ui->textData2->clear();
    SLLIST *This;
    for(This = Head; This != NULL; This = This->Next)
    {
        ctTemp =(CATALOG*)SLGetData(This, 0, 0);
        ui->textData2->append(ctTemp->name);
        ui->textData2->append(ctTemp->date);
        ui->textData2->append(ctTemp->val);
    }
}

void MainWindow::PrintInfo()
{
    CATALOG *ctTemp = NULL;
    ui->textInfo->clear();

    ui->textInfo->append("HeadSpisok");
    ctTemp =(CATALOG*)SLGetData(Head, 0, 0);
    ui->textInfo->append(ctTemp->name);
    ui->textInfo->append(ctTemp->date);
    ui->textInfo->append(ctTemp->val);

    ui->textInfo->append("CurrentSpisok");
    ctTemp =(CATALOG*)SLGetData(Current, 0, 0);
    ui->textInfo->append(ctTemp->name);
    ui->textInfo->append(ctTemp->date);
    ui->textInfo->append(ctTemp->val);
 }

void MainWindow::on_pushLoad_clicked()
{
    char buf[40];
    int i, en, ed, ev;
    f = fopen("C:\\Qt\\qtcreator-2.0.1\\Lab3_SAOD\\in.txt", "r");
    for(ct_i = 0; fgets(buf,40,f); ct_i++)
    {
        for (i = 0; buf[i] != ';'; i++);
        en = i;
        strncpy(ct[ct_i].name, buf, en);
        ct[ct_i].name[en] = '\0';
        ui->textData1->append(ct[ct_i].name);
        ed = 0;
        for ( i = en+1; buf[i] != ';'; i++)
            ed += 1;
        strncpy(ct[ct_i].date, buf+en+1, ed);
        ct[ct_i].date[ed] = '\0';
        ui->textData1->append(ct[ct_i].date);
        ev = 0;
        for ( i = ed; buf[i] != '\n'; i++)
            ev += 1;
        strncpy(ct[ct_i].val, buf+en+ed+2, ev);
        ct[ct_i].val[ev] = '\0';
        ui->textData1->append(ct[ct_i].val);
     }
     fclose(f);
}

void MainWindow::on_pushSave_clicked()
{
    char buf[50];
    CATALOG *ctTemp;
    SLLIST *This;
    f = fopen("C:\\Qt\\qtcreator-2.0.1\\Lab3_SAOD\\out.txt", "w");
    for(This = Head; This != NULL; This = This->Next)
    {
        buf[0] = 0;
        ctTemp =(CATALOG*)SLGetData(This, 0, 0);
        strcat(buf, ctTemp->name);
        strcat(buf, ";");
        strcat(buf, ctTemp->date);
        strcat(buf, ";");
        strcat(buf, ctTemp->val);
        strcat(buf, "\n");
        fputs(buf, f);
    }
    fclose(f);
    QMessageBox::information(this,"Information","Successful! Data is saved in file!");
}

void MainWindow::on_pushAdd_clicked()
{
    if (flag1 == 1 )
    {
        SLAdd(&Head, 0, ct+flag2, sizeCT);
        flag1 = 0; flag2 += 1;
        Current = Head;
    }
    else
    {
        SLAdd(&Current, 0, ct+flag2, sizeCT);
        flag2 += 1;
        Current = Current->Next;
    }
    if (ct+flag2 != NULL)
    {
        PrintList();
        PrintInfo();
    }
    else
        QMessageBox::information(0, "Information", "Catalog is over!");
}

void MainWindow::on_pushDelete_clicked()
{
    SLDestroy(&Head);
    ui->textData2->clear();
    ui->textInfo->clear();
    QMessageBox::information(this,"Information","Successful!");
}

void MainWindow::on_pushChooseMax_clicked()
{
    CATALOG *ctTemp, *ctTemp1 = NULL;
    int tmp;
    ui->textInfo->clear();
    SLLIST *This;
    for(This = Head; This != NULL; This = This->Next)
    {
        ctTemp =(CATALOG*)SLGetData(This, 0, 0);
        tmp = atoi(ctTemp->val);
        if (tmp > max)
        {
            max = atoi(ctTemp->val);
            ctTemp1 =(CATALOG*)SLGetData(This, 0, 0);
        }
    }
    ui->textInfo->append(ctTemp1->name);
    ui->textInfo->append(ctTemp1->date);
    ui->textInfo->append(ctTemp1->val);
    QMessageBox::information(this,"Information","Successful! Max item is found!");
}

void MainWindow::on_pushAddFront_clicked()
{
    SLFront(&Head,0, ct+flag2, sizeCT);
    PrintList();
    PrintInfo();
    flag2 += 1;
}

void MainWindow::on_pushChooseMin_clicked()
{
    CATALOG *ctTemp, *ctTemp1 = NULL;
    int tmp;
    ui->textInfo->clear();
    SLLIST *This;
    for(This = Head; This != NULL; This = This->Next)
    {
        ctTemp =(CATALOG*)SLGetData(This, 0, 0);
        tmp = atoi(ctTemp->val);
        if (tmp < min)
        {
            min = atoi(ctTemp->val);
            ctTemp1 =(CATALOG*)SLGetData(This, 0, 0);
        }
    }
    ui->textInfo->append(ctTemp1->name);
    ui->textInfo->append(ctTemp1->date);
    ui->textInfo->append(ctTemp1->val);
    QMessageBox::information(this,"Information","Successful! Min item is found!");
}
