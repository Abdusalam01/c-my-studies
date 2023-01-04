/*
    >>>> Ad / Soyad: Abudureyimu Abudusalamu
    >>>> Ogrenci No: 21360859109
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char arr[12]="Abudusalamu";

    // bu donguyu atanan isimi tersten yazdirmamiz icin kullandim.
    for (int i =strlen(arr); i>=0 ; i--)
        printf("%c",arr[i]);
    
    return 0;
}