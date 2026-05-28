#include "port_type.h"
#include <string>
class validation_type_port {

public:
  port_type acm_port();
  port_type tty_port();
  bool search_port(std::string &directory_name, port_type c);
  void launch_all(std::string &port);

private:
};
