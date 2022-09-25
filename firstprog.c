#include <stdio.h>
// 1. get a number -> set a condition of doing an operation when number is not 0 -> get a reminder

int main ( void ) {
   int num = 12;
   int two = 2;
   int arrayOfReminders[10] = {};
   int i = 0;

   while(num > 0){
      num = num%two;
      printf("%d ", num);
      arrayOfReminders[i] = num;
      i++;
   }
   
   // int n = (int)sizeof(arrayOfReminders); 
   // for(int i = 0; i < n; i++){
   //    printf("%d", arrayOfReminders[i]);
   // }
   
    return 0;
}