#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//linearSearch(dogrusal arama) fonksiyonu tanýmlanýyor ve i ye mi yoksa -1 emi esit kontrol ediliyor.
int linearSearch(int dizi[], int boyut, int aranansayi){ 
	int i;
	for(i=0; i<boyut; i++){
		if(aranansayi == dizi[i]){
		
		return i;
	}
}
	return -1;
}

int main(){
	//dizinin boyutu kullanicidan aliniyor.
	int boyut;
	printf("Lutfen dizinin boyutunu giriniz: ");
	scanf("%d",&boyut);
	int dizi[boyut];
	int i=0;
	for (i=0; i<boyut; i++){
		printf("Girilecek sayi:");
		scanf("%d",&dizi[i]);
		}
	//dizide aranmak istenen sayi tanimlaniyor.	
    int aranansayi;
    printf("Lutfen aranan sayiyi giriniz:");
    scanf("%d",&aranansayi);
    int sonuc= linearSearch(dizi, boyut, aranansayi);
    //arama sonucuna gore cumle ekrana yaziyor.
    if(sonuc==-1)
    {
    	printf("Aranan sayi dizide yoktur.");
	}
	else{
		printf("Aranan sayi dizide vardir.");
	}
	
	return 0;
}
