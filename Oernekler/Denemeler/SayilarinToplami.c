#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,toplam = 0;
    for (i = 1; i <= 100; i++)
    {       toplam += i;        }
    printf("Sonuc: %d\n",toplam);
    
    return 0;
}