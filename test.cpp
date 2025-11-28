#include <string>
#include <iostream>
#include <algorithm>
int main()
{
  using std::cout;
  int size_num = 0;
  int count = 0;

  u_int64_t num = 48654;
  u_int64_t num_copy = num;

  while (num != 0)
  {

    num /= 10;
    count++;
  }
  u_int16_t temp_buffer[count];
  std::cout << count << "how much" << "\n";
  for (auto d = count; d > 0; d--)
  {
    int ans = num_copy % 10;
    num_copy /= 10;

    temp_buffer[d] = ans;
    ans = 0;
    cout << temp_buffer[d] << "\n"
         << "old version";
  }
  u_int16_t highest = 0;
//highest
  for (int i = 0; i < count; i++)
  {

    for (int s = i + 1; s < count; s++)
    {
      // A ----

      if (temp_buffer[s] > temp_buffer[i]) // B

      {

        std::swap(temp_buffer[s], temp_buffer[i]); // A ---> B   B---->A
      }
    }
    cout << temp_buffer[i] << "\n";
  }
int max = 12;
  // std::cout <<temp[s] << "\n";
  int a = 3;
  int b = 5;

  std::swap(b, a);
  std::cout << b << "A" << "B" << a;
  // }
  int number_low[10] = {2, 4, 5, 6, 8, 9, 5, 3, 0, 1};
// lowest sort 
  for (auto i = 0; i < 10; i++)
  {

    for (int j = i+1; j < 10; j++)
    {

      if (number_low[j] < number_low[i])
      {
        std::swap(number_low[j], number_low[i]);
      }
    }

    cout << number_low[i] << "lowest sort array" << "\n";
  } // repeat sort

  int num_test = 1;
  int repeat_numbers[12] = {4, 2, 4, 5, 2, 3, 5, 7, 3, 8, 8, 1};
  for(int s = 0; s < max; s++ ) {
    
    for(int d = s + 1; d < max; d++) {
           if(repeat_numbers[d] == repeat_numbers[s]) {
              for(int t = d; t < max;  t++) 
              { 
             
               repeat_numbers[d] = repeat_numbers[d + t];
                        
                   
             
              } 
           max--; 
        
           }  
    }
    std::cout << repeat_numbers[s];
  }
}