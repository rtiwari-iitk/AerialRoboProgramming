//Tower of Hanoi
#include <iostream>
void TH (char start, char spare, char end, int n){
    if (n==1){
        printf ("%c to %c\n", start, end);
    }
    else{
        TH (start, end, spare, n-1);
        printf ("%c to %c\n", start, end);
        TH (spare, start, end, n-1);
    }
}
int main (){
    int n;
    scanf("%d", &n);
    TH('a', 'b', 'c', n) ;
    return 0;
}