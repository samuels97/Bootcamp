#include <iostream>

int main()
{
    std::cout << "Game over!" << std::endl;
    std::cin.ignore(std::cin.rdbuf()->in_avail()+1);
    return 0;
}
