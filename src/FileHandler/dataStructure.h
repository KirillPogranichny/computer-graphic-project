//
// Created by иван on 21.03.2022.
//
#include <iostream>
#include <vector>
#include "src/CanalOfSignal/CanalOfSignal.h"
#ifndef COMPUTER_GRAPHIC_PROJECT_SRC_FILEHANDLER_DATASTRUCTUR_H_
#define COMPUTER_GRAPHIC_PROJECT_SRC_FILEHANDLER_DATASTRUCTUR_H_
typedef struct dataStructure{
  int number_of_channels = 0;
  int number_of_samples = 0;
  double sampling_frequency = 0;
  std::string signal_start_date;
  std::string signal_start_time;
  std::vector<std::string> channels_names;
  std::vector<CanalOfSignal> signals_channels;

}dataStructure;
#endif //COMPUTER_GRAPHIC_PROJECT_SRC_FILEHANDLER_DATASTRUCTUR_H_
