#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /* apply the qss style */
    QFile file(":/Qss/checkbox.qss");
    if (file.open(QFile::ReadOnly)) {
        QTextStream fileText(&file);
        QString styleSheet = fileText.readAll();
        ui->checkBox->setStyleSheet(styleSheet);
     }
    file.close();

}

MainWindow::~MainWindow()
{
    delete ui;
}
