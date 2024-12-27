#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

void initialize_number_generator(void);
int new_secret_number(void);
void read_guess(int secret);

int main(void)
{
	char cmd;
	int secret_number;

	printf("Guess the secret number between 1 and %d.\n\n", MAX_NUMBER);
	initialize_number_generator();
	do {
		secret_number = new_secret_number();
		printf("A new number has been chosen.\n");
		read_guess(secret_number);
		printf("Play again>(y/n): ");
		scanf("%c", &cmd);
		printf("\n");
	} while (cmd == 'y' || cmd == 'n');

	return 0;
}

/* 
 *  initialize the random number generator by using the time of day.
 */
void initialize_number_generator(void)
{
	srand((unsigned)time(NULL));
}

/* 
 *  return a randomly chosen number betwenn 1 and MAX_NUMBER.
 */
int new_secret_number(void)
{
	return rand() % MAX_NUMBER + 1;
}

void read_guess(int secret)
{
	int guess, guess_num = 0;

	for (;;) {
		guess_num++;
		printf("Enter guess: ");
		scanf("%d", &guess);
		if (guess == secret) {
			printf("You won in %d guesses!\n\n", guess_num);
			return;
		} else if (guess < secret)
			printf("Too low, try again.\n");
		else
			printf("Too high, try again.\n");
	}
}