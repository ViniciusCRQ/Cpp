//Quest�o 24
#include <iostream>
#include <math.h>
#include <conio.h>
int main(){

	setlocale(LC_ALL,"portuguese");
	
	float water,juyce,total;
	
	printf("Digite quantos litros de refresco voc� deseja fazer:\n");
	scanf("%f",&total);
	
	water=total*0.8;
	juyce=total*0.2;
	
	printf("Voc� dever� gastar %.2f litros de �gua e %.2f litros de suco para fazer %.2f litros de refresco!",water,juyce,total);
	

	getch();
	return 0;

}
