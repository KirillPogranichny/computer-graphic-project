#include <fstream>
#include <vector>
#include "src/FileHandler/dataStructure.h"
#ifndef COMPUTER_GRAPHIC_PROJECT_SRC_FILEHANDLER_FILEHANDLER_H_
#define COMPUTER_GRAPHIC_PROJECT_SRC_FILEHANDLER_FILEHANDLER_H_


class FileHandler {
 private:
	std::ifstream file;

 public:
  	void openFile(const std::string& path);
  	dataStructure getData();
  	bool isFileOpen();

  	void readDataField(int &field);
  	void readDataField(double &field);
  	void readDataField(std::string &field);
  	void readDataField(std::vector<std::string> &field);
  	void readDataField(std::vector<CanalOfSignal> &field, const std::vector<std::string> &names);

};


#endif //COMPUTER_GRAPHIC_PROJECT_SRC_FILEHANDLER_FILEHANDLER_H_
