//Questão 36
#include <iostream>
#include <math.h>
#include <conio.h>


void calculo(float salariom,float salariot, float div){
	salariom=1045;
	div=salariot/salariom;
	printf("O funcionário recebe %.1f salários mínimos por mês(levando em consideração o salário minimo de R$1045)",div);
}
int main(){
	
	setlocale(LC_ALL,"portuguese");

	float salariom,salariot,div;
	
	printf("Informe o salário total do funcinário(a):\n");
	scanf("%f",&salariot);
	
	calculo(salariom,salariot,div);
	
	getch();
	return 0;
}
