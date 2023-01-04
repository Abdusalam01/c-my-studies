#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char metin[100];
    int n;

    printf("Metini giriniz: ");    gets(metin);
    
    n = strlen(metin);

    printf(" %c ",metin[0]);
    

    for (int i = 0; i < n; i++)
    {
        if (metin[i] == ' ')
        {
            printf(" %c ",metin[i+1]);
        }
        
    }
    
    return 0;
}