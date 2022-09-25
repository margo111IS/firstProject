#include <stdio.h>
int  r[10] = {};
/* function to generate and return random numbers */
int * getRandom(int numberInDecimal) {
//    int i;
  
//    for ( i = 0; i < 10; ++i) {
//       r[i] = i;
//    }

   return r;
}

/* main function to call above defined function */
int main () {
   int *p = getRandom(10);
	
   for ( int i = 0; i < 10; i++ ) {
      printf( "%d\n", *(p + i));
   }
   return 0;
}