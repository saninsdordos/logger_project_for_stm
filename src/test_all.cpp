#include "start_point_read_write.h"

open_usb_port_serial t;
start_point_read_write u;

int main(int argc, char** usb_port)
{

    int choice_switch = 0;
    using std::cin;
    using std::cout;
    bool start;

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

            t.open_usb_port();
            break;
        }
        case 2:
        {

            u.start_point();

            break;
        }
        }
    } while (1);
}
