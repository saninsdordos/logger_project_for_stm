  #include <fstream>
  #include <vector>
  #include <string.h>
  #include <iomanip>
  #include "open_serial_port.h"
  #include <string>
  #include <array>

  #pragma once

  class read_file_stm_32
  {
   public:

 

  open_usb_port_serial t;
 
     std::vector<std::string>xyz_stm_32 = {};
    std::array<std::string, 100> temp = {};
    char temp_buffer_100[100]; 
      bool read_serial_uart();
       int read_bytes;

    // read_file_stm_32(sa) : test1(){test::open_usb_port_serial::sa;}
    
 
     private:
       // char formatted_time[100];
        int temp_1;
        int temp_array = 0;
      
        //open_usb_port_serial s; 
    };