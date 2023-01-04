/*
    >>>> Ad / Soyad: Abudureyimu Abudusalamu
    >>>> OGrenci No: 21360859109
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[9]={1,2,3,4,4,5,2,1,3};
    int a;
    printf("\n");

    // buradaki dongu dizinin icindeki uzgun elemanlari bularak ekrana yazar.
    for (int i = 0; i < 9; i++)
        if (arr[i]>a)
        {
            a=arr[i];
            printf("%d,",a);
        }
        
    
    return 0;
}