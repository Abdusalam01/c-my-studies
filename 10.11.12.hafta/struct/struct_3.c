#include <stdio.h>
#include <stdlib.h>
typedef struct kapsul
{
    char veri;
    struct  kapsul *ptr;
}dugum;

int main()
{
    dugum A,B,C;
    A.veri='A';
    B.veri='B';
    C.veri='C';

    A.ptr=&B;
    B.ptr=&C;
    C.ptr=NULL;

    printf("A veri : %c, B veri: %c, C veri: %c\n",A.veri,B.veri,C.veri);
    
    printf("A adres: %p, B adres: %p, C adres: %p\n", &A , &B , &C );

    printf("A.ptr: %p, B.ptr: %p, C.ptr: %p\n\n",A.ptr,B.ptr,C.ptr);

    printf("A nin 1 otesindeki veri: %c\n",  (*(A.ptr)).veri  );
    
    printf("A nin 1 otesindeki veri: %c\n",  A.ptr->veri  ); // (->) işaretini kullanarak  usteki karmaşık işlemin aynısını daha kolar bir şekilde yapabiliriz.

    printf("A nin 2 otesindeki veri: %c\n",   (*((*(A.ptr)).ptr)).veri   );
 
    printf("A nin 2 otesindeki veri: %c\n",   A.ptr->ptr->veri   ); // ustteki işlemin aynısını yapmakta.

    return 0;
}