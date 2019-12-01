//checking prime numbers
#include <iostream>
#include <math.h>
int main (){
   int a=2, i=2, j, remainder, b=0;
   scanf ("%d", &j);
   for (a=2; a<=j; a++){
      for (i=2; i<a; i++){
           remainder= a%i;
           if (remainder==0){
               b=b+1;
           }
        }    
        if (b==0){
        printf ("%d is prime\n", a);
        }
        b=0;
   }
    return 0;
}