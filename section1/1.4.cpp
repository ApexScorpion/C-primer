//1.4 Flow of Control


// A while statement executes the code as long as the statement is true
#include <iostream> 
#include <stdlib.h>  
#include <Windows.h>   //for using the function sleep on windows

int main(){
    int sum = 0, val =1; 
    while (val <= 10){
        sum += val; 
        std::cout << "Hello World" << std::endl;//print hello world
        ++val;
        Sleep(1000);//wait
    }
    
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
std::system("pause");//dont close command line
return 0;
}