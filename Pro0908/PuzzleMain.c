//PuzzleMain.c
#include "Rangking.h"
extern int playFifteenPuzzle();
void main()
{
	loadRanking("ranking.txt");
	int rank = playFifteenPuzzle();
	printRanking();
	storeRanking("ranking.txt");
}