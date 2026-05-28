#include "validation_type_port.h"
port_type validation_type_port::acm_port() {

  port_type t;
  t.first_char = 'A';
  t.second_char = 'C';
  t.three_char = 'M';
  return t;
}
