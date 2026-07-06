#include <iostream>
#include <string>
#include <limits>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int read_valid_int(int num)
{
    while (!(cin >> num))
    {
        cout << "\nError! Enter the number: ";
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return num;
}