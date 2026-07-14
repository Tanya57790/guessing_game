#include <iostream>
#include "read_valid_int.h"
#include "read_game_difficulty.h"
#include "generate_random_number.h"
#include "generate_custom_range.h"

using std::cin;
using std::cout;
using std::endl;

int get_range(int game_difficulty)
{
    int random_num{};

    int difficulty = read_game_difficulty(game_difficulty);

    if (difficulty == 1)
    {
        cout << "Your choice is 'Easy'.\n";
        random_num = generate_random_number(1, 50);
    }
    else if (difficulty == 2)
    {
        cout << "Your choice is 'Average'.\n";
        random_num = generate_random_number(1, 200);
    }
    else if (difficulty == 3)
    {
        cout << "Your choice is 'Hard'.\n";
        random_num = generate_random_number(1, 500);
    }
    else if (difficulty == 4)
    {
        cout << "Your choice is 'Custom'\n";
        random_num = generate_custom_range();
    }

    return random_num;
}
