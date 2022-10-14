#include <iostream>

int main()
{
    int sum = 0;
    for (int i = 50; i <= 100; ++i) sum += i;
    std::cout << "the sum is: " << sum << std::endl;

    return 0;


    // 2 

    for (int i = 10; i >= 0; --i)
        std::cout << i << std::endl;
    return 0;

    //3 

    std::cout << "please input two integers:\n";
    int small = 0, big = 0;
    std::cin >> small >> big;

    if (small > big)
    {
        int tmp = small;
        small = big;
        big = tmp;
    }

    for (int i = small; i != big; ++i)
        std::cout << i << std::endl;

}