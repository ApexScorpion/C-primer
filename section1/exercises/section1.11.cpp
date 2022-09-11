//Exercise 1.11: Write a program that prompts the user for 
//two integers. Print eachnumber in the range specified by those
// two integers

#include <iostream>

int main(){
    int num1, num2;
    int range = 0;
    std::cout<<"enter two integers"<< std::endl;
    std::cin >> num1 >> num2;
    range += num1;
        while(range >= num1 && range <= num2){
          std::cout<<range<<std::endl;
          range++;
        }
    return 0;

}
