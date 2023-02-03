#include <stdio.h>
#include <stdlib.h>
//Dongulerde break ve continue deyimlerinin kullanımı ile ilgili ornek
//continue deyimi döngüde sadece o adımın atlanmasını sağlar.
//break deyimi döngünün sonlanması için kullanılır.
//1 ile 10 arasındaki sayıları ekrana yazdırırken 3 sayısını atlayan ve 9'a geldiğinde 9'u yazdırmadan döngüyü sonlandıran program.
int main()
{
    int sayi=10;
    int i;
    for(i=1;i<=sayi;i++)
    {
        if (i==3)
        {
            continue;
        }
        else if(i==9)
        {
            break;
        }
        printf("sayi= %d\n", i);
    }

    return 0;
}
