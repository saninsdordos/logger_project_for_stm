#include <log_to_file_serial.h>
std::string log_file_serial::change_file_name(int &pass_count, std::string &file_name)
{
     if (pass_count > 10)
     {

          file_name.clear();
          file_name = "log";
          count_index_file++;

          file_name += std::to_string(count_index_file);

          pass_count = 0;
     }
     return file_name;
}