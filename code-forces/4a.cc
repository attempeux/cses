/* File created by attempeux Jan 25 204.
 * Watermelon 4a solution. */
#include <iostream>

int main (void)
{
    std::uint32_t k;
    std::cin >> k;

    if ((k & 1) || (k == 2)) {
        std::cout << "NO\n";
        return 0;
    }

    std::cout << "YES\n";
    return 0;
}
