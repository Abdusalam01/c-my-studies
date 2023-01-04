#include <stdio.h>
#include <stdlib.h>
void dizi_yaz(float x[],int n);

int main() {
    float dizi[5] = {5.324,  5.152, 8.513, 9.428, 2.373};
    dizi_yaz(dizi,5);  // Her zaman dizinin yanında boyutunun da bilinmesi gereklidir !!!
    
    return 0;
}

void dizi_yaz(float x[],int n){  // n degeri dizi boyutunu temsil etmektedir
    for (int i = 0; i < n; i++)
    {
        printf("%.2f\n",x[i]);
    }
    
}
