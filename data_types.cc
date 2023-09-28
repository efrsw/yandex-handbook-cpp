#include <iostream>
#include <limits>
#include <cstdint>
#include <string>

int main()
{
    std::cout << "min val: " << std::numeric_limits<int>::min() << std::endl
              << "max val: " << std::numeric_limits<int>::max() << std::endl;

    std::cout << sizeof(int);

    std::cout << std::to_string(std::numeric_limits<int8_t>::min()) << std::endl;
    std::cout << std::to_string(std::numeric_limits<int8_t>::max()) << std::endl;
}