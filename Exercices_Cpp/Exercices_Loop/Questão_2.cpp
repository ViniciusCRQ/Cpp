/*Question_2

Fa�a um algoritmo que leia um n�mero N, some todos os n�meros inteiros entre 1 e N,
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

	printf ("A soma dos n�meros entre 1 e %d � : %d", n,t-1);
	
getch();
return 0;
}

