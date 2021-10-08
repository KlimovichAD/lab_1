#include <iostream>
#include <cmath>

int main()
{
    double fraction,integer, number;

    std::cout << "Please, enter any integer: ";
    std::cin >> number;

    fraction = modf(number,&integer);
    std::cout << "Fractional part: " << fraction << "\n" << "Whole part: " << integer;

    return 0;
}
