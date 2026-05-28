#include "start_point_read_write.h"
#include <ostream>
void start_point_read_write::start_point() {
  using namespace std::chrono_literals;
  using namespace std::this_thread;

  std::thread o(&reader_char_serial::reader_char_serial_1, &reader);
  std::thread s(&log_file_serial::log_to_file_serial, &logger);

  std::thread itttnput(
      &start_point_read_write::user_input_for_exit_from_programm, this);
  itttnput.join();
  if (!test) {
    o.join();
    std::cout << "2" << std::endl;
    s.join();
    std::cout << "3" << std::endl;
    exit_from_programm("test", 1);
  }
}
