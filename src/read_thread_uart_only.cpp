                #include "read_thread_serial.h"
          

                    void only_read_serial::only_read_serial_read() {
                    std::cout << "ssssssssssssssssss" << "\n";
                       int d = 0;
                    while(d < 10) {
                      //  std::cout << "Address thread" << &temp_buffer_100 << "\n";//
                    block_read.unlock();
                        read_bytes = t.sa.readChar(save_from_serial_char, 200);
                   
                    std::cout << read_bytes << "byte in";
                   
                    
                 block_read.lock();
                    }  
                        
                    }
