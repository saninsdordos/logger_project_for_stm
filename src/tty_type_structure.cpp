#include "validation_type_port.h"
port_type validation_type_port::tty_port() {

  port_type s;
  s.first_char = 't';
  s.second_char = 't';
  s.three_char = 'y';
  return s;
}
