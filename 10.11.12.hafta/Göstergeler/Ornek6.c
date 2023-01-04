#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

int main() {
    float dizi[SIZE] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
    float *nptr;

    for (int i = 0; i < SIZE; i++)
        printf("%.1f ",dizi[i]);

    printf("\n");
    nptr = dizi;
    nptr = &dizi[0];

    for (int i = 0; i < SIZE; i++)
        printf("%.1f ",*(nptr + i));
    printf("\n");
    

    return 0;
}