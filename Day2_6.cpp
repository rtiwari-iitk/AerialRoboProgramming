#include <iostream>
#include <math.h>
int main (){
    int i=0, n, j=0;
    scanf("%d", &n);
    int a[n][n];

    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            scanf ("%d", &a[i][j]);
        }
    }
    printf ("\n\nthe output is:\n");
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            printf ("%d ", a[i][j]*a[i][j]);
        }
        printf ("\n");
    }
    return 0;
}