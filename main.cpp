#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;




int main()
{
        SecretDoor game;

        //how may times user wants to play
        int numPlays;

        //current time
        int currentTimes = 0;

        //number of wins
        int numWins = 0;

        cout << "How many times you want to play game: ";
        cin >> numPlays;

        //loop and play game
        for(int index=0; index<numPlays; index++)
        {
                
                game.newGame();

                
                game.guessDoorC();

                
                game.guessDoorC();

            }    //check win
                if (game.isWinner() == true)
                {
                        numWins++;

                }

        //display how many times user won
        cout << "The number of times you won: " << numWins << endl;



        return 0;
}
