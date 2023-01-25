#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

const int cols = 16;
const int rows = 30;
const int mines = 99;

bool mineField[rows][cols];
bool revealed[rows][cols];

int countAdjacentMines(int row, int col) {
    int m_count = 0;
    for (int i = row - 1; i <= row + 1; i++) {
        for (int j = col - 1; j <= col + 1; j++) {
            if (i >= 0 && i <= rows && j >= 0 && j < cols && mineField[i][j]) {
                m_count++;
            }
        }
    }
    if (m_count == 0) {
        count_2
    }
    return m_count;
}

void generateMines () {
    srand(time(0));
    //generate mines for the field
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

void printField() {

    //print coordinate numbers for columns
    cout << "  ";
    for (int i = 1; i < cols + 1; i++) {
        if ( i < 10) cout << "  " << i << " ";
        else cout << "  " << i;
        }
    cout << endl;


    for (int i = 0; i < rows; i++) {
        //print coordinate numbers for rows
        if (i + 1 < 10) cout << " " << i + 1;
        else cout << i + 1;
        cout << "|";

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
                    //if (!revealed[i][j]) revealed[i][j] = true;
                }
            }

            printField();
            cout << "Game over..." << endl;
            gameOver = true;
            break;
        }

        revealed[row][col] = true;
        printField();
    }
}

int main() {

    generateMines();
    printField();
    playGame();

}
