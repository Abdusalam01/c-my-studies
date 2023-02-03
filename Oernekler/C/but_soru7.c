#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int izogrammi(char kelime[], int a, int b){
    if(a == strlen(kelime))
        return 1; //son harfi de geçtiysek bu kelime izogramdır
    else if(b < a){
        if(kelime[a] == kelime[b])
            return 0; //aynı iki harf bulursak bu kelime izogram değildir. 
        else return izogrammi(kelime, a, b+1);
    }
    else //b==a ise a’yı artırıp b=0’dan tekrar başlayalım
        return izogrammi(kelime, a+1, 0);
}



int main(){
    char kelime[] = "algoritma";

    if( izogrammi(kelime, 1, 0) )
        printf("%s kelimesi izogramdir.", kelime);
    else
        printf("%s kelimesi izogram degildir.", kelime);

    return 0;
}
