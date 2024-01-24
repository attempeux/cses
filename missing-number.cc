/* File created by attempeux Jan 23 204.
 * Missing number solution. */
#include <iostream>

int main (void)
{
    std::uint64_t a, b, c = 0, d;
    std::cin >> a;
    d = a;

    while (--a) {
        std::cin >> b;
        c += b;
    }

    std::cout << ((d * (d + 1)) / 2) - c << '\n';
    return 0;
}
