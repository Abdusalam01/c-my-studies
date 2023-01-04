#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Dizinin eleman sayisini giriniz: ");
    scanf("%d",&n);
    int dizi[n];
    printf("Dizi elemanlarinin giriniz: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&dizi[i]);
    }
    for (int i = n-1 ; i >= 0; i--)
    {
        printf("%d\t",dizi[i]);
    }
    
    
    return 0;
}