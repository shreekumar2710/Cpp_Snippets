#include <iostream>
#include <cmath>

int main()
{
    double adj, opp, c;
    std::cout << "Length of adjacent side:";
    std::cin >> adj;

    std::cout << "Length of opposite side:";
    std::cin >> opp;

    c = sqrt((pow(adj, 2) + pow(opp, 2)));

    std::cout << "Length of Hypotenuse side:";
    std::cout << c;
    return 0;
}