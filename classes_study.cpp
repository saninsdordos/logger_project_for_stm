#include <string>
#include <iostream>
#include <thread>
class classes_test
{
    
    
public:
std::string name_book;
private:
std::string name_book_author;


 



};

void print_name_book() {
    classes_test s;
    s.name_book = "misga";
    using std::cout;
cout << s.name_book;
}
int main() {
std::thread s(&print_name_book);
s.join();
}