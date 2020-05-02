// Questão 1 
#include <iostream>
#include <math.h>
#include <conio.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	/*Culcular a área do terreno
	Calculo do retângulo é igual a base*altura;*/
	
	
	float area,large,width;
	
	printf ("Informe o comprimento do terreno em metros:\n");
	scanf ("%f",& large);
	
	printf ("\nInforme a largura do terreno em metros:\n");
	scanf ("%f",& width);
	
	area=large*width;
	
	printf ("\nA área do terreno é: %.2f metros! ", area);
	
	getch();
	return 0;
}