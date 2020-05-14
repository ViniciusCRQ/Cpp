/* Exercise 7 

Informar um numero limite inferior e um numero limite superior. Após isso, imprimir os numeros pares entre eles e a soma entre esses numeros pares

*/
#include <iostream>
#include <math.h>
#include <conio.h>

int main(){
	
	int i,li,ls,sum;
	
	printf("INFORME O LIMITE INFERIOR:\n");
	scanf("%d",&li);
	printf("INFORME O LIMITE SUPERIOR:\n");
	scanf("%d",&ls);
	
	if ( li % 2 == 0 )
		li = li + 2;
	
	else 
		li = li + 1;
	
	for ( i = li ; i <= ls - 1 ; i = i+2){
		printf ("%d ",i);
		sum += i;
	}
	
	printf("\n\nSomatorio: %d",sum);
	
}
