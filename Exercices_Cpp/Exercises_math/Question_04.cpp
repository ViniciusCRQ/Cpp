//Questão_4
#include <iostream>
#include <math.h>
#include <conio.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char name[30];
	int age,daysalive;
	
	/*Eu não entendi se era pra colocar o mês da pessoa para calcular com precisão o n° de dias, também não me veio à cabeça como resolver tal problema,
	o máximo que veio em mente é considerar cada mês como 0,083 de um ano e a pessoa precisaria especificar somando:Exemplo eu tenho ~= 17,25 anos (17 anos e 3 meses)*/
	
	printf("Olá, digite seu nome para começarmos:\n");
	scanf("%s",&name);
	printf("Bem vindo(a) %s, agora digite sua idade para calcularmos a quantidade de dias que você já viveu:\n",name);
	scanf("%d",&age);
	
	daysalive=age*365;
	
	printf("Ok, %s , você já viveu acima de %d dias na sua vida!",name,daysalive);
	
	getch();
	return 0;
}