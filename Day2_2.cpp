#include <iostream>
#include <math.h>
int main (){
    int a, b, i=1;
    scanf ("%d %d", &a, &b);
    for (i=1; i<=b; i++){
        printf ("%dx%d=%d\n", a, i, a*i);
    }
    return 0;
}