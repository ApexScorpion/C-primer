//1.2 A First Look at Input/Output

//c++ has standard libraries including iostream - input output

//ostream - cout, cerr, clog
#include <iostream>
int main(){
    std::cout << "Enter two numbers" << std::endl;
    int v1 = 0; int v2 = 0;
    std:: cin >> v1 >> v2;
    std:: cout << "the sum of" << v1 << "and" << v2 <<
     "is" << v1 + v2 <<std::endl;
     return 0;
}