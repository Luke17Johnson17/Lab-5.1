/*
Luke Johnson
C++ Fall 2020
Due :11/2/20
Write a program that selects a random number 1-100. The user then has up to 20 attempts to try and guess that number. At the end of the game it will display the total number of wins, losses, and if the user won the game or not.


*/



#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>




using namespace std;
string winningMessages[10] = { "You won!!!","Congratulations, you guessed it correctly", "Correct guess!!!", "Winner!!", "Nice Job!!", "Congrats!", "You are a winner","Thats another win!", "You are pretty good! Thats another win!", "You guessed it!" };
string losingMessages[10] = { "Sorry, you lost it","Sorry, allowed attempts are finished","Sorry, good luck next time", "You lost!", "You didnt guess it.", "Incorrect", "Sorry, you did not guess it.", "All wrong, sorry!", "You suck!", "Sorry, you are out of attempts." };
string playAgainMessages[10] = { "Wanna play again? ","Wanna try again? ","Wanna have another round?", "Another game?", "Want to play again?", "Need another try?", "Do you need more attempts?", "Would you like to try again?", "Need a redo?", "Sorry, the game is over, would you like another attempt?" };
void number_guessing_game() {
    int wins = 0;
    int losses = 0;
    char inp;
    while (1) {
        cout << "Enter your guess 0-100! " << endl;//Outputting the message to begin the game
        int number = rand() % 101; //for number in range 0 to 100
        bool Won = false;
        for (int attemptNo = 1; attemptNo <= 20; attemptNo++) //Number of attempts

            top:

        {
            int guess;
            cout << "Attempt " << attemptNo << ", Your guess: "; //Outputting attempt number and your guess
            cin >> guess;//Asks for an input or a guess
            if (guess == number) {
                Won = true;
                break;
            }
            cout << "Sorry, it is incorrect" << endl;
        }
        int msgNo = rand() % 3;
        if (Won) { cout << winningMessages[msgNo] << endl; wins++; }//Displays one of the 10 winning messages if the game is won
        else { cout << losingMessages[msgNo] << endl; losses++; } //Displays one of the 10 losing messages if the game is lost
        msgNo = rand() % 3;
        cout << playAgainMessages[msgNo] << endl; //Asks the messsage to play again
        cout << "Yes or No?" << endl;
        cin >> inp;
        if (inp = 'N') { break; }
    }
    cout << "Total number of wins: " << wins << endl; //Displays total number of wins
    cout << "Total number of losses: " << losses << endl; //Displays total number of losses
}

int main()
{
    number_guessing_game();

}
