/*Question 6
Faça um algoritmo que leia N e uma lista de N números e mostre a soma de todos os
números da lista. */


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

	printf ("A soma dos números entre %d e %d é : %d", n,n2,t-1);
	
getch();
return 0;
}

