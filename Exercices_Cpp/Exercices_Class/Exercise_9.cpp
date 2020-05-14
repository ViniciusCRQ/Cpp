/* Exercise 10 

Um comerciante comprou um produto e quer vende-lo com lucro com 45% se o valor da compra for menor que R$20,00. Caso contrário, o lucro será de 30%. Entrar com o valor do produto e imprimir o valor da venda

*/

#include <iostream>
#include <math.h>
#include <conio.h>


void math(float valor,float lucro){
	
	if (valor < 20 )
		lucro = (valor/100)*45;
	else 
		lucro = (valor/100)*30;

	printf("O lucro será de : %.2f",lucro);
	printf("O valor total do produto será : %.2f",lucro+valor);
	
}
int main(){
	
	float valor,lucro;
	
	printf("Informe o valor do produto comprado:");
	scanf("%f",&valor);
	
	math(valor,lucro);
	
getch();
return 0;	
}
