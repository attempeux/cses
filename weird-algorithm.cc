/* File created by attempeux Jan 23 204.
 * Werid algorithm solution. */
#include <iostream>

int main (void)
{
    std::uint64_t a;
    std::cin >> a;

    while (a != 1) {
        std::cout << a << ' ';
        if (!(a & 1)) a >>= 1;
        else a *= 3, a++;
    }

    std::cout << "1\n";
    return 0;
}
