#include "read_uart_only.h"
#include "log_to_file_serial.h"
#include "read_thread_serial.h"
#pragma once
class start_point_read_write
{
public:
public:
    only_read_serial p4;
    read_file_stm_32 p2; // 2. зависит от p4
    log_file_serial p3;

    start_point_read_write()
        : p4() // if default ctor exists
          ,
          p2(p4) // read_file_stm_32(only_read_serial &)
          ,
          p3(p2) // log_file_serial(read_file_stm_32 &)
    {
    }

    void start_point();
void thread_start_worker();
private:
    bool status1;
    bool status2;
    bool status3;
    bool status4;
    bool status5;
};