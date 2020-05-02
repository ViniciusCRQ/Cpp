//Questão 5
#include <iostream>
#include <math.h>
#include <conio.h>
int main(){
	
	setlocale(LC_ALL ,"Portuguese");
	
	float litros,price,total;
	
	printf("Digite o valor do litro da gasosa:\n");
	scanf("%f",&price);
	
	printf("\nCerto, agora digite quantos reais você pagou:\n");
	scanf("%f",&total);
	
	litros=total/price;
	
	printf("\nVocê colocou %.2f litros de gasolina com R$%.2f!",litros,total);
	
	getch();
	return 0;
	
	
	
}