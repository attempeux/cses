/* File created by attempeux Jan 23 204.
 * Repetitions solution. */
#include <iostream>
#define max(a, b)       ((a) > (b) ? (a) : (b))

int main (void)
{
    std::string s;
    std::cin >> s;

    const std::size_t a = s.size();
    std::uint64_t c = 1, L = 1;

    for (std::size_t i = 1; i < a; i++) {
        while (s[i] == s[i - 1]) {
            c++;
            i++;
        }

        L = max(L, c); c = 0;
        c = 1;
    }

    std::cout << L << '\n';
    return 0;
}
