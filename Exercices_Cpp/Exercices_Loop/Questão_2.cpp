/*Question_2

Faça um algoritmo que leia um número N, some todos os números inteiros entre 1 e N,
e mostre o resultado obtido. */


#include <iostream>
#include <conio.h>

int main(){
	
	int i ,n ,t;
	int x;
	
	setlocale (LC_ALL,"portuguese");
	
	printf("Digite um valor N :\n");
	scanf("%d",&n);
	
	while ( i < n ){
		
		i++;
		
		if ( i > 1 && i < n){
			
			t += i;
		
	}
}

	printf ("A soma dos números entre 1 e %d é : %d", n,t-1);
	
getch();
return 0;
}

