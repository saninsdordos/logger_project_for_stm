#include "serialib.h"
#include"open_serial_port.h"
#include <mutex>
#pragma once
class only_read_serial {
public:
//read_file_stm_32 &s;

void only_read_serial_read();
open_usb_port_serial  t;
char save_from_serial_char[100];
std::mutex  block_read;
//char temp_buffer_100[100];
//std::mutex &temp_buffer_100[100];
bool status5; 
int read_bytes;   
private:


    
};