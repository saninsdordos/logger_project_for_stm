#include "main_app.h"
#include "open_serial_port.h"
#include <cstdio>
#include <string>
serialib open_usb_port_serial::sa;
main_app exit_2;
bool open_usb_port_serial::open_usb_port(std::string &port) {
  sa.openDevice(port.c_str(), 115200);

  if (!sa.isDeviceOpen()) {
    sa.closeDevice();
    exit_2.exit_from_programm("error", 0);
    return false;
  }
  return true;
}
