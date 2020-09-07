#include <iostream>
#include <numeric>

int lcm(int const a, int const b)
{
    int h = std::gcd(a, b);
    return h ? (a * (b / h)) : 0;
}

template<class InputIt>
int lcmr(InputIt first, InputIt last)
{
    return std::accumulate(first, last, 1, std::lcm);
}

auto main() -> int
{
    std::cout << "lcm(100, 73) = " << lcm(100, 73) << std::endl;
    return 0;
}
