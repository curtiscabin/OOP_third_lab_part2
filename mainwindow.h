#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "model.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    model *M;

public slots:
    void slot();
private slots:
    void on_lineEdit_A_editingFinished();
    void on_lineEdit_B_editingFinished();
    void on_lineEdit_C_editingFinished();
    void on_spinBox_A_editingFinished();
    void on_spinBox_B_editingFinished();
    void on_spinBox_C_editingFinished();
    void on_horizontalScrollBar_A_valueChanged(int value);
    void on_horizontalScrollBar_B_valueChanged(int value);
    void on_horizontalScrollBar_C_valueChanged(int value);
};
#endif // MAINWINDOW_H
