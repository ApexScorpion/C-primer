//1.4 Flow of Control


// A while statement executes the code as long as the statement is true
#include <iostream> 
#include <stdlib.h>  
#include <Windows.h>   //for using the function sleep on windows
//while (condition)
//statement
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
/*
A while executes by (alternately) testing the condition and executing the associated statement until the condition is false. A condition is an expression that yields a
result that is either true or false. So long as condition is true, statement is executed.
After executing statement, condition is tested again. If condition is again true, then
statement is again executed. The while continues, alternately testing the condition
and executing statement until the condition is false.
In this program, the while statement is

r (the ++ operator). The increment operator adds
1 to its operand. Writing ++val is the same as writing 
val = val + 1.


*/