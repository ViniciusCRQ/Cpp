//Questão 12
#include <iostream>
#include <math.h>
#include <conio.h>
int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float salarioN,salario15,salarioR;
	
	printf("\nInforme o valor incial do salário :\nR$");
	scanf("%f",&salarioN);
	
	salario15=salarioN/100;
	salario15=salario15*15;
	salario15=salario15+salarioN;
	
	salarioR=salario15/100;
	salarioR=salarioR*8;
	salarioR=salario15-salarioR;
	
	printf("\nOs valores inicial,aumentado e roubado são respectivamente: R$%.2f,R$%.2f e R$%.2f ",salarioN,salario15,salarioR);
	
	getch();
	return 0;
		
}