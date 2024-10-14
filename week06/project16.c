#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1,num2;
	char op;
	
	printf("Enter the calculation: ");
	scanf("%i %c %i", &num1, &op, &num2);
	
	if (op=='+')
	{
		printf("= %i",num1+num2);
	}
	else if (op=='-')
	{
		printf("= %i",num1-num2);
	}
	else if (op=='*')
	{
		printf("= %i",num1*num2);
	}
	else if (op=='/')
	{
		if (num2==0)
		{
			printf("Error\n");
		}
		else
		{
			printf("= %i",num1/num2);	
		}
	}
	else
	{
		printf("Error\n");
	}
	
	return 0;
}