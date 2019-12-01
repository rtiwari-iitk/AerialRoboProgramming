#include <iostream>

using namespace std;

int main()
{
 int a, i=1;
 scanf ("%d", &a);
 while (i<=10){
     printf ("%dx%d=%d\n", a, i, a*i);
     i++;
 }
 return 0;
}
