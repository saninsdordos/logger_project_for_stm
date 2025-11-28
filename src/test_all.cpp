#include "start_point_read_write.h"
open_usb_port_serial s;
start_point_read_write e;

int main()
{ 
    
 only_read_serial y;
    int choice_switch = 0;
    using std::cin;
    using std::cout;

    do
    {
        cout << "Menu:" << "\n"
             << "1) Port" << "\n"
             << "2) Start logger" << "\n";
        cout << "Choice" << std::endl;
        cin >> choice_switch;
        switch (choice_switch)
        {
        case 1:
        {
       
           s.open_usb_port();
            break;
        }
        case 2:
        {
               
         e.start_point();
          
            break;
        }
        }   
    } while (1);
}
