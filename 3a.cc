#include <iostream>

int main() {
    int8_t initial_x, initial_y, target_x, target_y;
    std::cin >> initial_x >> initial_y >> target_x >> target_y;

    if(initial_x == target_x) {
        std::cout << "YES" << std::endl;
    } else if(initial_y == target_y) {
        std::cout << "YES" << std::endl;
    } else if((std::abs(target_x - initial_x) == std::abs(target_y - initial_y))) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
}