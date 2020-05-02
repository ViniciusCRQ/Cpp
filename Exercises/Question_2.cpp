//Questão 2
#include <iostream>
#include <math.h>
#include <conio.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int cavalos,ferraduras;
	// Cada cavalo necessita de 4 ferraduras para ser equipado
	printf("Digite o número de cavalos em seu haras: ");
	scanf("%d",&cavalos);
	
	ferraduras=cavalos*4;
	
	printf("\nSerão necessárias %d ferraduras para equipar todos os cavalos!",ferraduras);
	
	getch();
	return 0;
}