#include <stdio.h>
#include <stdlib.h>

int main() {
    int sonuc = 0;
    int i = 0;
    while (i <= 1000)
    {
        sonuc += i;
        i++;
    }
    printf("Sonuc: %d\n",sonuc);

    int sonuc2 = 0;
    int j = 0;
    while (j <= 1000)
    {
        sonuc2 += j;
        j += 2;
    }
    printf("Sonuc: %d\n",sonuc2);



    
    return 0;
}