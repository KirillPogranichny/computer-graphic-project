#include "Mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <string>
#include "src/FileHandler/FileHandler.h"
#include <QMessageBox>
#include <iostream>

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
	QString path_to_open_file = QFileDialog::getOpenFileName(this, "Выберите файл", "/", "*.txt");

	if (path_to_open_file.isEmpty() && path_to_open_file.isNull()){
	  return;
	}

	FileHandler file;
  	file.openFile(path_to_open_file.toStdString());

  	if ( !file.isFileOpen()){
  	  QMessageBox::warning(this, "Внимание", "Ошибка открытия файла");
  	  return;
  	}

	this->main_data_from_file = file.getData();

}

void MainWindow::on_fileSave_triggered() {

}

