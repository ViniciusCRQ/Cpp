/* Exercise 6

Receber um numero e verificar se ele está entre 100 e 200

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
		printf("\nO número está entre os 2");
	else 
		printf("\nO numero não está entre os 2");
	
	getch();
	system("cls");
}
	
getch();
return 0;
}
