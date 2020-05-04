//QUestão 13

#include <iostream>
#include <math.h>
#include <conio.h>
int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	//unico jeito que eu consegui pensar em fazer esta
	
	char centena,dezena,unidade;
	
	printf("Digite um número qualquer < 1000:\n");
	scanf("%c",& centena);
	scanf("%c",& dezena);
	scanf("%c",& unidade);
	
	printf("\nCentena= %c00",centena);
	printf("\nDezenas= %c0",dezena);
	printf("\nUnidade= %c",unidade);
	
	getch();
	return 0;
	
}