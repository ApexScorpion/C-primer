/*Exercise 1.4: Our program used the addition operator, +, 
to add two numbers. Writea program that uses the multiplication 
operator, *, to print the product instead.
*/

#include <iostream>
int main(){
    int n1; int n2; 
    std::cout << "enter two numbers that you want to multiply";
    std::cin >> n1 >> n2; 
    int product = n1 * n2; 
    std::cout << product << std::endl;
}

