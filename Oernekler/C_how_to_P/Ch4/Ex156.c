#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int f = 0;

    puts("Harfleri giriniz: ");
    puts("Girisi sonlandirmak icin EOF karakterini giriniz:");

    int not;

    while ((not = getchar()) != EOF)
    {
        switch (not)
        {
        case 'a':   case 'A':
            a++;
            break;
        case 'b':   case 'B':
            b++;
            break;
        case 'c':   case 'C':
            c++;
            break;
        case 'd':   case 'D':
            d++;
            break;
        case 'f':   case 'F':
            f++;
            break;
        case '\n':  case ' ':   break;

        default: 
            printf("%s", "Yanlis bir karakter girdiniz"); 
            puts(" Yeni bir harf giriniz.");
            break; 
        }
    }

    printf("\nToplam girilen Harflerin sayisi\n");  sleep(1);
    printf("A: %d\n",a);    sleep(1);
    printf("B: %d\n",b);    sleep(1);
    printf("C: %d\n",c);    sleep(1);
    printf("D: %d\n",d);    sleep(1);
    printf("F: %d\n",f);    sleep(1);

    
}