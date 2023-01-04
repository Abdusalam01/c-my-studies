#include <stdio.h>
#include <stdlib.h>

int main() {
    int matris[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Matris[%d][%d] = ",i,j);
            scanf("%d",&matris[i][j]);
        }
        printf("\n");
    }

    printf("Girilen matris: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",matris[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}