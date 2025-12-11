#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int guess;
    int tries = 0;
    srand(time(NULL));
    int num = (rand() % 10) + 1;

    cout << "Enter Your Guess From Range 1 to 10:";
    cin >> guess;

    while (guess != num)
    {
        cout << "Guess Again:";
        cin >> guess;
        if (guess < num)
        {
            cout << "The Guess is Low." << "\n";
        }
        else if (guess > num)
        {
            cout << "The Guess is High." << "\n";
        }
        else
        {
            break;
        }
        tries += 1;
    }

    cout << "Guessed correctly." << "\n";
    cout << "Total Tries: " << tries;
}