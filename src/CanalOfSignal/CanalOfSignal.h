//
// Created by иван on 22.03.2022.
//
#include <vector>
#include <string>
#ifndef COMPUTER_GRAPHIC_PROJECT_SRC_CANALOFSIGNAL_H_
#define COMPUTER_GRAPHIC_PROJECT_SRC_CANALOFSIGNAL_H_

class CanalOfSignal {
 private:
 public:
  std::string name_of_channel;
  CanalOfSignal(std::string name_of_channels);
  std::vector<double> values_of_signal;
};

#endif //COMPUTER_GRAPHIC_PROJECT_SRC_CANALOFSIGNAL_H_
