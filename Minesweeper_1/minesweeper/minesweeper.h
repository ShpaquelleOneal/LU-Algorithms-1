#ifndef MINESWEEPER_H
#define MINESWEEPER_H

void chooseDifficulty ();
int countAdjacentMines (int row, int col);
void reveal (int row, int col);
void generateMines ();
void printField ();
void playGame();

#endif /* MINESWEEPER_H */
