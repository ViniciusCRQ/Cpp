//Questão 15

#include <iostream>
#include <math.h>
#include <conio.h>
int main(){

	setlocale(LC_ALL, "portuguese");
	
	float felipe,conta;
	int andre,carlos;
	
	printf("Insira o valor da conta:\nR$");
	scanf("%f",&conta);
	
	
	andre=conta/3;
	carlos=andre;
	conta=conta-(andre+carlos);
	felipe=conta;
	
	printf("Valor que cada um deve pagar é:\nFelipe: R$%.2f\nAndré: R$%d,00\nCarlos: R$%d,00",felipe,andre,carlos);
	
	getch();
	return 0;
}