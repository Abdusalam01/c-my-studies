#include <stdio.h>
#include <stdlib.h>

int main() {
    int n[5] = {22, 11, 13, 16,23};

    printf("%s%13s\n", "Eleman", "Deger");
    for (int i = 0; i < 5; i++)
    {
        printf("%6u%13d\t", i, n[i]);
        for (int j = 0; j < n[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    
    return 0;
}