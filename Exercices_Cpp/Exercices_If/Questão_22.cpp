//Questão 22

#include <math.h>
#include <iostream>
#include <conio.h>

void calculo(float valor,float lucro1,float lucro2,float total){
	
	lucro1 = valor / 100;
	lucro1 *= 45;
	
	lucro2 = valor /100;
	lucro2 *= 30;
	
	if (valor<=20){
		total=valor+lucro1;
		printf("O valor total é de R$%.2f!",total);
	}
	else {
		total=valor+lucro2;
		printf("O valor total é de R$%.2f!",total);		
	}
	
}

int main(){
	
	setlocale(LC_ALL,"portuguese");
		
	float valor,total;
	float lucro1,lucro2;
	
	
	printf("\n\t\tCALCULADORA DE LUCROS\n");
	printf("Bem-vindo! O programa funciona da seguinte forma:\nCaso o produto tenha uma valor menor de R$20,00, você receberá um lucro de 45%, caso contrário o lucro será de 30%!\n\n");
	printf("Informe o preço do produto:\n");
	scanf("%f",&valor);
	
	calculo(valor,lucro1,lucro2,total);
	
getch();
return 0;
}
