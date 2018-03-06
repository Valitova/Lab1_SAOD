#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
int listPos;
void PrintList();
void PrintInfo();

private:
    Ui::MainWindow *ui;

private slots:
    void on_pushChooseMin_clicked();
    void on_pushAddFront_clicked();
    void on_pushChooseMax_clicked();
    void on_pushDelete_clicked();
    void on_pushAdd_clicked();
    void on_pushSave_clicked();
    void on_pushLoad_clicked();
};

#endif // MAINWINDOW_H
