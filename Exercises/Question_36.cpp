//Quest�o 36
#include <iostream>
#include <math.h>
#include <conio.h>


void calculo(float salariom,float salariot, float div){
	salariom=1045;
	div=salariot/salariom;
	printf("O funcion�rio recebe %.1f sal�rios m�nimos por m�s(levando em considera��o o sal�rio minimo de R$1045)",div);
}
int main(){
	
	setlocale(LC_ALL,"portuguese");

	float salariom,salariot,div;
	
	printf("Informe o sal�rio total do funcin�rio(a):\n");
	scanf("%f",&salariot);
	
	calculo(salariom,salariot,div);
	
	getch();
	return 0;
}
