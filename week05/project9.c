#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int second;
	printf("Input the second: ");
	scanf("%i",&second);
	printf("The time is %d : %d\n",second/60, second%60);
	return 0;
}