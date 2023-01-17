#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char ad[30];
    
} ogrenci;

int main() {

    ogrenci o1,o2;
    strcpy(o1.ad,"Burak");
    o2 = o1;
    printf("o1.ad : %s\n",o1.ad);
    printf("o2.ad : %s\n",o2.ad);


    if (strcmp(o1.ad,o2.ad) == 0)
    {
        printf("benziyor\n");
    }
    



    return 0;
}