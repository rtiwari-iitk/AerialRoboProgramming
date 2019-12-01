//fibonacci terms
#include <iostream>
#include <math.h>
int fibo_term (int n){
    if (n==0){
        return 1;
    }
    if (n==1){
        return 1;
    }
    else if (n>1){
        return ((fibo_term(n-1))+(fibo_term(n-2)));
    }
}
int main (){
    int n;
    scanf ("%d", &n);
    printf ("%d", fibo_term(n));
    return 0;
}