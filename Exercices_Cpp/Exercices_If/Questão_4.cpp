//Questão 4
#include <iostream>
#include <math.h>
#include <conio.h>

void calculo(int &nm1,int resto){

	resto=nm1%2;
	
	if(resto!=0){
		printf("\nO n° é impar!");
	}
	else{
		printf("\nO n° é par!");
	}
}

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int nm1,resto;
	
	printf("\nDigite um n° p/ ver se ele é Par ou Impar:\n");
	scanf("%d",&nm1);
	
	calculo(nm1,resto);
	
	getch();
	return 0;
}
