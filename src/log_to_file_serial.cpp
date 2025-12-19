#include "log_to_file_serial.h"
#include "read_thread_serial.h"
#include <stdio.h>
#include "thread"

// /log_file_serial &rur;
//

bool log_file_serial::log_to_file_serial()
{

 
  while (true)
  {

      file_print.open(file_name, std::ios::app | std::fstream::in | std::fstream::out);
    

    std::unique_lock<std::mutex> lock(lock_ready_message);
    auto now = std::chrono::system_clock::now();

    std::time_t t_c = std::chrono::system_clock::to_time_t(now);

    timeptr = localtime(&t_c);

    cv.wait(lock);

    temp_message = uart_messages.front();
    uart_messages.pop();

    for (int s = 0; s < temp_message.length(); s++)

    {

      if (temp_message[s] == '\0')
      {
        temp_message.erase(s);
      }
    }

    file_print << "\n "<< "[" << std::put_time(timeptr, "%c") << "]" << temp_message;

    pass_to_count_to_log++;
    std::cerr << "ok";

    data_ready = false;
    file_print.close();
   change_file_name(pass_to_count_to_log ,file_name);
  }

  // s.xyz_stm_32.insert(s.xyz_stm_32.end(), std::begin(s.temp), std::end(s.temp));

  // strftime(formatted_time, sizeof(formatted_time), "%F %H:%M:%S,", timeptr);

  // for(auto it = s.xyz_stm_32.begin(); it !=  s.xyz_stm_32.end();  ++it) //
  //  std::string x = "X";
  // std::string y = "Y";
  //
  //

  return true;
}
