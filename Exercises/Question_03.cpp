//QUestão 3
#include <iostream>
#include <math.h>
#include <conio.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float pricepao, pricebroa, arrecadado, poupanca, nmpaes, nmbroas;
	
	printf("Digiite o n° de pães vendidos: \n");
	scanf("%f", & nmpaes);
	
	printf("\nDigite o n° de broas vendidas: \n");
	scanf("%f", & nmbroas);
	
	pricebroa= 1.50;
	pricepao= 0.12;
	
	nmpaes*=pricepao;
	nmbroas*=pricebroa;
	
	arrecadado=nmpaes+nmbroas;
	
	printf("\nVocê arrecadou R$%.2f hoje!",arrecadado);
	
	poupanca = arrecadado/10;
	
	printf("\nDeposite R$%.2f na sua poupança!",poupanca);
	
	
	getch();
	return 0;
	
	
}