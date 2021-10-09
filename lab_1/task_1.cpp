#include <iostream>
#include<cmath>

int main()
{
    int number;
    std::cout << "Enter any integer: ";
    std::cin >> number;

    std::cout << "The last digit is: " << abs(number) % 10 << std::endl;

    return 0;
}
