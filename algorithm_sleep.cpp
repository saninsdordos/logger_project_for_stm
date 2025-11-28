#include <iostream>
#define TOTAL_EPOCH 10;
#define WEIGHT_A 200;
#define WEIGHT_T 300;
#include <iomanip>
#include <cstring>
#include <vector>
int main(){

  float temp = 0;
  float temp2 = 0;
  float answer = 0;
  float answer2 = 0;
  float answer3 = 0;
  float answer4 = 0;
  float answer5 = 0;
  float answer6 = 0;
  float answer7 = 0;
  float epoch_0[200] = { 1.0, 0.5, 0.1, 0.2, 1 ,0.1, 0.2};
 // уз
    static float sleep_count_average_1epoch[200];
    


  for (int t2 = 0; t2 < 200; t2++){

    temp += sleep_count_average_1epoch[t2];
  }
  
  answer3 = temp / 200;
  temp = 0;
  for (int t2 = 0; t2 < 200; t2++)
  {

    temp += sleep_count_average_1epoch[t2];
  }
   answer4 = temp / 200;
   temp = 0;
  for (int t2 = 0; t2 < 200; t2++)
  {

    temp += sleep_count_average_1epoch[t2];
  }
    answer4 = temp / 200;
  temp =0;
  for (int t2 = 0; t2 < 200; t2++)
  {

    temp += sleep_count_average_1epoch[t2];
  } 
  answer5 = temp / 200;
  temp = 0;
  for (int t2 = 0; t2 < 200; t2++)
  {

    temp += sleep_count_average_1epoch[t2];
  }
  

  // float epoch[100] = {answer, answer2};
  temp = 0;
for (int t2 = 0; t2 < 200; t2++)
  {

    temp += sleep_count_average_1epoch[t2];
  } 
     answer7 = temp / 200;
 float sleep_status_after_calculate[100] = {answer, answer2, answer3, answer4, answer5, answer6, answer7};
 for (int i  : sleep_status_after_calculate) {
  std::cout << sleep_status_after_calculate[i] << "\n";
 }

 



   float answer_d = 0;
   int window = 7;
int shift[7] = {0, -1,  -2,  -3,  -4, 1, 2}; // 2D array might be?
   int weight_shift[7] = {230, 76, 58,  54,  106, 74,  67};
   //const int start = 4;//
 for(int t4  = 4;  t4 < 197; t4++) {

  answer_d = 0;
   for(int t5 =  0; t5 <  7; t5++ )  {
      answer_d +=  weight_shift[t5] * epoch_0[t4 +  shift[t5]];
    
 
  }

      std::cout  <<  answer_d << "\n";
 }
}
 


