#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int sayi[10];
    int enbuyuk = 99,indis = 0;
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        sayi[i] = rand() % 900 + 100;
        printf(" %d ",sayi[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (sayi[i] > enbuyuk )
        {
            enbuyuk = sayi[i];
            indis = i;
        }
    }
    printf("\n En buyuk sayi: %d\n",enbuyuk);
    printf(" Indisi: %d\n",indis + 1);


    
    


    return 0;
}