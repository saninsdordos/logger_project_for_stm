    #include "read_uart_only.h"




    bool read_file_stm_32::read_serial_uart() {
    std::cout<< "test" << "\n";
 // TODO: there only do string from char 
 // START BYTE !0x1  END BYTE !0x2
//if(!t.sa.isDeviceOpen()) {
//
//std::cout << &qw.temp_buffer_100 << "buff" << "\n";
//}//
int d = 0;

        for (size_t i = 0; i < 100; i++) {

          char temp = qw.save_from_serial_char[i];
                switch (d)
                {
                case status_read::READ_HEADER: 
                if(qw.save_from_serial_char[i] == '!') {d = 1; }
               break;
                

            case status_read::START_CREATE_MESSAGE:
              xyz_stm_32[i] += std::to_string(temp);   
              d = 2;                 
                break;
               

                case status_read::END_MESSAGE:
                if(qw.save_from_serial_char[i] == '\n')     
                break;
            }
                
                
    }             // read_bytes = t.sa.readString(temp_buffer_100, '\n', sizeof(temp_buffer_100));
              
                   
               
              
         
           
   
        

return true;
}