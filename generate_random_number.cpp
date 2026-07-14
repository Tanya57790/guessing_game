#include <iostream>
#include <random>

int generate_random_number(int start, int end)
{
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_int_distribution<int> distrib(start, end);

    int random_num{distrib(gen)};

    return random_num;
}