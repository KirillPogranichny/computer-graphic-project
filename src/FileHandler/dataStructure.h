#include <string>
#include <vector>
typedef struct dataStructure{
  int number_of_channels = 0;
  int number_of_samples = 0;
  double sampling_frequency = 0;
  std::string signal_start_date;
  std::string signal_start_time;
  std::vector<std::string> channels_names;
  std::vector<std::string> signals_channels;

}dataStructure;