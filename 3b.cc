#include <iostream>
#include <cstdint>

int main()
{
    int32_t a, b, c = 0;
    std::cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a)
    {
        if (a * a == b * b + c * c || b * b == c * c + a * a || c * c == a * a + b * b)
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
    }
    else
    {
        std::cout << "UNDEFINED" << std::endl;
    }
}
