#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char *argv[]) {
	 int i;
   
   for (i=0; i<10; i++)
   {
      printf("*");
   }
   for (i=0; i<10; i++)
   {
      printf("*");
   }
   for (i=0; i<10; i++)
   {
      printf("*");
   }
	return 0;
}*/ 

void print_star()
{
   int i;
   for(i=0; i<10; i++)
   {
      printf("*");
   }
}

int main(int argc, char *argv[]) {
   print_star();
   print_star();
   print_star();
   
   return 0;
}