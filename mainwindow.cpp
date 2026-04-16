#include "mainwindow.h"
#include "./ui_mainwindow.h"

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


void MainWindow::on_input1SubmitButton_clicked()
{
    switch (ui->input1FormatSelector->currentIndex()) {

    case 0:
        if (not input1.setBinaryValue(ui->input1PlainTextEdit->toPlainText())) {
            ui->input1ErrorDisplay->setText("Formatting Error: expecting decimal");
        }
        break;
    }

    ui->input1BinaryDisplay->setText(input1.getBinaryText());
}
