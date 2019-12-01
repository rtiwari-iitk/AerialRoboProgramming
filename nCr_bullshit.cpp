//ncr bullshit
int nCr (int n, r){
    if (r==0){
        return 1;
    }
    if (r==1){
        return n;
    }
    else {
        return (nCr(n-1), (r-1))+ (nCr(n-1), r));
    }
}
int main (){
    int n, r;
    scanf ("%d %d", &n, &r);
    printf ("%d", nCr(n, r));
    return 0;
}