#include <stdio.h>
#include <stdlib.h>

int main() {

    int i,j;

    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 25; j++)
        {
            if (j == i)
            {   
                for (int k = 0; k < 25; k++)
                {
                    switch (i)
                    {
                    case 0:
                    case 9:
                        printf("%c",'-');
                        break;
                    }
                }
                switch (i){
                    case 1: case 2: case 3:case 4: case 5: case 6:case 7: case 8:
                printf("|                       |");
                break; 
            }
            }
            else
                printf(" ");
        }

        printf("\n");
    }
    
    return 0;
}