/*Question 6
Fa�a um algoritmo que leia N e uma lista de N n�meros e mostre a soma de todos os
n�meros da lista. */


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
	
	while ( i <=n2 ){
		
		i++;
		
		if ( i >= n && i <= n2){
			
			t += i;
		
	}
}

	printf ("A soma dos n�meros entre %d e %d � : %d", n,n2,t-1);
	
getch();
return 0;
}

