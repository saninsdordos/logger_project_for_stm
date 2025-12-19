#include "start_point_read_write.h"
#include <iostream>
// TODO:: MORE PRACTICE  CLASSES AND THREADS !! IMPORTANT





void start_point_read_write::start_point()
{





  

  using namespace std::chrono_literals;
  using namespace std::this_thread;

 




   
 
 std::thread o(&only_read_serial::only_read_serial_read, &reader);
 std::thread s(&log_file_serial::log_to_file_serial, &logger);
o.join();




}


 