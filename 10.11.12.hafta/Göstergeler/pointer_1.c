#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x=8;
    int *ptr1=&x;
    int **ptr2=&ptr1;
    int ***ptr3=&ptr2;

    printf("%p: %d\n",&x,x);
    printf("%p: %p\n",&ptr1, ptr1);
    printf("%p: %p\n",&ptr2, ptr2);
    printf("%p: %p\n",&ptr3, ptr3);
    printf("\n\n");
     
    printf("ptr1 uzerinden x: %d\n",*ptr1);
    printf("ptr2 uzerinden x: %d\n",**ptr2);
    printf("ptr3 uzerinden x: %d\n",***ptr3);
    printf("\n\n");

    int dizi[5]={5,10,15,20,25};
    int *p;
    p=dizi;

    printf("*p nin degeri : %d\n",*p);
    printf("*(p+1) nin degeri : %d\n",*(p+1));
    printf("*(p+2) nin degeri : %d\n",*(p+2));
    printf("*(p+3) nin degeri : %d\n",*(p+3));
    printf("*(p+4) nin degeri : %d\n",*(p+4));
    
    return 0;
}