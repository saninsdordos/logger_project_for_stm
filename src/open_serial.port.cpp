#include "open_serial_port.h"
serialib open_usb_port_serial::sa;
bool open_usb_port_serial::open_usb_port()
{

    using std::cin;
    using std::cout;
INPUT:
  cin.clear();
   
      std::cout << "Your port:";
 
    getline(std::cin >> std::ws, port_usb);  
  
    check_port = sa.openDevice(port_usb.c_str(), 9600);
   
   std::cout << &sa << "\n";

   

 
       if (!sa.isDeviceOpen() || cin.fail())
       { 
 

       
        perror("Error");
        sa.closeDevice();
        std::cerr << "Write again" << "\n";
  
     cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      port_usb.clear();
      
      
    
        check_port = 0;
         cin.clear();
        goto INPUT;


        // bad-style, rework later
    }
   return true;
}