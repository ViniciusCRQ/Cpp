//Questão 40
#include <iostream>
#include <math.h>
#include <conio.h>

void hipotenusa(float &catetoa,float &catetoo,float &hip){
	hip=pow(catetoa,2)+pow(catetoo,2);
	hip=sqrt(hip);
}
int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float catetoa,catetoo,hip;
	
	printf("Informe o valor do cateto oposto:\n");
	scanf("%f",&catetoo);
	printf("\nInforme o cateto adjacente:\n");
	scanf("%f",&catetoa);
	
	hipotenusa(catetoa,catetoo,hip);
	
	printf("O valor da sua hipotenusa é %.2f",hip);
	
	getch();
	return 0;
}
