#include "Mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <string>
#include "src/FileHandler/FileHandler.h"
#include <QMessageBox>
#include <QScrollArea>
#include <QDockWidget>
#include <QPainter>
#include <QLabel>

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

  	QDockWidget *dock_for_right_scroll = new QDockWidget("Channels",this);
  	QScrollArea *scroll_area_right = new QScrollArea(this);
  	scroll_area_right->setStyleSheet("background-color:rgb(82, 38, 38);;");
  	dock_for_right_scroll->setWidget(scroll_area_right);
  	addDockWidget(Qt::RightDockWidgetArea, dock_for_right_scroll);
  	

}

void MainWindow::on_fileSave_triggered() {

}

