#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void carp(int y[], int s, int n){
    for (int i = 0; i < n; i++)
        y[i]*=s;
    
}
int main()
{
    int dizi[10];
    int n=10;
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        dizi[i]=(rand()%20)+1;
        printf("%d ",dizi[i]);
    }
    carp(dizi,5,n);
    
    printf("\n\n carpimdan sonraki durum : \n\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",dizi[i]);
    }
    return 0;
}