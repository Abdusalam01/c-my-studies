#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int i = 1;
    printf("\nN^1     N^2     N^3     N^4\n");
    do
    {
        for (int j = 1; j <= 4; j++)
        {
            printf("%.f\t",pow(i,j));
        }
        printf("\n");
        i++;
    } while (i < 11);
    return 0;
}