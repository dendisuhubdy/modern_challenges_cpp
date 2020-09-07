#include <iostream>

unsigned int gcd(unsigned int const a, unsigned int const b)
{
    return b == 0 ? a : gcd(b, a % b);
}

unsigned int gcd_non_recursive(unsigned int a, unsigned int b)
{
    while (b != 0) {
        unsigned int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

auto main() -> int {
    std::cout << "GCD(100, 50) = " << gcd(100, 50) << std::endl;
    return 0;
}
