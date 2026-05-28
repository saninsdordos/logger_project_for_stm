#include "open_serial_port.h"
#include <sstream>
bool open_usb_port_serial::validate_symlink_to_user_port(std::string &symlink) {

  char pattern[3] = {'A', 'C', 'M'};
  int e = 0;
  for (size_t t = 0; t < symlink.size(); t++) {
    if (symlink[t] == pattern[e]) {
      e++;
      if (e == 3) {
        open_usb_port(port_usb);
      }

      //      continue;
    }
  }
  return false;
}
