#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

    char metin[50];
    strcpy(metin,"bilgisayar muhendisligi");
    
    printf("%s\n",metin);

    for (int i = 0; i < strlen(metin); i++)
    {
        if (metin[i] == ' ')
        {
            metin[i + 1] = toupper(metin[i+1]);
        }
        else if (i == 0)
        {
            metin[i] = toupper(metin[i]);
        }
        
    }
    printf("%s\n",metin);
    
    
    
    return 0;
}