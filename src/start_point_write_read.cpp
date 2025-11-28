#include "start_point_read_write.h"
#include <iostream>
// TODO:: MORE PRACTICE  CLASSES AND THREADS !! IMPORTANT
  only_read_serial r;
 
int test =0;

void start_point_read_write::start_point()
{
 status5 = true;
 std::thread op(&only_read_serial::only_read_serial_read, &p4);


  status1 = false;
  status2 = false;
int temp = 0;
  using namespace std::chrono_literals;
  using namespace std::this_thread;
  for(int s = 0; s < 100; s++) {
   
   temp += r.save_from_serial_char[s];
  }
  if(temp > 10) {
  do
  {
// TODO: FIX  CONTROL CENTER,  possible delay issue;, possible another way how i can sync all functions
    using std::chrono::system_clock;
 
  
    status1 = p2.read_serial_uart();
    std::this_thread::sleep_for(10ms);
    status2 = p3.log_to_file_serial();
test++;
  } while (test < 100);
  }

}