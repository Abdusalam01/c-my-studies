#include <stdio.h> 
#include <stdlib.h>

typedef struct D
{
    int sayi;
    struct D *ptr;

} Dugum;

int main() {
    Dugum *bas, *son;

    int sayac;

    for (int i = 1; i <= 100; i++)
    {
        Dugum *ondeki = (Dugum *) malloc (sizeof(Dugum));
        ondeki->sayi = i;
        ondeki->ptr = NULL;

        if (sayac == 0)
        {
            bas = ondeki;
            sayac = 9;
            son = bas;
        }
        else {
            
            son->ptr = ondeki;
            son = ondeki;
        }
    }

    Dugum *gezgin = bas;

    for (int i = 1; i <= 100; i++)
    {
        printf("%d  ",gezgin->sayi);
        gezgin = gezgin->ptr;
    }
    

    return 0;
}