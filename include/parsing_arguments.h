#include "main_app.h"
#include <string>
class parsing_arguments : main_app {
public:
  void parsing_arguments_to_usb_port(int &argc, char **&usb_port_argument);
  void validate_empty_port_or_not(std::string &port);

private:
  std::string port_usb;
};
