#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    M = new model;
    connect(M,&model::signal,this, &MainWindow::slot);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slot()
{
    ui->lineEdit_A->setText(QString::number(M->getA()));
    ui->lineEdit_B->setText(QString::number(M->getB()));
    ui->lineEdit_C->setText(QString::number(M->getC()));
}




void MainWindow::on_lineEdit_A_editingFinished()
{
    M->setA(ui->lineEdit_A->text().toInt());

}


void MainWindow::on_lineEdit_B_editingFinished()
{
    M->setB(ui->lineEdit_B->text().toInt());
}


void MainWindow::on_lineEdit_C_editingFinished()
{
    M->setC(ui->lineEdit_C->text().toInt());
}

