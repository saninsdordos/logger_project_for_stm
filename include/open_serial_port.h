#include "serialib.h"
#include <atomic>
#include <cstddef>
#include <sstream>
#include <strstream>
#pragma once
class open_usb_port_serial {
public:
  static serialib sa;
  bool open_usb_port(std::string &port);
  void check_symlink_to_port();
  bool validate_symlink_to_user_port(std::string &symlink);

private:
  int check_port;
  std::string port_usb;
  std::string temp = "";
  std::string ready_tty_port;
  char number_serial_3;
  int number_serial_porn_2_number;
};
