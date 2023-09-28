#include <iostream>

int main() {
    std::string str;
    std::cin >> str;

    int sum = 0;
    for(auto a : str) {
        sum += a - '0';
    }

    std::cout << sum << std::endl;
}