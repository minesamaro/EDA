#include <stdio.h>

int main()
{
   char letter;

   scanf("%c", letter);
   
   int ascii;
   ascii = (int) letter;
   printf("%d", ascii);

   return 0;

}