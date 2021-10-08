#include <iostream>

int main()
{
    int number;
    std::cout << "Enter any integer: ";
    std::cin >> number;

    std::cout << "The last digit is: " << number % 10 << std::endl;

    return 0;
}
