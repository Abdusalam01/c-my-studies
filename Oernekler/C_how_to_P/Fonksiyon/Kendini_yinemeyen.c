#include <stdio.h>
#include <stdlib.h>
int faktoryel(int sayi);

int main() {
    int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
    int sonuc = faktoryel(sayi);
    printf("Faktoryeli: %d\n",sonuc);
    
    return 0;
}
int faktoryel(int sayi) {
    if (sayi <= 1)
        return 1;
    else 
        return (sayi * faktoryel(sayi - 1)); // yenileme Kismi
    
}