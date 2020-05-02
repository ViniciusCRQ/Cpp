//Questão 6
#include <iostream>
#include <math.h>
#include <conio.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	//Reparei que quando o DevC++ está configurado para ler em portugues ele lê a , e não o . em números quebrados
	float kilo,weight,value;
	
	kilo=12;
	
	printf("Informe o peso em kilos do prato:\n");
	scanf("%f",&weight);
	
	value=weight*kilo;
	
	printf("O Cliente deve pagar R$%.2f!",value);
	
	getch();
	return 0;
}