#include <stdio.h>
#include <stdlib.h>

int main() {

    int a[2][3] = {5,1,4, 8,3,0};
    int matrix2[2][3] = {6,2,1, 9,0,1};
    int matrix3[2][3];
    int h[3][3] = {2,2,5, 0,2,1, 3,2,0};
    int matrix5[2][3];
    int i, j;

    printf("A matrisi: \n");
    for (i = 0; i < 2; i++)
    {       
        for (j = 0; j < 3; j++)
                printf("%4d",a[i][j]);      printf("\n");   }
        
    printf("B matrisi: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%4d",matrix2[i][j]);    printf("\n");   }

    printf("A + B = C matrisi: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {   matrix3[i][j] = a[i][j] + matrix2[i][j];
            printf("%4d",matrix3[i][j]);    printf("\n");   }

    printf("\n\nA matrisi: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%4d",a[i][j]);          printf("\n");   }
    
    printf("H matrisi: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%4d",h[i][j]);          printf("\n");   }

    printf("A * H = T matrisi: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {   matrix5[i][j] = ((a[i][0]*h[0][j]) + (a[i][1]*h[1][j]) + (a[i][2]*h[2][j]));
            printf("%4d",matrix5[i][j]);}   printf("\n");   }

    return 0;
}