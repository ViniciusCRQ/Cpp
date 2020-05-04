//Questão 33
#include <iostream>
#include <math.h>
#include <conio.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float b1,b2,h,total;
	
	printf("Informe o valor da base maior:\n");
	scanf("%f",&b1);
	printf("Agora informe o valor da base menor:\n");
	scanf("%f",&b2);
	printf("Por ultimo, informe a altura do trapézio:\n");
	scanf("%f",&h);
	
	total=(b1+b2)*h/2;
	
	printf("A área do trapézio é igual a:\n%.2f m²",total);
	
	getch();
	return 0;
}
