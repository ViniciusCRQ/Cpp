//Questão 7
#include <iostream>
#include <math.h>
#include <conio.h>
int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int mes,dia,total,subt;
	
	printf("Digite o mês em que se encontra:\n");
	scanf("%d",&mes);
	
	printf("\nAgora digite o dia do Mês:\n");
	scanf("%d",&dia);
	
	subt=30-dia;
	total=mes*30-subt;
	
	
	if (mes>12){
		printf("O n° digitado não condiz com nenhum Mês, tente novamente.");
		return 0;
	}
	
	if (dia>30){
		printf ("O n° digitado não condiz com nenhum Dia do mês, tente novamente");
		return 0;
	}
	
	printf("\nEsse ano já tem aproximadamente %d dias.",total);
		
		
	// Botei um if/else p/ impossibilitar que ocorra erro na hora de colocar os dados
	
	getch();
	return 0;
	
	
}