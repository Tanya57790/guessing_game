#include <iostream>
#include <limits>
#include "generate_random_number.h"

using std::cin;
using std::cout;
using std::endl;

int get_valid_range(int start, int end)
{
    while (start >= end)
    {
        cout << "\nError! Enter the range numbers (example: 1 50): ";
        cin >> start >> end;
    }

    return generate_random_number(start, end);
}