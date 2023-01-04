#include <stdio.h>
#include <stdlib.h>

int main() {

    for (int i = 0; i < 8; i++)
    {
        for (int k = 0; k < 8; k++)
        {
            switch (i)
            {
            case 0:  case 2:  case 4:  case 6:  
                printf("* ");   break;
                
            case 1:  case 3:  case 5:  case 7:
                printf(" *");
                break;
            }   
        }
        printf("\n"); 
    }

    printf("\n");
    int x = 1;
    while (x <= 8) {
        if ((x % 2) == 0) {
            printf("%s", " ");
        }

        int y = 1;
        while (y <= 8) {
            printf("%s", "* ");
            ++y;
        }

        puts("");
        ++x;
    }

    printf("\n");
    for (int a = 1; a < 9; a++)
    {
        if ((a % 2) == 0)
        {
            printf("%s"," ");
        }

        for (int b = 1; b < 9; b++)
        {
            printf("%s","* ");
        }
        puts("");
    }    
    return 0;
}