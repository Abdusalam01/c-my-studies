#include <stdio.h>
#include <stdlib.h>

int main() {

    int sayi = 1;
    for (int i = 10; i > 0; i--)
    {
        for (int k = i; k > 0; k--)
        {
            printf("%d\t",sayi++);
        }
        printf("\n");
        
    }
    
    return 0;
}