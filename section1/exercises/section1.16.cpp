#include <iostream>
int main()
{
    int sum = 0;
    for (int val; std::cin >> val; sum += val);
    std::cout << sum << std::endl;

    return 0;
}

//reads the array inputs as different values and will read one after the other