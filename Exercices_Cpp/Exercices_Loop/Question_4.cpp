/*Question 4
Fa�a um algoritmo que leia um n�mero N, some todos os n�meros inteiros entre 1 e N,
e mostre o resultado obtido. */


#include <iostream>
#include <conio.h>

int main(){
	
	int i ,n ,n2, t;
	int x;
	
	setlocale (LC_ALL,"portuguese");
	
	printf("Digite um valor N :\n");
	scanf("%d",&n);
	printf("Digite o outro valor N :\n");
	scanf("%d",&n2);
	
	while ( i < n2 ){
		
		i++;
		
		if ( i > n && i < n2){
			
			t += i;
		
	}
}

	printf ("A soma dos n�meros entre %d e %d � : %d", n,n2,t-1);
	
getch();
return 0;
}

