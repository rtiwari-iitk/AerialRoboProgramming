//Collatz Conjecture
#include <iostream>
#include <math.h>
int main(){
    int x;
    scanf ("%d", &x);
    while (x!=1){
        if (x%2==0){
            x=x/2;
            printf ("%d\n", x);
        }
        else {
            x=(3*x)+1;
            printf ("%d\n", x);
        }
    }
    return 0;
}