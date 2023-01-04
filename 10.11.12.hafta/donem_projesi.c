/*               ****    ALGORİTMALAR VE PROGRAMLAMA DERSİ     *****
                           2021-2022 GÜZ DÖNEMİ PROJESİ 
                            

                        AD-Soyad    :   ABUDUREYİMU ABUDUSALAMU
                        OGRENCİ NO  :   21360859109
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("\t\t ____________________________________________ \n");
    printf("\t\t|                                            |\n");
	printf("\t\t|    tas,kagit,makas oyununa hosgeldiniz.    |\n");
	printf("\t\t|    ------------------------------------    |\n");
	printf("\t\t|                                            |\n");
	printf("\t\t|                                            |\n"); 
	printf("\t\t|  Seciminiz:                                |\n"); 
	printf("\t\t|                                            |\n");
	printf("\t\t|  1-tas 2-kagit 3-makas  4-Oyundan cik      |\n"); 
	printf("\t\t|____________________________________________|\n");	
	return;
}
int main()
{
    char Oyuncu,Bilgisayar;
	int i,j,a,win=0,lose=0,esitlik=0,sonuc;
	srand((unsigned) time(NULL));

        printf("Oyun basladi....\n");
        menu();
        printf("\n");

            for(j=0;;j++)      //sonsuz dongunun baslangici.
	        {
                printf("Secimini yap( 1, 2, 3 ,4): ");
                scanf("%d",&i);
                
                if (i==1 || i==2 || i==3)
                {
                    if (i==1)
                        printf("Tas VS ");
                    else if(i==2)
                        printf("Kagit VS ");
                    else
                        printf("Makas VS ");
                    
                    Bilgisayar = rand()%3;
                    if (Bilgisayar==1)
                        printf("Tas \n ");
                    else if(Bilgisayar==2)
                        printf("Kagit \n");
                    else
                        printf("Makas \n");
                }
                    sonuc=i-Bilgisayar;    //oyun sonucunun hesaplanması
                    switch(sonuc)       
                    {
                        case 0:           esitlik++;break;
                        case -1: case 2:  win++;break;
                        case 1:  case -2: lose++;break;
                    }
                    if(win==5)
                    {     break;   }
                    if(lose==5)
                    {     break;   }
                    else if(i==4){
                        printf("oyunda ciktiniz.\n");
                        break;}
                    
                    else 
                        printf("yanlis secim yaptiniz!!! gecerli bir secenek seciniz...\n");
                }    //sonsuz dongunun bitisi.

            printf("\n");
            printf("\n");
            printf("                        Oyun bitti.                           \n");                         
            printf("--------------------------------------------------------------\n");
            printf("***   Sen ve bilgisayar toplamda %d tur savastiniz.        ***\n",j);
            printf("***   sen %d tur kazandin ve bilgisayar %d tur kazandi.    ***\n",win,lose);
            printf("***   toplam %d tur berabere kaldiniz.                     ***\n",esitlik);
            printf("--------------------------------------------------------------\n");

                if(win==lose)               //kazanana karar verme
                {
                    printf("***Oyunun sonucu: Berabere kaldik ***\n");
                }
                else if(win>lose)
                {
                    printf("***Oyunun sonucu: Oyuncu kazandi ***\n");
                }
                else if(win<lose)
                {
                    printf("***Oyunun Sonucu: Bilgisayar kazandi ***\n");
                } 
    return 0;
}