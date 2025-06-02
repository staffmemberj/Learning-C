#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	int round = 1;
	char question[100];
	char answers[10][100] = {
		"Yes.", "No.", "Maybe.", "Ask again later.", "Absolutely!", "I don't think so.", "Definitely not.", "Without a doubt!", "It's possible", "Better not tell you now"
	};

	srand(time(NULL));

	printf("Welcome to Brian's Magic 8 Ball\nYou have 8 questions!\n");
	while (round != 9) {
		printf("Question #%d.)Ask your question: ", round);
		fgets(question, sizeof(question), stdin);
		int choice = rand() % 10;
		printf("Magic 8 Ball says: %s\n", answers[choice]);
		round++;
	}
	return 0;
}
