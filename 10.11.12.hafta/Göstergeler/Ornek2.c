#include<stdio.h>
#include<stdlib.h>

int main(){
    int b[] = {10, 20, 30, 40};
    int *pb;
    pb = b;

    printf("Yontem 1 : Dizi indisleri\n");
    for (int i = 0; i < 4; i++)
    {
        printf("b[%d] : %d\n",i,b[i]);
    }

    printf("Yontem 2 : Isaretci OFFSET\n");
    for (int i = 0; i < 4; i++)
    {
        printf("*(pb + %d) : %d\n",i,*(pb + i));
    }

    printf("Yontem 3 : dizi/Isaretci OFFSET\n");
    for (int i = 0; i < 4; i++)
    {
        printf("*(b + %d) : %d\n",i,*(b + i));
    }
    
}