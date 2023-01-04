#include <stdio.h>
#include <stdlib.h>
int main(){
    int kullanici=0,parola=0,a,b;
    int defkullanici,defparola;
    defkullanici =1234;
    defparola=4321;
    
    while (7<9)
    {
        printf("kullanici adinizi giriniz: "); 
        scanf("%d",&kullanici);
        printf("kullanici parolanizi giriniz: "); 
        scanf("%d",&parola);

        if (defkullanici==kullanici && defparola==parola)
           printf("\n\n **** Hosgeldiniz ****\n\n");
           else if (defkullanici!=kullanici && defparola==parola)
           printf("kullanici adi yanlis\n");
           else if (defkullanici==kullanici && defparola!=parola)
           printf("sifreyi yanlis girdiniz\n");
           else
           printf("tekrar deneyin\n");
        break;     
    }

    return 0;
}