#include <iostream>

int main(){
    int sum = 0;

    for (int val = 1; val <= 10; ++val)
    {
        sum += val; // equivalent to sum = sum + val
        std::cout << "Sum of 1 to 10 inclusive is "
        << sum << std::endl;
        return 0;
    }
    
}
/*
This pattern—using a variable in a condition and incrementing that variable
in the body—happens so often that the language defines a second statement, the
for statement, that abbreviates code that follows this pattern. We can rewrite this
program using a for loop to sum the numbers from 1 through 10 as follows */