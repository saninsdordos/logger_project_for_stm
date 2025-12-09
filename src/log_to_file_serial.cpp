#include "log_to_file_serial.h"
#include "read_thread_serial.h"

std::fstream log_file_serial::file_print;

bool log_file_serial::log_to_file_serial()
{
    //
  

    file_print.open("log5.txt", std::ios::app | std::fstream::in | std::fstream::out);
    if (file_print.is_open())
    {
        std::cout << "File open" << "\n";
    }

    auto now = std::chrono::system_clock::now();

    std::time_t t_c = std::chrono::system_clock::to_time_t(now);

    std::tm *timeptr = localtime(&t_c);
    //  s.xyz_stm_32.reserve(20);
  
    // if (read_bytes <= 0)
    //  {

   std::unique_lock<std::mutex> lock( lock_ready_message);

   cv.wait(lock, [&] {return data_ready == true;});

 
        temp_message = uart_messages.front();
        uart_messages.pop();
       
   file_print << std::put_time(timeptr, "%c");
    file_print << temp_message << "\n"; 
    
   
    // if (e.read_bytes > 0)
    // {

    // s.xyz_stm_32.insert(s.xyz_stm_32.end(), std::begin(s.temp), std::end(s.temp));

    //  temp_array = xyz_stm_32.size();//

    // if (temp_array >= 5)
    // {


    // strftime(formatted_time, sizeof(formatted_time), "%F %H:%M:%S,", timeptr);

    // for(auto it = s.xyz_stm_32.begin(); it !=  s.xyz_stm_32.end();  ++it) //
    //  std::string x = "X";
    // std::string y = "Y";
    //
    //

   

    return true;
}