#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
	int VizeNotlar [2]; 
	int QuizNotlar [2]; 
	int Final;
} OgrenciNot;

typedef struct 
{
	char telefon [15]; 
	char eposta [50];
} Iletisin;

typedef struct
{
	int No;
	char Ad[50];
	char Sovad[50]; 
	int Cinsivet;
	Iletisin OgrIletisin;   // <--
	OgrenciNot Notlar;   // <--
} Ogrenci;

int main ()
{
	Ogrenci ogr;  // <--

	ogr.No = 1000;
	strcpy(ogr.OgrIletisin.eposta, "denizkilinc@gmail.com");
	strcpy(ogr.OgrIletisin.telefon, "05306663654");
	ogr.Notlar.QuizNotlar[1] = 65;
	ogr.Notlar.VizeNotlar[2] = 54;
	ogr.Notlar.Final = 78;
	
	return 0;
}