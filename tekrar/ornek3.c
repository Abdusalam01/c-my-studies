#include<stdio.h>
#include<stdlib.h>


int main()
{
    int dizi[6];
    for (int i = 1; i < 6; i++)
    {
        printf("[%d]. sayi: ",i);
        scanf("%d",&dizi[i]);
    }
    for (int i = 5; i >0; i--)
    {
        printf("  %d",dizi[i]);
    }
    
    
    
    
    return 0;
}