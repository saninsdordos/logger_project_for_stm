#include "serialib.h"
class only_read_serial {
    public:
  bool only_read_serial_thread();

  char  temp_buffer_100[100]; 

    private:
  int read_bytes;
    
};