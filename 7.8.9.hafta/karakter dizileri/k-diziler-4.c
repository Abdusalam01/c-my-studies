#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char cumle[100];
    int i;
    // **** Girilen Cümleyi Tersten Yazdırma ***
    printf("Lutfen cumle giriniz: ");
    gets(cumle);
    for ( i =strlen(cumle); i>=0 ; i--)
        printf("%c",cumle[i]);
    
    return 0;
}