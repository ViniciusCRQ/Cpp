//Quest�o 34
#include <iostream>
#include <math.h>
#include <conio.h>


void quadrado(float l1,float total){
	total=l1*l1;
	printf("O resultado da sua opera��o � :\n%.1f",total);
}
int main(){
	setlocale(LC_ALL,"portuguese");
	
	float l1,total;
	
	printf("Informe o valor dos lados do seu quadrado(lembrando de que totos s�o iguais):\n");
	scanf("%f",&l1);
	
	quadrado(l1,total);
	
	
	getch();
	return 0;
}



