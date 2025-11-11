#include <fstream>
#include <iostream>
#include <thread>
#include <ctime>
#include <iomanip>
#include<vector>
#include "read_serial_uart.h"
#include <chrono>
#pragma once

class log_file_serial {

public:
static std::fstream file_print;
read_file_stm_32 &s;

 //log_file_serial(read_file_stm_32& s) : p(s) {};
log_file_serial(read_file_stm_32 &p) : s(p) {};
bool log_to_file_serial();
 // log_file_serial(std::vector<std::string> &ref) :  p(ref) {}
private:

char formatted_time[100];
int temp_array;
std:: string i;
 
};