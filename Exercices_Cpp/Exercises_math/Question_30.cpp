//Quest�o 30
#include <iostream>
#include <math.h>
#include <conio.h>

void vendas (float &porcent,float &value){
	porcent=4;
	value=porcent/100;
}

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float salario,value,porcent;
	
	printf("Digite o valor que o funcionario arrecadou em vendas:\n");
	scanf("%f",&value);
	printf("Agoroa digite o sal�rio do mesmo:\n");
	scanf("%f",&salario);
	
	vendas (value,porcent);
	salario+=value;
	printf("O valor da comiss�o � de:\nR$%.2f\nJ� o sal�rio total dele(a) vai ficar em:\nR$%.2f",value,salario);
	
	
	getch();
	return 0;
}
