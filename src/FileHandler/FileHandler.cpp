//
// Created by иван on 21.03.2022.
//
#include <fstream>
#include "FileHandler.h"

void FileHandler::openFile(const std::string &path) {
  this->file.open(path);
}

bool FileHandler::isFileOpen() {
  return this->file.is_open();
}

std::string FileHandler::getData() {

}