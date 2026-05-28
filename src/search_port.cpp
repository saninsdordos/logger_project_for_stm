#include "validation_type_port.h"
#include <cstddef>
#include <string>
bool validation_type_port::search_port(std::string &directory_name,
                                       port_type c) {
  for (size_t i = 0; i < directory_name.size() - 3; i++) {

    if (directory_name[i] == c.first_char) {
      if (directory_name[i + 1] == c.second_char) {
        if (directory_name[i + 2] == c.three_char) {
          return true;
        }
      }
    }
  }

  return false;
}
