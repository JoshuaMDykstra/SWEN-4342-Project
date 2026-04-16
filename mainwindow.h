#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "floatingpoint.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:

    void on_input1SubmitButton_clicked();

private:
    Ui::MainWindow *ui;

    floatingPoint input1;
    floatingPoint input2;
    floatingPoint output;
};
#endif // MAINWINDOW_H
