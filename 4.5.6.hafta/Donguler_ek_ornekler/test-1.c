#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    int m=1;
    printf("sayi giriniz:");
    scanf ("%d",&n);
    

    while (n != 0)
    {
        //printf("%d\n",n);
        m = m*n;
        n--;

    }
    printf("%d",m);
    return 0;
}