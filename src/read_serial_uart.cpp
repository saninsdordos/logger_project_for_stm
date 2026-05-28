#include "read_thread_serial.h"
#include "read_uart_only.h"

char read_file_stm_32::read_serial_uart(char &from_uart_reader_symbol,
                                        bool shutdown_work) {

  if (!shutdown_work) {
    i->receive_message(to_vector, shutdown_work);
  }
  if (shutdown_work) {
    switch (d) {
    case READ_HEADER: {

      if (from_uart_reader_symbol == '!') {

        d = START_CREATE_MESSAGE;
      }

      break;
    }

    case START_CREATE_MESSAGE: {

      if (from_uart_reader_symbol == 'q') {
        from_uart_reader_symbol = '\0';
        d = END_MESSAGE;
      }
      to_vector += from_uart_reader_symbol;
      break;
    }

    case END_MESSAGE: {
      i->receive_message(to_vector, shutdown_work);
      to_vector.clear();
      d = READ_HEADER;

      break;
    }
    }
  }
  return 1;
}
