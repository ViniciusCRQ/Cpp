//Quest�o 29
#include <iostream>
#include <math.h>
#include <conio.h>
int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	char namep[20];
	float price,discount;
	
	printf("Digite o nome do produto:\n");
	gets(namep);
	printf("Informe o pre�o do produto:\n");
	scanf("%f",&price);
	
	discount=price/10;
	price-=discount;
	
	printf("O novo pre�o do produto �: R$%.2f",price);
	
	getch();
	return 0;
}
