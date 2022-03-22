//
// Created by иван on 21.03.2022.
//
#include "FileHandler.h"
#include <iostream>
#include <cstdlib>

void FileHandler::openFile(const std::string &path) {
  this->file.open(path);
}

bool FileHandler::isFileOpen() {
  return this->file.is_open();
}

// убрать кучу перегрузок функции, добавить перегрузку преобразования данных также надо походу добавить
// скип хештегов
void FileHandler::readDataField(int &field) {
  std::string line;
  while (getline(this->file, line)) {
	if (line[0]=='#') {
	  continue;
	}
	else{
	  break;
	}
  }
  field = std::atoi(line.c_str());
}

void FileHandler::readDataField(double &field) {
  std::string line;
  while (getline(this->file, line)) {
	if (line[0]=='#') {
	  continue;
	}
	else{
	  break;
	}
  }
  field = std::atof(line.c_str());
}

void FileHandler::readDataField(std::string &field) {
  std::string line;
  while (getline(this->file, line)){
    if (line[0] == '#') {
	  continue;
    }
    else{
	  break;
    }
  }
  field = line;
}

void FileHandler::readDataField(std::vector<std::string> &field) {
  std::string line;
  while (getline(this->file, line)){
	if (line[0] == '#') {
	  continue;
	}
	else{
	  break;
	}
  }
  std::string name;
  for ( auto symbol: line ){
    if ( symbol == ';' ){
	  field.push_back(name);
	  name.clear();
    }
    else{
      name += symbol;
    }
  }
  if (!name.empty()) field.push_back(name);
}

void FileHandler::readDataField(std::vector<CanalOfSignal> &field, const std::vector<std::string> &names) {
  std::string line;
  for ( const auto& name: names ){
    field.push_back(name);
  }

  while ( getline( this->file, line ) ){
	if (line[0] == '#') {
	  continue;
	}
	int name_index = 0;
	for ( auto sym: line ){

	}
  }
}

dataStructure FileHandler::getData() {
  	dataStructure structured_data;
	if (this->isFileOpen()){
	  this->readDataField(structured_data.number_of_channels);
	  this->readDataField(structured_data.number_of_samples);
	  this->readDataField(structured_data.sampling_frequency);
	  this->readDataField(structured_data.signal_start_date);
	  this->readDataField(structured_data.signal_start_time);
	  this->readDataField(structured_data.channels_names);
	}
	return structured_data;
}