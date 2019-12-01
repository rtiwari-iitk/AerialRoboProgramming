//Golden Ratio by Fibonacci and recursion
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
    double ratio;
    ratio = (double)fibo_term(n)/fibo_term(n-1);
    printf ("%lf", ratio);
    return 0;
}