#include "levenshtein.hpp"

int main(int ac, char **av)
{
    if (ac != 3)
        exit(1);
    ft::permutations<std::vector<char>> test;
    std::cout << test.GeneralizedLevenshteinDistance(std::vector<char>(*av[1]), std::vector<char>(*av[2])) << std::endl;
    return 0;
}