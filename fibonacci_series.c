#include <stdio.h>

int main() {
   
   int a = 0, b = 1, next, i;
   
   printf("Fibonacci series:\n");

   for(i = 1; i <= 10; i++){

      printf("%d\n", a);
      next = a + b;
      a = b;
      b = next;
   }

   return 0;
}