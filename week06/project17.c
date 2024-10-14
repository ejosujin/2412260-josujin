#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer=50;
	int num;
	int attempts=0;
	
	do
	{
		printf("Guess a number: ");
		scanf("%i", &num);
		attempts++;
		if (num>answer)
		{
			printf("High!\n");
		}
		else if (num<answer)
		{
			printf("Low!\n");
		}
		else
		{
			printf("Congratulation!\n");
			printf("Trials : %i", attempts);
			break;
		}
	}
	while (num != answer);
	
	return 0;
}