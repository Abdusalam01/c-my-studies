#include <stdio.h>

int main()
{
    int yildiz = 2, bosluk = 1;
    printf("* * * * * * * * *\n");
    for (int i = 0; i < 8; i++)
    {
        
        for (int j = 0; j < yildiz; j++)
        {
            printf("*");
            for (int n = 0; n < bosluk; n++)
            {
                printf(" ");
                
            }
            bosluk++;
        }
        printf("\n");
    }
    
    return 0;
}