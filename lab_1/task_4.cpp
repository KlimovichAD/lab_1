#include<iostream>

int main()
{
    double amount, period, interest_rate;

    std::cout << "Please, enter the amount of money: ";
    std::cin >> amount;

    std::cout << "Please, enter the contribution period(month): ";
    std::cin >> period;

    std::cout << "Please, enter the interest rate(%): ";
    std::cin >> interest_rate;

    std::cout << "Income for the entire term of the deposit: " << (amount / 100) * interest_rate * period << std::endl;

    std::cout << "Deposit amount: " << ((amount / 100) * interest_rate * period) + amount << std::endl;

    return 0;
}

