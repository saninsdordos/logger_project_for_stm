#include "log_to_file_serial.h"
#include <iostream>
std::string log_file_serial::receive_message(std::string &message,
                                             bool &shutdown) {

  //  data_ready = true;
  // test.notify_one();
  //
  //
  if (!shutdown) {

    cv.notify_one();
  }
  if (shutdown) {
    std::unique_lock<std::mutex> lock(lock_ready_message);
    uart_messages.push(message);
    lock.unlock();
    cv.notify_one();
  }
  return message;
}
