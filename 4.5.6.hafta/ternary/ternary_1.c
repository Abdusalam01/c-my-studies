#include <stdio.h>
#include <stdlib.h>

    /* ***********   ? Karşılaştırma Operatörü    ***********
    (koşul) ? deyim1 : deyim2;   * kuşul doğru ise deyim1 eğer yanlış ise deyim2 çalışır...
    • Örnek:
    x = ( a > b ) ? a : b;
 • Yukarıdaki ifadede koşul a'nın b'den büyük olmasıdır.
 • Eğer olumluysa x adlı değişkene a değeri atanır,
 • Olumsuzsa x adlı değişkene b değeri atanır.
 • Örneğin if-else bloğu ile gösterimi:
   if (a > b)
    x = a;
    else
    x = b;

    Örnek
    x = ( sayi < 10 ) ? printf("yazi1") : printf("yazi2");
    */
int main()
{
    int a,b;
    
    printf("a digerini yaz:");
    scanf("%d",&a);
    /* if (a>0)
       b=1;
    else if (a==0)
       b=2;
    else 
       b=3;*/
    
    b=(a>0) ? 1 : (a==0) ? 2 : 3; 
    printf("b : %d", b);
    return 0;
}