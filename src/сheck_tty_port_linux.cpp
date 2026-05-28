#include "open_serial_port.h"
#include <cstdio>
#include <filesystem>
void check_tty_port_linux() {

  namespace fs = std::filesystem;
  fs::path p("/dev/");
  for (const auto &test : fs::directory_iterator(
           (p), fs::directory_options::follow_directory_symlink)) {

    std::string name = test.path().string();

    std::string name2 = test.path().string();
  }
}
