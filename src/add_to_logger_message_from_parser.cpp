#include "log_to_file_serial.h"


std::string log_file_serial::receive_message(std::string &message) {
 

     
    //  data_ready = true;
// test.notify_one();
std::unique_lock<std::mutex> lock(lock_ready_message); 
uart_messages.push(message);
      std::cout << "ok" << "\n";




cv.notify_one();
data_ready = true;
return message;
}