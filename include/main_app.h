#include "log_to_file_serial.h"
#include "read_thread_serial.h"
#include <atomic>
#include <string>
#pragma once
class reader_char_serial;
class main_app {
public:
  void exit_from_programm(std::string message, int exit_type);

private:
  char user_no_yes;
};
