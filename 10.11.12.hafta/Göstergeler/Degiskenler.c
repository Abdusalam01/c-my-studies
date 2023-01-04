#include<stdio.h>
#include<stdlib.h>

int main() {
    printf("char    :       %lu byte\n",sizeof(char));
    printf("short   :       %lu byte\n",sizeof(short));
    printf("int     :       %lu byte\n",sizeof(int));
    printf("float   :       %lu byte\n",sizeof(float));
    printf("long    :       %lu byte\n",sizeof(long));
    printf("double  :       %lu byte\n",sizeof(double));

    int yas = 24;
    int *pyas;
    pyas  = &yas;
    printf("\n*pyas : %d\n",*pyas);

    *pyas = 34;

    printf("yas   : %d\n",yas);
    printf("*pyas : %d\n",*pyas);

    return 0;
}