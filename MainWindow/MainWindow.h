//
// Created by иван on 06.03.2022.
//
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <src/FileHandler/dataStructure.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

private slots:
  void on_fileOpen_triggered();
  void on_fileSave_triggered();

private:
  Ui::MainWindow *ui;
  dataStructure main_data_from_file;

};
#endif // MAINWINDOW_H
