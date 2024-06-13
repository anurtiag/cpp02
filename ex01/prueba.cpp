#include <iostream>
#include <ostream>
#include <limits>

int main(void)
{
    int max = std::numeric_limits<int>::max();
    int min = std::numeric_limits<int>::min();
    int number = 16777215;
    max = -1;
    max = max << 8;
    max = max >> 8;
    std::cout << max << std::endl;
    return (0);
}