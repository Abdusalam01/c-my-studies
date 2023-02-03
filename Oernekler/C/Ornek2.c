#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    /*
    char harfler [] = "BURSA";
    char *p = harfler;
    char **pp = &p;
    char ***ppp = &pp;

    printf("%c\n",*(p+3));

    printf("%p\n",p+3);
    for (int i = 0; i < 5; i++)
    {
        printf("%c",*(p+i));
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%c",*(*pp+i));
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%c",*(**ppp+i));
    }
    printf("\n");
    
    
    printf("%c\n",(**ppp) [3]); //1. yol [5p] 
    printf("%c\n",*(**ppp + 3));
    
    printf("%c\n", *(**ppp+3) ); //2. yol [5p],ü
    printf("%c\n",***ppp+3);
    printf("\n\n");

    int val = 1903;
    int *pt = &val;
    int **ppt = &pt;
    
    printf("%d\t\t", val);
    printf("val adresi:                 %p\n", &val);

    printf("%d\t\t", *pt);
    printf("pt uzerinden val adresi:    %p\n", pt);

    printf("%d\t\t", **ppt);
    printf("ppt uzerinden val adresi:   %p\n", *ppt);

    printf("pt'nin adresi: %p\n", &pt);
    printf("%p\n",&(*ppt));
    printf("%p\n",ppt);
    printf("ppt'nin adresi: %p\n",&ppt);*/
    
    /*
    char metin[] = "Istanbul";
    char *p = metin;
    char **pp = &p;
    char ***ppp = &pp;
    
    printf("%p\n", metin);
    printf("%p\n", p);
    printf("%p\n", &(*p));
    printf("%p\n", *pp);
    printf("%p\n", &(**pp));
    printf("%p\n", **ppp);
    printf("%p\n", &(***ppp));
    
    printf("\n\n");
    
    printf("%s\n", metin);
    printf("%s\n", p);
    printf("%s\n", *pp);
    printf("%s\n", **ppp);
    printf("\n\n");

    printf("%c\n", *(p+0));
    printf("%c\n", *(p+1));
    printf("%c\n", (p)[2]);

    printf("%c\n", *(*pp +3));
    printf("%c\n",(*pp)[4]);

    printf("%c\n",*(**ppp + 5));
    printf("%c\n", (**ppp) [6]);

    printf("%c\n", *(**ppp + 7));
    printf("%c\n",(**ppp) [8]);
    */

    char sehir[] = "Kastamonu";
    char *pt = sehir;
    char **ppt = &pt;
    char ***pppt = &ppt;

    printf("%s\n",sehir);
    printf("%s\n",pt);
    printf("%s\n",*ppt);
    printf("%s\n\n",**pppt);   

    printf("%p\n",sehir);
    printf("%p\n",&pt);
    printf("%p\n",&(*ppt));
    printf("%p\n\n",&(**pppt));

    printf("%c\n",*(pt + 0));
    printf("%c\n",*(pt + 1));
    printf("%c\n",(pt)[2]); 

    printf("%c\n",*(*ppt + 3));
    printf("%c\n",*(*ppt + 4));
    printf("%c\n",(*ppt)[5]);

    printf("%c\n",*(**pppt + 6));
    printf("%c\n",*(**pppt + 7));
    printf("%c\n",(**pppt)[8]);




   

    return 0;
}