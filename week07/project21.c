#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int get_integer();
int factorial(int a);
int combination(int n, int r);


int main(int argc, char *argv[]) {
   int n=get_integer();
   int r=get_integer();
   
   printf("The result of C(%i, %i) is %i\n",n, r, combination(n, r));
   
   return 0;
}

int get_integer()
{   int num;
   printf("Enter the value: ");
   scanf("%i", &num);
   return (num);
}

int factorial(int a)
{
   int res=1;
   for(int i=1; i<=a; i++)
   {
      res *=i;
   }
   return res;
}

int combination(int n, int r)
{
   return (factorial(n)/(factorial(n-r)*factorial(r)));
}