#include <iostream>
#include <cstdlib>
#include <ctime>

// Function to generate a random number between 1 and 6
int rollDice() {
    return (rand() % 6) + 1;
}

// Function to check if the player has won
bool hasPlayerWon(int position) {
    return position == 100;
}

// Function to play the game
void playGame() {
    int player1 = 0; // Player 1 initial position
    int player2 = 0; // Player 2 initial position
    int currentPlayer = 1; // Current player (1 or 2)
    int diceRoll = 0; // Stores the dice roll value

    srand(time(0)); // Seed the random number generator

    while (true) {
        std::cout << "Player " << currentPlayer << ", press enter to roll the dice.";
        std::cin.get();

        diceRoll = rollDice(); // Roll the dice

        std::cout << "Player " << currentPlayer << " rolled a " << diceRoll << "." << std::endl;

        // Update the position of the current player
        if (currentPlayer == 1) {
            player1 += diceRoll;
            if (player1 > 100) {
                player1 -= diceRoll;
            } else if (player1 == 100) {
                std::cout << "Player 1 wins!" << std::endl;
                break;
            }
        } else {
            player2 += diceRoll;
            if (player2 > 100) {
                player2 -= diceRoll;
            } else if (player2 == 100) {
                std::cout << "Player 2 wins!" << std::endl;
                break;
            }
        }

        // Check for snakes and ladders
        switch (currentPlayer) {
            case 1:
                // Check for snakes
                if (player1 == 16) {
                    player1 = 6;
                    std::cout << "Oops! Player 1 got bitten by a snake. Now at position 6." << std::endl;
                } else if (player1 == 47) {
                    player1 = 26;
                    std::cout << "Oops! Player 1 got bitten by a snake. Now at position 26." << std::endl;
                } else if (player1 == 49) {
                    player1 = 11;
                    std::cout << "Oops! Player 1 got bitten by a snake. Now at position 11." << std::endl;
                } else if (player1 == 56) {
                    player1 = 53;
                    std::cout << "Oops! Player 1 got bitten by a snake. Now at position 53." << std::endl;
                } else if (player1 == 62) {
                    player1 = 19;
                    std::cout << "Oops! Player 1 got bitten by a snake. Now at position 19." << std::endl;
                } else if (player1 == 64) {
                    player1 = 60;
                    std::cout << "Oops! Player 1 got bitten by a snake. Now at position 60." << std::endl;
                } else if (player1 == 87) {
                    player1 = 24;
                    std::cout << "Oops! Player 1 got bitten by a snake. Now at position 24." << std::endl;
                } else if (player1 == 93) {
                    player1 = 73;
                    std::cout << "Oops! Player 1 got bitten by a snake. Now at position 73." << std::endl;
                }
                break;
            case 2:
                // Check for ladders
                if (player2 == 3) {
                    player2 = 22;
                    std::cout << "Great! Player 2 found a ladder. Now at position 22." << std::endl;
                } else if (player2 == 5) {
                    player2 = 8;
                    std::cout << "Great! Player 2 found a ladder. Now at position 8." << std::endl;
                } else if (player2 == 15) {
                    player2 = 26;
                    std::cout << "Great! Player 2 found a ladder. Now at position 26." << std::endl;
                } else if (player2 == 18) {
                    player2 = 39;
                    std::cout << "Great! Player 2 found a ladder. Now at position 39." << std::endl;
                } else if (player2 == 27) {
                    player2 = 33;
                    std::cout << "Great! Player 2 found a ladder. Now at position 33." << std::endl;
                } else if (player2 == 35) {
                    player2 = 49;
                    std::cout << "Great! Player 2 found a ladder. Now at position 49." << std::endl;
                } else if (player2 == 60) {
                    player2 = 64;
                    std::cout << "Great! Player 2 found a ladder. Now at position 64." << std::endl;
                } else if (player2 == 71) {
                    player2 = 80;
                    std::cout << "Great! Player 2 found a ladder. Now at position 80." << std::endl;
                } else if (player2 == 88) {
                    player2 = 92;
                    std::cout << "Great! Player 2 found a ladder. Now at position 92." << std::endl;
                } else if (player2 == 99) {
                    player2 = 100;
                    std::cout << "Great! Player 2 found a ladder. Now at position 100." << std::endl;
                }
                break;
        }

        // Print the current positions of the players
        std::cout << "Player 1 is at position " << player1 << std::endl;
        std::cout << "Player 2 is at position " << player2 << std::endl;

        // Switch to the next player
        currentPlayer = (currentPlayer == 1) ? 2 : 1;
    }
}

int main() {
    std::cout << "Welcome to Snake and Ladder Game!" << std::endl;
    std::cout << "---------------------------------" << std::endl;

    playGame();

    return 0;
}



OUTPUT:-
Welcome to Snake and Ladder Game!
---------------------------------
Player 1, press enter to roll the dice.
Player 1 rolled a 3.
Player 1 is at position 3
Player 2 is at position 0
Player 2, press enter to roll the dice.
Player 2 rolled a 4.
Player 1 is at position 3
Player 2 is at position 4
Player 1, press enter to roll the dice.
Player 1 rolled a 6.
Player 1 is at position 9
Player 2 is at position 4
Player 2, press enter to roll the dice.
Player 2 rolled a 1.
Great! Player 2 found a ladder. Now at position 8.
Player 1 is at position 9
Player 2 is at position 8
Player 1, press enter to roll the dice.
