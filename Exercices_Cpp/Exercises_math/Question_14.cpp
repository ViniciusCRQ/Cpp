//Questão 14
#include <iostream>
#include <math.h>
#include <conio.h>
int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float PI,raio,valor;
	
	printf("Informe o valor do R da pizza (em cm):\n");
	scanf("%f", &raio);
	
	PI=3.14;
	valor=PI*pow(raio,2);
	
	printf("A área da pizza do senhor é:\n%.2f cm²",valor);
	
	getch();
	return 0;
}