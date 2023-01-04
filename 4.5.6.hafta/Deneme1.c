#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // *** sleep(kaç saniye bekliyecegini yaz);
#include <time.h>

int bakiye;

int menu() {

    system("cls");
    int secim;
    printf("\n\t\tBankamatik Uygulamasi \n");
    printf("\nKullanilabilir Bakiyeniz : %d TL \n\n",bakiye);
    printf("\t1- Para Cek \n");
    printf("\t2- Para Yatir \n");
    printf("\t3- Fatura Yatir \n");
    printf("\t4- Havale/EFT \n");
    printf("\t5- Cikis \n");

    scanf("%d", &secim);

    return secim;
}

void paraCek() {
    int miktar;
    printf("Miktar : "); scanf("%d",&miktar); 
    printf("Isleminiz gerceklestiriliyor...\n"); sleep(2);

    if(bakiye<miktar) {
        printf("Bakiye yetersiz \n");
    }
    else {
        bakiye -= miktar;
        printf("Para cekme islemi basarili \n"); sleep(2);
        printf("Paranizi almayi unutmayiniz \n"); sleep(2);
    }
    printf("Ana menuye yonlendiriliyorsunuz \n"); sleep(2);
}

void paraYatir() {
    int miktar;

    printf("Yatiracaginiz miktari girin ve parayi giris bolumune yerlestiriniz : "); 
    scanf("%d",&miktar);
    printf("Isleminiz gerceklestiriliyor...\n"); sleep(2);

    bakiye += miktar;
    printf("Para yatirma isleminiz basariyla gerceklestirildi \n"); sleep(2);
    
    printf("Ana menuye yonlendiriliyorsunuz \n"); sleep(2);
}

void faturaOde() {
    int miktar, secim, no;
    printf("1- Elektirik ");
    printf("\n2- Su ");
    printf("\n3- Dogalgaz ");
    printf("\n4- Internet ");
    scanf("%d",&secim);

    if(secim<1 || secim>4) {
        printf("Hatali secim yaptiniz \n");
    }
    else {
        printf("Fatura no:  \n"); scanf("%d",&no);  sleep(2);
        miktar = rand() % 100 + 20;
        printf("A.... T.... Kisisine ait fatura bedeli %d TL \n", miktar);
        printf("1- Odemeyi onayliyorum \n"); scanf("%d",&secim);  sleep(2);

        if(secim !=1 ) {
            printf("Isleminiz iptal edildi... \n");
        }
        else {
            if (bakiye<miktar)
            {
                printf("Yetersiz Bakiye \n"); sleep(2);
            }
            else {
                bakiye -= miktar;
                printf("Fatura odeme isleminiz basariyla gerceklestirildi... \n");  sleep(2);
            }
        }
    }
    printf("Ana menuye yonlendiriliyorsunuz \n");   sleep(2);
}

void havaleEFT() {
    int miktar,iban;
    printf("Havale Yapilacak kisinin IBAN no: ");
    scanf("%d",&iban);
    printf("Havale miktarini giriniz: ");
    scanf("%d",&miktar);

    if(bakiye<miktar) {
        printf("Yetersiz bakiye \n");
    }
    else {
        bakiye -= miktar;
        printf("Isleminiz gerceklestiriliyor...\n"); sleep(2);
        printf("Havale/EFT isleminiz gerceklestirildi \n");   sleep(2);
    }
    printf("Ana menuye yonlendiriliyorsunuz \n");   sleep(2);
}


int main() {

    int sifre ,i=0;
    printf("Sifrenizi giriniz: ");
    scanf("%d",&sifre);
    while(sifre != 3452) {
        printf("Hatali sifre girdiniz, sifre giriniz: ");
        scanf("%d",&sifre);
        if(i==3){
            printf("\nKartiniz kilitlenmistir \n");
            printf("Lutfen musteri hizmetleri ile iletisime geciniz \n");
            return 0;
        }
        i++;
    }
    printf("Giris basarili...\n"); sleep(2);

    srand(time(0));
    bakiye = rand() % 9000 + 100;

    int secim;
    while (1) {
        secim = menu();
        switch(secim) {
            case 1: paraCek(); break;
            case 2: paraYatir(); break;
            case 3: faturaOde(); break;
            case 4: havaleEFT(); break;
            case 5: printf("Kartinizi almayi unutmayiniz...\n"); return 0;
            break; printf("Hatali secim yaptiniz!!! \n"); sleep(2);

        }
    }

    return 0;
}