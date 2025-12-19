#include "read_uart_only.h"
#include "log_to_file_serial.h"
#include "read_thread_serial.h"
#pragma once
class start_point_read_write
{

public:
    log_file_serial logger;
    read_file_stm_32 parser;
    only_read_serial reader;
    open_usb_port_serial open_port;
    // todo get asscess to reference p4
    start_point_read_write()
        : logger(), parser(logger), reader(parser, open_port)
    {
    }

    void start_point();

private:
    bool status1;
    bool status2;
    bool status3;
    bool status4;
    bool status5;
};