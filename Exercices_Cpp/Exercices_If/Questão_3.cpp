//Quest�o 3
#include <iostream>
#include <math.h>
#include <conio.h>

void calculo(float &nm1,float &nm2){
	
	float x;
	x=nm1-nm2;

	if(x==0){
		printf("\nOs n� s�o iguais!");
	}
	else{
		printf("\nOs n� s�o diferentes!");
	}
}
int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float nm1,nm2,x;
	
	printf("Informe o primeiro n�:\n");
	scanf("%f",&nm1);
	printf("\nAgora informe o segundo n�:\n");
	scanf("%f",&nm2);
	
	calculo(nm1,nm2);
	
	getch();
	return 0;
}
	
