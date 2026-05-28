#include "parsing_arguments.h"
#include "validation_type_port.h"
validation_type_port validate;
void parsing_arguments::validate_empty_port_or_not(std::string &port) {

  if (port.empty()) {
    exit_from_programm("Port is empty!", 0);
  }
  validate.launch_all(port);
}
