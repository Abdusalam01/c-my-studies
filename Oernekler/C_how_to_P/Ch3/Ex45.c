#include <stdio.h>
#include <stdlib.h>

int main() {

    int n = 0;
    printf("N sayisini giriniz: ");
    scanf("%d",&n);

    int sonuc = 1;

    for (int i = 0; i < n; i++)
    {
        sonuc = sonuc * (n-i);
    }
    
    printf("Sonuc: %d",sonuc);
    
    
    return 0;
}