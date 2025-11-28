  #include <fstream>
  #include <vector>
  #include <string.h>
  #include <iomanip>
  #include "open_serial_port.h"
  #include <string>
  #include <array>
  #include "read_thread_serial.h"
  #pragma once

  class read_file_stm_32
  {
   public:

 only_read_serial &qw;


bool status;
  std::vector<std::string>xyz_stm_32 = {};
    
   std::array<std::string, 100> temp = {};
  //read_file_stm_32() : s(s) {};
      bool read_serial_uart();
     
          read_file_stm_32(only_read_serial &t) : qw(t) {}
          
    //read_file_stm_32(sa) : test1(){test::open_usb_port_serial::sa;}

 
     private:
       // char formatted_time[100];
  
        //open_usb_port_serial s; 
    };
 
          enum  status_read : int {
  READ_HEADER = 0,
  START_CREATE_MESSAGE = 1,
  END_MESSAGE = 2,
 };