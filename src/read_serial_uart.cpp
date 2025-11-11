#include "read_serial_uart.h"
#include "open_serial_port.h"
#include "log_to_file_serial.h"


read_file_stm_32 p;
bool read_file_stm_32::read_serial_uart() {
std::cout<< "test" << "\n";


if(!t.sa.isDeviceOpen()) {

return false; 
}
    for (size_t i = 0; i < temp.size(); i++)

        {
            if (temp[i] == "")
            {
                
                read_bytes = t.sa.readString(temp_buffer_100, '\n', sizeof(temp_buffer_100));
                temp[i] += temp_buffer_100;
                memset(temp_buffer_100, '\0', sizeof(temp_buffer_100));
                continue;
            }
         
           
   
        }

return true;
}        