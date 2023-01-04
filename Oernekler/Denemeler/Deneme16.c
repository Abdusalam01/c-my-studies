#include <stdio.h>
#include <stdlib.h>

int main() {

    int a[3][3] = {5,1,4, 8,3,0, 6,2,1,};
    int h[3][3] = {2,2,5, 0,2,1, 3,2,0};
    int t[3][3];
    int i, j;

    printf("A matrisi: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%4d",a[i][j]);          printf("\n");   }
    
    printf("H matrisi: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%4d",h[i][j]);          printf("\n");   }

    printf("A * H = T matrisi: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {   t[i][j] = ((a[i][0]*h[0][j]) + (a[i][1]*h[1][j]) + (a[i][2]*h[2][j]));
            printf("%4d",t[i][j]);}   printf("\n");   }

    return 0;
}