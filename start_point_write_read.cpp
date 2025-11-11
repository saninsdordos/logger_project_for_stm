#include "start_point_read_write.h"

void start_point_read_write::start_point() {
status1 = false;
status2 = false;

do{
using std::chrono::system_clock;
using namespace std::chrono_literals;
using namespace std::this_thread;
 std::this_thread::sleep_for(5ms);
status1 = p2.read_serial_uart();
status2 = p3.log_to_file_serial();



    
}while(status1 == true && status2 == true);

}
