#include <iostream>
using namespace std;

int main()
{
    int bet, guessingNumber;
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int rolledNumber;
    rolledNumber = rand() % 10;

    cout << "Enter your bet: ";
    cin >> bet;
    cout << endl;
    cout << "Enter your number from 1 - 10: ";
    cin >> guessingNumber;
    cout << endl;
    cout << "The winning number is " << rolledNumber << endl;
    if (guessingNumber == rolledNumber)
    {
        cout << "You won!" << endl;
        cout << "+" << bet * 2 << endl;
    } else 
    {
        cout << "You lost!" << endl;
        cout << "-" << bet << endl;
    }

    cout << "Play again?" << endl;
    cout << "y/n: ";
    char playAgain;
    cin >> playAgain;

    if (playAgain == 'y')
    {
        main();
    }

    return 0;
}