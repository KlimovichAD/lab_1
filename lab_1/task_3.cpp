#include <iostream>
#include <cmath>

int main()
{
    double edge;

    std::cout << "Enter the edge of the cube: ";
    std::cin >> edge;

    std::cout << "Volume of the cube: " << edge * edge * edge << std::endl;

    std::cout << "Lateral surface area: " << edge * edge * 6 << std::endl;

    std::cout << "Inscribed sphere radius: " << edge / 2 << std::endl;
    std::cout << "The radius of the circumscribed sphere: " << edge * sqrt(2) / 2 << std::endl;

    std::cout << "Volume of the inscribed sphere: " << (4.0 / 3) * (edge / 2) * (edge / 2) * (edge / 2) * 3.14 << std::endl;
    std::cout << "Volume of the circumscribed sphere: " << (4.0 / 3) * (edge / 2 * sqrt(2)) * (edge / 2 * sqrt(2)) * (edge / 2 * sqrt(2)) * 3.14 << std::endl;

    return 0;
}

