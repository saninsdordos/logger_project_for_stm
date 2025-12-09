  #include <fstream>
  #include <vector>
  #include <string.h>
  #include <iomanip>
  #include "open_serial_port.h"
  #include <string>
  #include <array>

  
  
  #pragma once
class log_file_serial;
class only_read_serial;

  class read_file_stm_32
  {
   public:



 log_file_serial &i;


bool status;
 
  //read_file_stm_32() : s(s) {};
      char read_serial_uart(char from_uart_reader_symbol);
     
 read_file_stm_32(log_file_serial &logger)
    : i(logger) {};

          

    //read_file_stm_32(sa) : test1(){test::open_usb_port_serial::sa;}

     private:
       // char formatted_time[100];
  int d = 0;
  int serial_number = 0;
  std::string to_vector; 
  char symbol_to_string; 

  //open_usb_port_serial s; 
    };
 
          enum  status_read : int {
  READ_HEADER = 0,
  START_CREATE_MESSAGE = 1,
  END_MESSAGE = 2,
 };