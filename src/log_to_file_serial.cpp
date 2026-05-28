#include "log_to_file_serial.h"
// TODO:, set option write to CV file
// /log_file_serial &rur;
//
#include <cstdlib>
#include <iostream>
#include <ostream>
bool log_file_serial::log_to_file_serial() {
  work = true;
  while (work) {
    file_print.open(file_name,
                    std::ios::app | std::fstream::in | std::fstream::out);

    std::unique_lock<std::mutex> lock(lock_ready_message);

    cv.wait(lock);
    if (uart_messages.size() > 0) {
      temp_message = uart_messages.front();
      uart_messages.pop();
    }
    for (int s = 0; s < temp_message.length(); s++) {

      if (temp_message[s] == '\0') {
        temp_message.erase(s);
      }
    }

    file_print << "[" << std::put_time(get_time_to_file(), "%c") << "]" << "\n"
               << temp_message;

    pass_to_count_to_log++;

    if (uart_messages.empty() and !*receive_flag) {
      work = false;
    }

    file_print.close();
    change_file_name(pass_to_count_to_log, file_name);
  }

  return true;
}
