#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int get_integer();
int factorial(int n);
int combination(int num1, int num2);


int main(int argc, char *argv[]) {
	int num1=get_integer();
	int num2=get_integer();
	
	printf("The result of C(%i, %i) is %i\n",num1, num2, combination(num1, num2));
	
	return 0;
}

int get_integer()
{   int num;
	printf("Enter the value: ");
	scanf("%i", &num);
	return (num);
}

int factorial(int n)
{
	int res=1;
	for(int i=1; i<=n; i++)
	{
		res *=i;
	}
	return res;
}

int combination(int num1, int num2)
{
	return (factorial(num1)/(factorial(num1-num2)*factorial(num2)));
}