#include <iostream>

int main() 
{
    double s, n, t;

    s = 0.0;
    std::cin >> n;
    t = 1.0;

    for (int i = 1; i <= n; i++) {
        t = -1.0;
        for (int k = 0; k < i; k++) {
            t *= (-1);
        }

        s += (t / i);
    }

    std::cout << s << std::endl;
}