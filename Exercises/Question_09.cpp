//Questão 9
#include <iostream>
#include <math.h>
#include <conio.h>
int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float priceP,priceM,priceG,total;
	int quantP,quantM,quantG;
	
	printf("Informe a quantidade de camisas P: ");
	scanf("%d",&quantP);
	printf("\nInforme a quantidade de camisas M: ");
	scanf("%d",&quantM);
	printf("\nInforme a quantidade de camisas G: ");
	scanf("%d",&quantG);
	
	priceP=quantP*10;
	priceM=quantM*12;
	priceG=quantG*15;
	total=priceP+priceM+priceG;
	
	printf("\nO valor arrecadado é R$%.2f!",total);
	
	getch();
	return 0;
}
