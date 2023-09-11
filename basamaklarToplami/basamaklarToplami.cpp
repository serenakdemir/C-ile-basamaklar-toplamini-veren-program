#include<stdio.h>
int main(){
	//Girilen sayýnýn basamaklar toplamýný veren program
	
int sayi,toplam=0,kalan;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	
	
	
	while(sayi!=0)
	{
		kalan=sayi%10;
		toplam=toplam+kalan;
		sayi=sayi/10;
	}
	printf("\nBasamaklar Toplami:%d",toplam);
	
	
	
	
	
	return 0;
}
