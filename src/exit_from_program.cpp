#include "main_app.h"
void main_app::exit_from_programm(std::string message, int exit_type) {

  std::cerr << message << "\n";
  std::exit(exit_type);
}
