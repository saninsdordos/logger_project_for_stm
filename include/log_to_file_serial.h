#include <atomic>
#include <chrono>
#include <condition_variable>
#include <ctime>
#include <fstream>
#include <iostream>
#include <mutex>
#include <ostream>
#include <queue>
#include <thread>
#include <vector>
#pragma once
class start_point_read_write;
class log_file_serial {

public:
  std::condition_variable cv;
  bool work = true;
  bool log_to_file_serial();

  std::atomic_bool *receive_flag;
  log_file_serial(std::atomic_bool *f, start_point_read_write *to_point)
      : receive_flag(f), point(to_point) {
    std::cout << f << "address pointer log_file" << std::endl;
  };

  start_point_read_write *point;
  std::queue<std::string> uart_messages;
  std::string receive_message(std::string &message, bool &shutdown);
  std::string change_file_name(int &pass_count, std::string &file_name);
  std::tm *get_time_to_file();
  void log_to_file_csv();
  void remove_char_lo_log_file(); // tomorrow 4.01 after russian HOMEWORK
private:
  std::fstream file_print;
  char formatted_time[100];
  int temp_array;
  std::string i;
  std::tm *timeptr;
  std::mutex lock_ready_message;
  std::string temp_message;
  bool data_ready;
  int count_index_file = 0;
  int pass_to_count_to_log = 0;
  std::string file_name = "log.txt";
  std::string temp = "";
};

// class change_color_log {
// public:
// std::string change_colour(std::tm *time);

// std::string time_coloured;
//};
