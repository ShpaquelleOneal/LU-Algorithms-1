#include <iostream>
#include <ctime>
#include "minesweeper.h"

using namespace std;

const int cols = 16;
const int rows = 30;
const int mines = 70;

bool mineField[rows][cols];
bool revealed[rows][cols];

//count how many mines are in adjacent cells row+-1, col+-1
int countAdjacentMines (int row, int col) {
    int m_count = 0;
    for (int i = row - 1; i <= row + 1; i++) {
        for (int j = col - 1; j <= col + 1; j++) {
            if (i >= 0 && i < rows && j >= 0 && j < cols && mineField[i][j]) {
                m_count++;
            }
        }
    }
    return m_count;
}

//function to reveal the cells

void reveal (int row, int col) {

    //if in recursion outside of the field, return
    if (row < 0 || row >= rows || col < 0 || col >= cols || revealed[row][col]) {
        return;
    }

    //reveal current cell
    revealed[row][col] = true;

    //open all nearest cell with 0 bombs in adjacent cells using recursion function if opened cell has 0 adjacent bombs
    if (countAdjacentMines(row, col) == 0) {
        for (int i = row - 1; i <= row + 1; i++) {
            for (int j = col - 1; j <= col + 1; j++) {
                reveal(i, j);
            }
        }
    }
}

//generate mines for the field using random function
void generateMines () {
    srand(time(0));
    int minesPlaced = 0;
    while (minesPlaced < mines) {
        int row = rand() % rows;
        int col = rand() % cols;
        if (!mineField[row][col]) {
            mineField[row][col] = true;
            minesPlaced++;
        }
    }
}

void printField () {

    //print coordinate numbers for columns
    cout << "  ";
    for (int i = 1; i < cols + 1; i++) {
        if (i < 10) cout << "  " << i << " ";
        else cout << "  " << i;
        }
    cout << endl;


    for (int i = 0; i < rows; i++) {

        //print coordinate numbers for rows
        if (i + 1 < 10) cout << " " << i + 1;
        else cout << i + 1;
        cout << "|";

        //print to console whole field
        for (int j = 0; j < cols; j++) {
            if (!revealed[i][j]) {
                cout << " X |";
            } else if (mineField[i][j]) {
                cout << " * |";
            } else {
                if (countAdjacentMines(i, j) == 0) cout << "   |";
                else cout << " " << countAdjacentMines(i, j) << " |";
            }
        }
        cout << endl;
    }
}

//function for interaction with user and game logic
void playGame() {
    bool gameOver = false;
    while (!gameOver) {

        //ask for user input
        int row, col;
        cout << "Enter cell coordinates to reveal (column, row): " << endl;
        cin >> col >> row;
        col--;
        row--;

        //check for input validity first, it should be within the field
        if (row < 0 || row > rows || col < 0 || col >= cols) {
            cout << "Invalid input, please try again." << endl;
            continue;

        } else if (mineField[row][col]) { //end game if mine cell was revealed
            //reveal all fields to see where all the mines were
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    if (!revealed[i][j]) revealed[i][j] = true;
                }
            }
            printField();
            cout << "You hit a mine. Game over..." << endl;
            gameOver = true;
            break;
        }

        reveal(row, col); //open cell

        printField(); //output the field
    }
}
