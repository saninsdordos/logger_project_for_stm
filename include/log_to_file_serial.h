#include <fstream>
#include <iostream>
#include <thread>
#include <ctime>
#include <iomanip>
#include <vector>
#include "read_uart_only.h"
#include <chrono>
#include <mutex>
#include <condition_variable>
#include <queue>
#include <algorithm>
#pragma once

class log_file_serial
{

public:


  std::queue<std::string> uart_messages;

  bool log_to_file_serial();
  std::string receive_message(std::string &message);
std::string change_file_name(int &pass_count,  std::string &file_name);
  

private:
 std::fstream file_print;  
  char formatted_time[100];
  int temp_array;
  std::string i;
  std::tm *timeptr;
  std::condition_variable cv;
  std::mutex lock_ready_message;
  std::string temp_message;
  bool data_ready;
  int count_index_file = 0;
  bool file_already_open =  true;
  int  pass_to_count_to_log = 0;
  std::string file_name ="log.txt";
};

//class change_color_log {
//public:
//std::string change_colour(std::tm *time); 

 // std::string time_coloured;
//};