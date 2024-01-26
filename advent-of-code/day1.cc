/* File created by attempeux Jan 25 204.
 * Day one of year 2015. */
#include <iostream>
#include <algorithm>

static void part1 (void)
{
    std::string line;
    while (std::cin >> line) ;;
    std::cout << std::count(line.begin(), line.end(), '(') - std::count(line.begin(), line.end(), ')') << '\n';
}

static void part2 (void)
{
    std::string line;
    while (std::cin >> line) ;;

    ssize_t nthfloor = 0;
    char* a = &line[0];
    while (*a && nthfloor != -1) {
        (*a == '(') ? nthfloor++ : nthfloor--;
        a++;
    }

    std::cout << a - &line[0] << '\n';
}
