/* Exercise 11

Escrever um programa que receba vários números inteiros no teclado. E no final imprimir a média dos números multiplos de 3. Para sair digitar 0

*/
#include <iostream>
#include <conio.h>
#include <math.h>


void math (int n,float nn,float mn,int i) {
	
	mn = nn/i;
	printf("A média dos numeros multiplos de 3 é : %.2f",mn);
	
}
int main(){
	
	setlocale(LC_ALL , "portuguese");
	
	int i,n;
	float nn,mn;
	
	printf("\t\nMENU\n\n1 - Digite 0 para sair \n2 - ");
	
	while ( n != 0 ){
	
		
		printf("Digite um n° inteiro: ");
		scanf("%d",&n);
		
		if ( n%3 == 0 && n != 0 ){
			i++;
			nn += n;
	}
}
	math(n,nn,mn,i);
	
getch();
return 0;
}
