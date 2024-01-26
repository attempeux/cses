/* File created by attempeux Jan 23 204.
 * Increasing array solution. */
#include <iostream>

int main (void)
{
    std::uint64_t n, z = 0;
    std::cin >> n;

    std::uint64_t arr[n];
    for (auto& p: arr)
        std::cin >> p;

    for (std::uint64_t i = 0; i < n - 1; i++)
        if (arr[i] > arr[i + 1])
            z += arr[i] - arr[i + 1], arr[i + 1] = arr[i];
    std::cout << z << '\n';
    return 0;
}
