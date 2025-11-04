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

    ui->spinBox_A->setValue(M->getA());
    ui->spinBox_B->setValue(M->getB());
    ui->spinBox_C->setValue(M->getC());

    ui->horizontalScrollBar_A->setValue(M->getA());
    ui->horizontalScrollBar_B->setValue(M->getB());
    ui->horizontalScrollBar_C->setValue(M->getC());
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



void MainWindow::on_spinBox_A_editingFinished()
{
    M->setA(ui->spinBox_A->value());
}


void MainWindow::on_spinBox_B_editingFinished()
{
    M->setB(ui->spinBox_B->value());
}


void MainWindow::on_spinBox_C_editingFinished()
{
    M->setC(ui->spinBox_C->value());
}


void MainWindow::on_horizontalScrollBar_A_valueChanged(int value)
{
    M->setA(ui->horizontalScrollBar_A->value());
}


void MainWindow::on_horizontalScrollBar_B_valueChanged(int value)
{
    M->setB(ui->horizontalScrollBar_B->value());
}


void MainWindow::on_horizontalScrollBar_C_valueChanged(int value)
{
    M->setC(ui->horizontalScrollBar_C->value());
}

