//Questão 35

#include <iostream>
#include <math.h>
#include <conio.h>

void calculo(float d1,float d2,float t){
	t=(d1*d2)/2;
	printf ("O resultado da sua operação é:%.1f",t);
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float d1,d2,t;
	
	printf ("Informe a maior diagonal do losango:\n");
	scanf ("%f",&d1);
	printf ("Agora informe a menor diagonal do losango:\n");
	scanf ("%f",&d2);
	
	calculo(d1,d2,t);
	
	getch();
	return 0;
}

