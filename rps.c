#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int comp, player;
	int pwin = 0, cwin = 0;
	srand(time(NULL));

	while (pwin < 2 && cwin < 2) {
		printf("Rock, Paper, Scissors! [1], [2], [3]!\n Player Wins: %d/3 | Comp Wins: %d/3\n", pwin, cwin);
		scanf("%d", &player);
		comp = (rand()% 3) + 1; // Look into how to pick either rock, paper, or scissors.

		//Set variables for player
		if (player == comp) {
			printf("Tie.\n");
		} else if (player == 2 && comp == 1) {
			pwin++;
			printf("Paper covers rock! Player wins!\n");
		} else if (player == 3 && comp == 2) {
			pwin++;
			printf("Rock crushes scissors! Player wins!\n");
		} else if (player == 1 && comp == 3) {
			pwin++;
			printf("Scissors cuts paper! Player wins!\n");
		} else if (comp == 2 && player == 1) {
			cwin++;
			printf("Paper covers rock! Comp wins!\n");
		} else if (comp == 3 && player == 2) {
			cwin++;
			printf("Rock crushes scissors! Comp wins!\n");
		} else if (comp == 1 && player == 3) {
			cwin++;
			printf("Scissors cuts paper! Comp wins!\n");
		} 

		//Winning Message
		if (pwin==3) {
			printf("Player Wins!");
		} else if (cwin==3) {
			printf("Comp Wins!");
		}
	}
	return 0;
}
