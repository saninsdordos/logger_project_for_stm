#include "open_serial_port.h"
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <fcntl.h>
#include <filesystem>
#include <iostream>
#include <ostream>
#include <sstream>
#include <stdlib.h>
#include <sys/stat.h>
#include <system_error>
#include <unistd.h>
void open_usb_port_serial::check_symlink_to_port() {
  std::filesystem::path ds = "/dev/serial/by-id/";
  std::ostringstream t;
  std::string temp = {0};

  for (auto const &direct : std::filesystem::directory_iterator{ds}) {
    if (direct.is_symlink()) {
      std::cout << std::filesystem::read_symlink(direct);
      t.str(temp);
      validate_symlink_to_user_port(temp);
    }
  }

  // struct stat struct_to_stat = {0};
  //  struct stat *ptr = &struct_to_stat;

  // lstat("/dev/serial/by-id/", ptr);

  // char test[ptr->st_size];
  // realpath("/dev/serial/by-id/", test);
  // printf("%s", test);
}
