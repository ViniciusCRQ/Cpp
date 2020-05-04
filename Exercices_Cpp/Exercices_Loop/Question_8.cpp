/*Question 8 
Construir um algoritmo que calcule a média aritmética de vários valores inteiros
positivos, lidos externamente. O final da leitura acontecerá quando for lido um valor
negativo. */

#include <iostream>
#include <conio.h>

void calculo (int chose, float &chosem, int &choset, int &n){
	
	if (chose >= 0){
		choset += chose;
		n++; 
	}
	else {
	chosem = choset / n;
	}
}

int main (){
	
	int chose,choset,n,count;
	float chosem;
	

	while (chose >= 0 ){
	printf ("Digite um numero:");
	scanf("%d",&chose);
	calculo (chose,chosem,choset,n);
	}
	
	printf ("A media aritmetica eh: %.2f",chosem);

getch();
return 0;
}

