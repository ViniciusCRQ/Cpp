//Questão 32
#include <iostream>
#include <math.h>
#include <conio.h>

void div(float &kg,float &g){
	g=kg*100;
	printf("%.2f kilos é igual a %.2f gramas",kg,g);
}

int main(){
	
	float kg,g;
	
	printf("Informe o seu peso:\n");
	scanf("%f",&kg);
	
	div(kg,g);
	
	getch();
	return 0;
}
