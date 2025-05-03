#include <iostream>

int main(void)
{
    int g11, g12, g13, g21, g22, g23, g31, g32, g33;

    std::cin >> g11 >> g12 >> g13 >> g21 >> g22 >> g23 >> g31 >> g32 >> g33;

    std::cout << !((g11 + g12 + g21) % 2) << !((g11 + g12 + g13 + g22) % 2) << !((g12 + g13 + g23) % 2) << std::endl;
    std::cout << !((g11 + g21 + g22 + g31) % 2) << !((g22 + g12 + g21 + g23 + g32) % 2) << !((g13 + g22 + g23 + g33) % 2) << std::endl;
    std::cout << !((g31 + g32 + g21) % 2) << !((g31 + g32 + g33 + g22) % 2) << !((g32 + g33 + g23) % 2) << std::endl;

    return 0;
}