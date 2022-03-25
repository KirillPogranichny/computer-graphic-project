#include "MainWindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <string>
#include "src/FileHandler/FileHandler.h"
#include <src/BaseWaveform/BaseWaveform.h>
#include <QMessageBox>
#include <QBoxLayout>
#include <QLabel>
#include <QScrollArea>

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

  	QTabWidget  *main_Tab_Widget = new QTabWidget(this);
  	main_Tab_Widget->setGeometry(0, 0, this->width(), this->height());
  	main_Tab_Widget->show();

  	BaseWaveform *new_tab = new BaseWaveform();

	main_Tab_Widget->addTab(new_tab, "Канал 1");

  	QScrollArea *gg = new QScrollArea();
  	QBoxLayout *box = new QBoxLayout(QBoxLayout::TopToBottom);
  	QLabel *label = new QLabel();
  	label->setText(std::to_string(this->main_data_from_file.number_of_channels).c_str());
  	box->addWidget(label);
	gg->setLayout(box);
  	main_Tab_Widget->addTab(gg, "Информация о каналах");



}

void MainWindow::on_fileSave_triggered() {

}

