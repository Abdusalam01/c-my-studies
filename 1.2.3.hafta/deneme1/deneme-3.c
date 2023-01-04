#include <stdio.h>
#include <stdlib.h>
/*C programlama dilinde 5 tane temel veri tipi bulunmaktadır.
1. char: karakter veriler
2. int: tamsayı veriler
3. float: tek duyarlıklı kayan noktalı sayılar
4. double: Çift duyarlıklı kayan noktalı sayılar
5. void: Değer içermeyen verilerdir.
*/

int main(void)
{
int a=1 , b=10 , c=100;             // tamsayı tutan değişken
float d=1.0 , e=10.0 , f=100.0;    // ondaklı sayı tutan değişken = double
char *str = "algoritma ve programlama" ;  // karekter dizileri(verileri)
 
printf("%d\n",a);             // %d tam sayı değişkenine karşılık geliyor,
//printf("%10d\n",b);        // %10d 10 boşluk bırakır. 
//printf("%.10d\n",c);      // %. önüne sıfır koymak içindir.

printf("\n\n");

printf("%f\n",d);        // %f ondalık sayı için  
//printf("%.3f\n",e);
//printf("%7.3f\n",f);     // %t.n, t degiskene ayrılan toplam alan, n ondalıklı kısıma ayrılan alan(kesinlik)

printf("\n\n");

printf("*%s*\n",str);        // %s karater dizileri için
//printf("*%.9s*\n",str);
//printf("*%.-40s*\n",str);   // %.-t sağden boşluk bırakır
//printf("*%-40.9s*\n",str); 
//printf("*%20.9s*\n",str);

printf("\n\n");

return 0;
}