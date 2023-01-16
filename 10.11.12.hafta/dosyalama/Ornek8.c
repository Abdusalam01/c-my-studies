#include <stdio.h>
#include <stdlib.h>
// REKÜRSIF ( ÖZYINELİ ) fonksiyonlar
// 1 den N e kadar olan sayrlarn stralanmas?
// 1 den N e kadar olan sayrlarn toplanmas // faktöriyel hesaplama
// fibonacci serisi yazdrma

int yazdir(int n) {
    
    if (n == 0)
        return 0;
    yazdir(n - 1);
    printf("%d + ",n);
    
    return 0;
}
int topla(int n) {
    if (n == 0)
        return 0;

    return n + topla(n-1);
}
int faktoryel(int n){
    if(n == 1)
        return n;
    return n * faktoryel(n - 1);
    
}
int fibonacci(int n){
    if(n == 0 || n == 1)
        return n;

    return fibonacci(n-1) + fibonacci(n-2); 
}

int main(){
    int sayi;
    printf("Sayi girin: ");     scanf("%d",&sayi);
    yazdir(sayi);
    
    printf("0 = %d\n",topla(sayi));
    printf("\n");

    int sonuc = faktoryel(sayi);

    printf("%d ! = %d\n\n",sayi,sonuc);

    int fibo = fibonacci(sayi);
    printf("%d'nin Fibonaccisi = %d\n",sayi,fibo);


    printf("\n");
    for (int i = 1; i <= sayi; i++)
    {
        printf("%d ! = %d\n",i,faktoryel(i));
    }
    printf("\n");
    for (int i = 1; i <= sayi; i++)
    {
        printf("%d   => %d\n",i,fibonacci(i));
    }
    
    
    
    return 0;
}