#include "open_serial_port.h"
#include "parsing_arguments.h"
#include "start_point_read_write.h"
#include <thread>
using std::cin;
using std::cout;
bool start;
open_usb_port_serial t;
start_point_read_write u;
parsing_arguments parser;
int main(int argc, char **usb_port) {

  parser.parsing_arguments_to_usb_port(argc, usb_port);
  int choice_switch = 0;
  // добавить возможность выбирать директорию/название лога через аргументы
  do {
    cout << "Menu:" << "\n"
         << "2) Start logger txt format" << "\n"
         << "3) CSV file" << "\n";
    cout << "Choice" << std::endl;
    cin >> choice_switch;
    switch (choice_switch) {

    case 2: {

      u.start_point();

      break;
    }
    case 3: {
      u.start_point_csv();
      break;
    }
    }
  } while (1);
}
