/* Exercise 8 

Apresentar o quadrado dos numeros inteiros de 15 a 200 

*/

#include <iostream>
#include <math.h>
#include <conio.h>


void math (int i,int n){
	
	i = n*n;
	printf("\nQUADRADO DE %d = %d\n",n,i);
	
}
int main(){
	
	int n=15,i;
	
	printf ("QUADRADO DOS NUMEROS ENTRE 15 E 200:");
	while ( n >= 15 && n < 200 ){
	n++;
	math (i,n);
}

getch();
return 0;	
}
