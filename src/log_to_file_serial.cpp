    #include "log_to_file_serial.h"
    std::fstream log_file_serial::file_print;
   
    bool log_file_serial::log_to_file_serial()
    {

    // implement for read THREADS!!  try  TRY and throw catch C++
    file_print.open("log5.txt", std::ios::app | std::fstream::in  | std::fstream::out);
    if (file_print.is_open())
    {
        std::cout << "File open" << "\n";
    }

    s.xyz_stm_32.reserve(100);

 
    //if (e.read_bytes <= 0)
    //{
       // std::cerr << "Error, 0 bytes from serial port, or critical error" << "\n";
       /// return false;
  // }
    if (e.read_bytes > 0)
    {

        s.xyz_stm_32.insert(s.xyz_stm_32.end(), std::begin(s.temp), std::end(s.temp));

        temp_array = s.xyz_stm_32.size();
        std::cout << temp_array << "Size receive" << "\n";
        if (temp_array >= 100)
        {

            auto now = std::chrono::system_clock::now();

            std::time_t t_c = std::chrono::system_clock::to_time_t(now);

            std::tm *timeptr = localtime(&t_c);

            //strftime(formatted_time, sizeof(formatted_time), "%F %H:%M:%S,", timeptr);
      
            // for(auto it = s.xyz_stm_32.begin(); it !=  s.xyz_stm_32.end();  ++it) //
                  //  std::string x = "X";
                    //std::string y = "Y"; 
                for (std:: string &i : s.xyz_stm_32)
                {

                  
                 
                    file_print << std::put_time(timeptr, "%c") << "\n";
                    file_print  << i << "\n";
                }

            s.xyz_stm_32.clear();
            s.temp.fill("\0");
            file_print.close();
        }
    }

    return true;
}