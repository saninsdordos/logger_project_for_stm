#include "log_to_file_serial.h"
#include "main_app.h"
#include "read_thread_serial.h"
#include "read_uart_only.h"
#include <cstddef>
#include <thread>
#pragma once
class start_point_read_write : main_app {

public:
  std::atomic_bool test = true;
  reader_char_serial reader;
  read_file_stm_32 parser;
  log_file_serial logger;

  void user_input_for_exit_from_programm();
  start_point_read_write()
      : reader(&test, parser), parser(&logger), logger(&test, this) {}

  void start_point();
  void start_point_csv();
  void stop_threads(std::thread &thread_1, std::thread &thread_2);

private:
  char yes_no;
};
