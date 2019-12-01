//reciprocal sum code
#include <iostream>
#include <math.h>
int main(){
    int i=1;
    double sum;
    for (i=1; i<=100; i++){
        sum = sum+1/(double)i;
    }
    printf ("sum is %lf", sum);
    return 0;
}