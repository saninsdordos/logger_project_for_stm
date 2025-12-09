#include <string>
#include <iostream>
#include <thread>
class classes_test
{
    
    
public:
void plus_number();
std::string name_book;
int d = 0;
private:
std::string name_book_author;


 



};

void print_name_book() {
    classes_test s;

    using std::cout;
cout << s.name_book;

cout << s.d << "\n";
}

int plus_to(int x, int y) {
   int ans =  x + y;
   return ans;
}
void classes_test::plus_number() {
    d++;
    std::cout << d++;
}
int main() {
classes_test t;
std::thread s(&print_name_book);
s.join();
int ans;
  ans = plus_to(2, 4);

std::cout << ans;
}