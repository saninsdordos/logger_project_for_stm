#include "serialib.h"
#include"open_serial_port.h"

#include <mutex>
#include <thread>
#include <condition_variable>

#pragma once
class read_file_stm_32;


class only_read_serial {
public:
read_file_stm_32 &t;
open_usb_port_serial &u;
  only_read_serial(read_file_stm_32 &obj, open_usb_port_serial &uu) :t(obj), u(uu)  {};

bool only_read_serial_read();




int read_bytes; 
 

 char c_style_temp_string[20];
  
//char temp_buffer_100[100];
//std::mutex &temp_buffer_100[100];
private:
char save_from_serial_char[0];
bool status5 = true; 
char tempd;
int d = 0;

    
};