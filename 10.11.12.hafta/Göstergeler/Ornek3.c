#include<stdio.h>
#include<stdlib.h>

void f1 (int n);
void f2 (int *n);

int main(){
    int x = 55;

    f1(x);
    printf("f1 cagirildiktan sonra x : %d\n",x);
    f2(&x);
    printf("f2 cagirildiktan sonra x : %d\n\n\n",x);


    return 0;
}

void f1(int n){
    n = 66;
    printf("\n\nf1 fonkisyonu icinde x : %d\n",n);
}
void f2(int *n){
    *n = 77;
    printf("f2 fonkisyonu icinde x : %d\n",*n);
}