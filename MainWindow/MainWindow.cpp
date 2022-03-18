#include "Mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  this->setWindowTitle("DSP-Ткаченко, Пограничный, Семенов, Смирнов");
  connect(this->ui->fileOpen, &QAction::triggered, this, &MainWindow::on_fileOpen_triggered);
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_fileOpen_triggered()
{
	QMessageBox *msg = new QMessageBox;
	msg->setText("FileOpen");
	msg->exec();
}

void MainWindow::on_fileSave_triggered() {
  	QMessageBox *msg = new QMessageBox;
  	msg->setText("FileSave");
  	msg->exec();
}

