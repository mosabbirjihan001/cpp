#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Define the grid size
const int GRID_SIZE = 5;

// Function to initialize the game board
void initializeBoard(char board[GRID_SIZE][GRID_SIZE], int &treasureX, int &treasureY, int &trapX, int &trapY) {
    // Seed for random number generation
    srand(time(0));

    // Randomly place the treasure and trap
    treasureX = rand() % GRID_SIZE;
    treasureY = rand() % GRID_SIZE;
    do {
        trapX = rand() % GRID_SIZE;
        trapY = rand() % GRID_SIZE;
    } while (trapX == treasureX && trapY == treasureY);

    // Initialize the board with empty rooms
    for (int i = 0; i < GRID_SIZE; ++i) {
        for (int j = 0; j < GRID_SIZE; ++j) {
            board[i][j] = '.';
        }
    }

    // Place the treasure and trap on the board
    board[treasureY][treasureX] = 'T';
    board[trapY][trapX] = 'X';
}

// Function to print the game board (for debugging purposes)
void printBoard(char board[GRID_SIZE][GRID_SIZE]) {
    for (int i = 0; i < GRID_SIZE; ++i) {
        for (int j = 0; j < GRID_SIZE; ++j) {
            cout << board[i][j] << ' ';
        }
        cout << endl;
    }
}

int main() {
    char board[GRID_SIZE][GRID_SIZE];
    int treasureX, treasureY, trapX, trapY;
    int playerX = 0, playerY = 0;  // Start position

    initializeBoard(board, treasureX, treasureY, trapX, trapY);

    cout << "Welcome to Treasure Hunt!" << endl;
    cout << "Navigate through the grid to find the treasure (T) and avoid the traps (X)." << endl;
    cout << "You can move north, south, east, or west." << endl;

    string direction;
    while (true) {
        cout << "You are at position (" << playerX << ", " << playerY << ")." << endl;
        cout << "Enter your move (north, south, east, west): ";
        cin >> direction;

        if (direction == "north" && playerY > 0) playerY--;
        else if (direction == "south" && playerY < GRID_SIZE - 1) playerY++;
        else if (direction == "east" && playerX < GRID_SIZE - 1) playerX++;
        else if (direction == "west" && playerX > 0) playerX--;
        else {
            cout << "Invalid move. Try again." << endl;
            continue;
        }

        if (playerX == treasureX && playerY == treasureY) {
            cout << "Congratulations! You found the treasure!" << endl;
            break;
        } else if (playerX == trapX && playerY == trapY) {
            cout << "Oh no! You fell into a trap! Game over." << endl;
            break;
        } else {
            cout << "You are at position (" << playerX << ", " << playerY << "). Keep searching!" << endl;
        }
    }

    return 0;
}
