//Questão 20
#include <iostream>
#include <math.h>
#include <conio.h>
int main(){

	float nblusas,nnovelos,div;
	
	printf("Informe a quantidade de novelos gastos: ");
	scanf("%f",&nnovelos);
	printf("Certo,agora informe a quantidade de blusas confeccionadas: ");
	scanf("%f",&nblusas);
	
	div=nnovelos/nblusas;
	
	printf("O numero de novelos que foram gastos por blusa foram %.2f",div);
	
	getch();
	return 0;
}