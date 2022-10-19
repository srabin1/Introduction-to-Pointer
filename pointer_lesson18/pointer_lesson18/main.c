//Memory leak: to deallocate memory when we are using dynamic memory in heap
//Lets try it on stack first
#include<stdlib.h>
#include<stdio.h>
#include<time.h> // to use random generation in C

//"simple betting game"
//"Jack Queen King" -computer shuffles these cards
//players has to guess the position of queen.
//if he wins, he takes 3*bet
//if he looses, he looses the bet amount.
//player has $100 initially
int cash = 100;
void play(int bet)
{
	char C[3] = { 'J', 'Q', 'K' };
	printf("shuffling ...");
	srand(time(NULL));// pass time NULL as seeding: seeding random number generator
	int i;
	for (i = 0; i < 5; i++)// we repeat it 5 times
	{
		int x = rand() % 3;// random numbers
		int y = rand() % 3;
		int temp = C[x];
		C[x] = C[y];
		C[y] = temp; // swaps characters at position x and y
	}

	int playersGuess;
	printf("What's the position of queen: 1, 2, or 3?");
	scanf_s("%d", &playersGuess);
	if (C[playersGuess - 1] == 'Q') {
		cash += 3 * bet;
		printf("You win! Result = %c%c%c Total cash= %d\n", C[0], C[1], C[2], cash);
	}
	else {
		cash -= bet;
		printf("You loose! Result = %c%c%c Total cash= %d\n", C[0], C[1], C[2], cash);
	}

}

int main() {
	int bet;
	printf("Welcome to the virtual casino\n");
	printf("total cash = $%d\n", cash);
	while (cash > 0)
	{
		printf("what is your bet? $\n");
		scanf_s(" %d", &bet);
		if (bet == 0 || bet > cash)
			break;
		play(bet);
	}

	return 0;
}





