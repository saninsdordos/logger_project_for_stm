#include "parsing_arguments.h"
void parsing_arguments::parsing_arguments_to_usb_port(int &argc,
                                                      char **&usb_port) {

  if (argc > 1) {
    for (int s = 1; s < argc; s++) {
      port_usb += usb_port[s];
    }
    validate_empty_port_or_not(port_usb);
  } else {

    validate_empty_port_or_not(port_usb);
  }
}
