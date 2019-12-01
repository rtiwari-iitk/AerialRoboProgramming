//Collatz Conjecture
#include <iostream>
#include <math.h>
int collatz(int n){
    if (n==1){
        return 0;
    }
    if (n%2==1){
        return ((3*n)+1);
    }
    else {
        return (n/2);
    }
}
int main (){
    int n; 
    scanf("%d", &n);
    while (n!=1){
        n=collatz(n);
        printf ("%d\n", n);
    }
    return 0;
}