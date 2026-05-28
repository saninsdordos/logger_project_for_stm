#include "open_serial_port.h"
#include "read_uart_only.h"
#include <atomic>
#include <condition_variable>
#include <ostream>
#pragma once
class reader_char_serial {
public:
  char save_char_from_read[1];
  bool reader_char_serial_1();

  read_file_stm_32 &state_machine;
  reader_char_serial(std::atomic_bool *f, read_file_stm_32 &sm)
      : receive1(f), state_machine(sm) {
    std::cout << "add ress reader" << f << std::endl;
  }

  std::atomic_bool *receive1;

private:
  int read_bytes;
  open_usb_port_serial u;
  bool work;
};
