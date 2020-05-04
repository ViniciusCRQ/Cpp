//Questão 16
#include <iostream>
#include <math.h>
#include <conio.h>
int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float queijo,presunto,RODELAdehamburgui,shit1;
	
	printf("Favor, informe a quantidade de sanduiches:\n");
	scanf("%f",& shit1);
	
	queijo=shit1*100;
	presunto=shit1*50;
	RODELAdehamburgui=shit1*100;
	
	printf("Você deve comprar:\n %.2f gramas de queijo\n %.2f gramas de presunto\n %.2f RODELAS de hamburgui",queijo,presunto,RODELAdehamburgui);
	
	getch();
	return 0;	
}