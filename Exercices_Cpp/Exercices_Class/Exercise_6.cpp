/* Exercise 6

Receber um numero e verificar se ele est� entre 100 e 200

*/

#include <iostream>
#include <math.h>
#include <conio.h>

int main (){
	
	setlocale(LC_ALL,"portuguese");
	
	int n;
	
	while ( n != -1 ){
	printf("\nPARA SAIR DIGITE ( -1 )\nInforme um numero: ");
	scanf("%d",&n);
	
	if ( n >= 100 && n <=200 )
		printf("\nO n�mero est� entre os 2");
	else 
		printf("\nO numero n�o est� entre os 2");
	
	getch();
	system("cls");
}
	
getch();
return 0;
}
