//Questão 29
#include <iostream>
#include <math.h>
#include <conio.h>
int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	char namep[20];
	float price,discount;
	
	printf("Digite o nome do produto:\n");
	gets(namep);
	printf("Informe o preço do produto:\n");
	scanf("%f",&price);
	
	discount=price/10;
	price-=discount;
	
	printf("O novo preço do produto é: R$%.2f",price);
	
	getch();
	return 0;
}
