#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_sLabelResult[0] = QString("Press It Please");
    m_sLabelResult[1] = QString("You Pressed it!");
    m_sLabelResult[2] = QString("Oh, Again?");
    m_sLabelResult[3] = QString("Why not one more?");

    ui->LabeResult->setText(m_sLabelResult[0]);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    for (int i=0; i<=3; ++i){
        if(i <=3){
            ui->LabeResult->setText(m_sLabelResult[i]);
        }
    };
}

