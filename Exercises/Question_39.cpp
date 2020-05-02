//Questão 39
#include <iostream>
#include <math.h>
#include <conio.h>

void multa(float &C1,float &C2,float &porcent1,float &porcent2){
	C1=200;
	C2=120;
	porcent1=(C1/100)*2;
	porcent1+=C1;
	porcent2=(C2/100)*2;
	porcent2+=C2;
}
int main(){
	
	float C1,C2,porcent1,porcent2,resto;
	
	multa(C1,C2,porcent1,porcent2);
	
	resto=1200-(C1+C2);
	
	printf("\nVai sobrar %.2f do salário de João!\n",resto);
	
	getch();
	return 0;
}
