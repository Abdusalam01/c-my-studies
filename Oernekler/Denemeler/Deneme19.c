#include <stdio.h>
#include <stdlib.h>

int main() {

    for (int i = 6; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 3; k++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    


    
    return 0;
}