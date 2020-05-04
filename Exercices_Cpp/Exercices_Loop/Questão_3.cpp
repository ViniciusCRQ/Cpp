/*Question_3
Faça um algoritmo que leia 50 números. Informe quantos são positivos, negativos e
nulos. */

#include <iostream>
#include <conio.h>

int main (){
	
	int c,t=0;
	int negativo=0,neutro=0,positivo=0;
	
	
	while ( t < 50 ){
		
		t++;
		
		printf ("Digite um número:");
		scanf ("%d",&c);
		
		if ( c < 0 ){
			negativo = negativo + 1;
		}
		else if ( c > 0 ){
			positivo = positivo + 1;
		}
		else {
			neutro = neutro + 1;
		}
	}
		
	printf ("No total, existem %d numeros negativos, %d zeros e %d numeros positivos",negativo,neutro,positivo);
	
getch();
return 0;
}
