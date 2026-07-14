#include <iostream>
#include "read_valid_int.h"
#include "get_range.h"
#include "print_attempts_result.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "Welcome to Guessing game!\n\n";

    cout << "Choice the game difficulty in menu from 1 to 4\n\n";

    cout << "1. Easy: 1-50" << endl;
    cout << "2. Average: 1-200" << endl;
    cout << "3. Hard: 1-500" << endl;
    cout << "4. Custom: your range\n\n";

    int game_difficulty{};
    int attempts{};

    cout << "Choice the game difficulty: ";

    int random_num = get_range(game_difficulty);

    int guessing_number{};

    while (true)
    {
        cout << "Guess the number: ";
        guessing_number = read_valid_int(guessing_number);

        if (guessing_number == random_num)
        {
            cout << "You win!" << endl;
            cout << "You guessed it in " << attempts << " tries. " << print_attempts_result(attempts) << endl;
            break;
        }
        else if (guessing_number <= random_num)
        {
            cout << "Too small!" << endl;
            attempts += 1;
            continue;
        }
        else if (guessing_number >= random_num)
        {
            cout << "Too big!" << endl;
            attempts += 1;
            continue;
        }
    }
}