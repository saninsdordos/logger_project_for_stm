#include "serialib.h"
#include <string.h>
#include <limits>
#include <iomanip>
#include <iostream>
#include <istream>
#pragma once

    class open_usb_port_serial
    {

    public:
    static serialib  sa;
    
    bool open_usb_port();
     


     std::string port_usb;
 
    private:
 int check_port;
 int code_error;
}; 