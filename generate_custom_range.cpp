#include <iostream>
#include "read_valid_int.h"
#include "get_valid_range.h"

using std::cin;
using std::cout;

int generate_custom_range()
{
    cout << "Specify a range of numbers\n";

    int start{};
    int end{};

    cout << "start number: ";
    start = read_valid_int(start);

    cout << "end number: ";
    end = read_valid_int(end);

    return get_valid_range(start, end);
}