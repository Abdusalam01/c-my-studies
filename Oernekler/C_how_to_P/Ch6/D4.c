#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int sayi[20];

    srand(time(0));
    
    for (int i = 0; i < 20; i++)
    {
        sayi[i] = rand() % 99 + 1;
    }

    for (int i = 0; i < 20; i++)
    {
        printf("%d ",sayi[i]);
    }
    
    
    return 0;
}