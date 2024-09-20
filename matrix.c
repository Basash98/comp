#include <stdio.h>
int main() {
   int num, i;
   printf("Enter a number: ");
   scanf("%d", &num);
   i = 1;
   multiplication:
   printf("%d x %d = %d\n", num, i, num*i);
   i++;
   if (i <= 10) {
      goto multiplication;
   }

   return 0;
}


