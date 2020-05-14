//Exercise 1 14/05/2020
/* Ler 2 números inteiros e soma-los. Se a soma for maior que 10, mostrar o resultado da soma */

#include <iostream>
#include <math.h>
#include <conio.h>

void math (int n1,int n2,int result){
	
	if ( n1 + n2 >= 10 ){
		result = n1 + n2;
		printf ("O resultado da soma eh : %d",result);
	}
	else {
		result = 0;
		printf ("A soma deu menos de 10, tente novamente");
		exit(0);
	}
	
}

int main (){
	
	int n1,n2,result;
	
	printf("Digite o primeiro numero: ");
	scanf("%d",&n1);
	printf("Agora digite o segundo numero: ");
	scanf("%d",&n2);
	
	math(n1,n2,result);
	
getch();
return 0;
}
