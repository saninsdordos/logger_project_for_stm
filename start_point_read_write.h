#include "read_serial_uart.h"
#include "log_to_file_serial.h"
#pragma once
class  start_point_read_write{
public:
 read_file_stm_32 p2;
log_file_serial p3;
 start_point_read_write() : p2(), p3(p2) {};
void start_point();
private:
bool status1;
bool status2;
};