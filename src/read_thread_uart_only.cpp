#include "read_thread_serial.h"
#include "read_uart_only.h"

bool only_read_serial::only_read_serial_read()
{

  using namespace std::chrono_literals;
  using namespace std::this_thread;
while(true)
  {


    //  std::cout << "Address thread" << &temp_buffer_100 << "\n";//



      read_bytes = u.sa.readChar(save_from_serial_char, 20);
  
 tempd  =  save_from_serial_char[0];
std::cout << "symbol" << tempd << "\n";
   t.read_serial_uart(tempd);
  // d++;
  
   
 
     // d = 0;

     //std::unique_lock<std::mutex> lock(test_mutex); 
     // std::cout << "ok" << "\n";
     
    //  data_ready = true;
// test.notify_one();
   
    
 // }
 
} 


return true;
}