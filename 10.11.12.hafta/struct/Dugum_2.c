#include <stdio.h>
#include <stdlib.h>

//belirsiz sayıda düğüm oluşturup listeleyen kod

struct x{
    int sayi;
    struct x *p;
};

typedef struct x Dugum;

int main()
{
    int n,flag=0;
    Dugum *bas,*son;

    for(;;){
        printf("sayi gir: ");
        int kontrol = scanf("%d",&n);

        if(kontrol !=1 || n<0)
            break;

        Dugum *t=(Dugum *)malloc(sizeof(Dugum));
        t->sayi=n;   // t pointerinin gosterdigi adresteki sayi degiskenine n degerini ata
        t->p=NULL;   // t pointerinin gosterdigi adresteki p pointerine null degerini ata

        if(flag==0){  // ilk girilen n degerini bas degiskeninde gostermek icin
            bas=t;
            flag=4;
            son=bas;
        }
        else{
            son->p=t; //yeni düğümü son düğümün peşine taktık
            son=t; //yeni düğümümüz artık son düğüm
        }
    }

    Dugum *gezgin=bas;

    for(;;){
        if(gezgin==NULL)
            break;
        printf("%d\t",gezgin->sayi);
        gezgin=gezgin->p;
    }

    return 0;
}