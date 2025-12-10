#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , batteryWidget(new BatteryWidget(this))
{
    ui->setupUi(this);
    setCentralWidget(batteryWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}
