#include "Mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <string>
#include <iostream>
#include <fstream>

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  this->setWindowTitle("DSP-Ткаченко, Пограничный, Семенов, Смирнов");
  connect(this->ui->fileOpen, &QAction::triggered, this, &MainWindow::on_fileOpen_triggered);
  connect(this->ui->fileSave, &QAction::triggered, this, &MainWindow::on_fileSave_triggered);
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_fileOpen_triggered()
{
	QString data = QFileDialog::getOpenFileName(0, "Выберите файл", "/");

}

void MainWindow::on_fileSave_triggered() {

}

