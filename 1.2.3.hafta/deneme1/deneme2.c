#include <stdio.h>       // include bir komuttur, <stdio.h> ise bir kütüphane dir.
#include <stdlib.h>      //                      <stdlib.h> ta kütüphanedir.

int main()
// herhangi bir C codunun çalişması için {main} ile başlaması gerekir.
// int(integer) bir tam sayı anlamına gelir.

{ //scope  --  main'in başlangicı

    printf("Hello World!\n"); /* printf terminele yazı yazmamızı sağlayan bir fonkisyonfur,
    --------------------------------     görevi içine yazfığımız metini terminele yazmak. */
    /* kaçış kareterleri 
      \n  \t  \a
    ------------- \n yeni satıra geç  \t araya tab(4) kadar boşluk bırak. \a hiçbir şey yapma düz yaz demek.*/
    
    printf("11 ekim 2021\n");
    printf("c'ye hosgeldin\n");

    


    return 0;
} // main'in bitişi