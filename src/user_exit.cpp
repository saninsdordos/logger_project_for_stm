#include "start_point_read_write.h"
void start_point_read_write::user_input_for_exit_from_programm() {
  while (true) {

    std::cerr << "OK";
    std::cin >> yes_no;
    if (yes_no == 'N') {
      test = false;

      return;
    }
  }
};
