#include <stdio.h>
#include <stdlib.h>

int main() {

    for (int i = 0; i < 10; i++)
    {
        for (int k = 0; k < 10; k++)
        {
            switch (i)
            {
            case 0:
            case 9:
                printf("*");
                break;
            }
        }
        switch (i){
            case 1: case 2: case 3:case 4: case 5: case 6:case 7: case 8:
                printf("*        *");
                break;
            }

        printf("\n");
        
    }
    
    
    return 0;
}