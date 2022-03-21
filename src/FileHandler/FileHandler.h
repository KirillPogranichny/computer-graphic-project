#include <fstream>

#ifndef COMPUTER_GRAPHIC_PROJECT_SRC_FILEHANDLER_FILEHANDLER_H_
#define COMPUTER_GRAPHIC_PROJECT_SRC_FILEHANDLER_FILEHANDLER_H_


class FileHandler {
 private:
	std::ifstream file;

 public:
  	void openFile(const std::string& path);
  	std::string getData();
  	bool isFileOpen();
};


#endif //COMPUTER_GRAPHIC_PROJECT_SRC_FILEHANDLER_FILEHANDLER_H_
