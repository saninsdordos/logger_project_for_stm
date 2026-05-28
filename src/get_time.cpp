#include "log_to_file_serial.h"
std::tm *log_file_serial::get_time_to_file() {
  auto now = std::chrono::system_clock::now();

  std::time_t t_c = std::chrono::system_clock::to_time_t(now);

  std::tm *timeptr2 = localtime(&t_c);

  return timeptr2;
};
