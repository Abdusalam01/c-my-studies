#include<stdio.h>
#include<stdlib.h>

double *maxAdr(double a[],int boyut){
    double ebd = a[0];
    double *eba = &a[0];
    for (int i = 0; i < boyut; i++)
    {
        if (a[i] > ebd)
        {
            ebd = a[i];
            eba = &a[i];
        }
    }
    return eba;
}

int main(){
    double x[6] = {1.1, 3.3, 7.1, 5.4, 0.2, -1.5};
    //indis, dizi ve adresi ekrana bas;
    printf("INDIS:\t DEGER:\t ADRES:\t\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d\t %.1f\t %p\n",i,x[i],&x[i]);
    }

    double *p;
    p = maxAdr(x,6);

    printf("En buyuk deger : %.1f\n",*p);
    printf("En buyuk adres : %p\n",p);
    
}