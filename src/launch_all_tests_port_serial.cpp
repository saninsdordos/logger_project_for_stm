#include "main_app.h"
#include "open_serial_port.h"
#include "validation_type_port.h"
#include <string>
open_usb_port_serial open_1;
main_app tu;
void validation_type_port::launch_all(std::string &port) {
  if (search_port(port, tty_port()) and search_port(port, acm_port())) {
    // TODO: доделать проверку ссылки до порта 2) валидация ссылки с
    // польователским вводом
    open_1.open_usb_port(port);
  } else {
    tu.exit_from_programm("Port doesn't exist!", 1);
  }
}
