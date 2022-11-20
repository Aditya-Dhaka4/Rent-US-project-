#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "categories.h"
#include "categoriesflat.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


/*void MainWindow::on_pushButton_5_clicked()
{
    categories categories;
    categories.setModal(true);
    categories.exec();
}
*/


void MainWindow::on_pushButton_6_clicked()
{
    categories categories;
    categories.setModal(true);
    categories.exec();
}


void MainWindow::on_pushButton_7_clicked()
{
    categoriesFlat categoriesflat;
    categoriesflat.setModal(true);
    categoriesflat.exec();
}

