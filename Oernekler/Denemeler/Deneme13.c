#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int sayi[101];

    for (int i = 0; i < 101; i++)
    {
        sayi[i] = rand() % 1000 + 1;
        printf("%d ",sayi[i]);
    }

    int enKucuk, indis;
    printf("\n\n\n");

    enKucuk = 1001;
    indis = -1;
    for (int i = 0; i < 101; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (sayi[i] < sayi[j]){
                int gecici = sayi[i];
                sayi[i] = sayi[j];
                sayi[j] = gecici;
            }
        }
    }
    for (int i = 0; i <= 50; i++)
    {
        printf("%d  ",sayi[i]);
    }
    
    printf("\nDizinin medyani: %d\n",sayi[50]);



    
    return 0;
}