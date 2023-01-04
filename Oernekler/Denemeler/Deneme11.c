#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

    double toplam = 0.0;
    double k = 0, i = 1;

    do
    {
        k = pow((i/2),(2*i));
        toplam += k;
        i++;
    } while (i <= 4);
    printf("toplam: %f",toplam);
    


    
    return 0;
}