#include "start_point_read_write.h"
#include <cinttypes>
#include <thread>
void start_point_read_write::stop_threads(std::thread &thread_1,
                                          std::thread &thread_2) {

  thread_1.join();
  thread_2.join();
}
