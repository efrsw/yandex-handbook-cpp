#include <iostream>

int main()
{
    int32_t n, k, cd;
    std::cin >> n;
    std::cin >> k;

    for (int j = 2; j <= n; j++) {
        std::cout << (j == 2 ? "  " : "   ");
    }

    cd = n;
    for (int i = 1; i <= k; i++)
    {
        if (cd == 8) cd = 1;

        switch (cd)
        {
        case 1:
            std::cout << (i < 10 ? " " : "") << i;
            break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            std::cout << (i < 10 ? "  " : " ") << i;
            break;
        case 7:
            std::cout << (i < 10 ? "  " : " ") << i << std::endl;
            break;
        }

        cd++;
    }
}