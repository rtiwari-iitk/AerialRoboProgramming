//
#include <iostream>
#include <math.h>
int is_prime(int n)
{
    int i=2, flag=1;
    for (i=2; i<n; i++){
        if (n%i==0){
            flag=0;
            break;       
        } 
    }
    return flag;
}
int main ()
{
    int a, j=2;
    scanf ("%d", &a);
    for (j=2; j<=a; j++){
        if (is_prime(j)==1){
            printf ("%d is Prime\n", j);
        }
    }
    return 0;
}
