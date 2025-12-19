#include "read_thread_serial.h"
#include "read_uart_only.h"

bool only_read_serial::only_read_serial_read()
{

  using namespace std::chrono_literals;
  using namespace std::this_thread;
  while (true)
  {

    read_bytes = u.sa.readChar(save_from_serial_char, 20);

    tempd = save_from_serial_char[0];

    t.read_serial_uart(tempd);
    // d++;
  }

  return true;
}