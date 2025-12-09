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
#pragma once

class log_file_serial
{

public:

  // log_file_serial(read_file_stm_32& s) : p(s) {};
  std::queue<std::string> uart_messages;

  std::string receive_message(std::string &message);
  bool log_to_file_serial();


  // log_file_serial(std::vector<std::sting> &ref) :  p(ref) {}
private:
  char formatted_time[100];
  int temp_array;
  std::string i;
  static std::fstream file_print;  
  std::condition_variable cv;
  std::mutex lock_ready_message;
  std::string temp_message;
  bool data_ready;
};