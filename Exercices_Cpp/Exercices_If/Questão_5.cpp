//Questão 5
#include <iostream>
#include <math.h>
#include <conio.h>

void calculo(int &nm1,int &nm2){
	
	if (nm1>nm2){
		printf(" %d --> %d",nm2,nm1);
	}
	if (nm2>nm1){
		printf(" %d --> %d",nm1,nm2);
	}
	else {
		printf("Números iguais!");
	}
}

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int nm1,nm2;
	
	printf("Informe um número:\n");
	scanf("%d",&nm1);
	printf("\nInforme outro número:\n");
	scanf("%d",&nm2);
	
	calculo(nm1,nm2);
	
	
	getch();
	return 0;
}
