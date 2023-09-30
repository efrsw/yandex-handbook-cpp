#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::string str;
    std::vector<int> ssymbols = {0, 0, 0, 0};
    std::cin >> str;

    if (str.empty() || str.size() < 8 || str.size() > 14)
    {
        std::cout << "NO" << std::endl;
        return 0;
    }

    for (char c : str)
    {
        if (c < 33 || c > 126)
        {
            std::cout << "NO" << std::endl;
            return 0;
        }

        if (c >= 'A' && c <= 'Z')
        {
            ssymbols[0] += 1;
        }
        else if (c >= 'a' && c <= 'z')
        {
            ssymbols[1] += 1;
        }
        else if (c >= '0' && c <= '9')
        {
            ssymbols[2] += 1;
        }
        else
        {

            ssymbols[3] += 1;
        }
    }

    int zeroes = 0;
    for (size_t i = 0; i != ssymbols.size(); ++i)
        if (ssymbols[i] == 0)
            zeroes++;

    std::cout << (zeroes > 1 ? "NO" : "YES") << std::endl;
}