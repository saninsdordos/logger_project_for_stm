#include "open_serial_port.h"
#include "read_thread_serial.h"
#include <ostream>
bool reader_char_serial::reader_char_serial_1() {
  work = true;
  while (*receive1) {
    read_bytes = u.sa.readChar(save_char_from_read, 20);
    state_machine.read_serial_uart(save_char_from_read[0], work);
  }
  work = false;

  state_machine.read_serial_uart(save_char_from_read[0], work);
  return true;
}
