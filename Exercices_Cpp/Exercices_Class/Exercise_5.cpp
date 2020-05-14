/* Exercise 5 

Apresentar a soma dos 100 primeiros numeros inteiros

*/
 
#include <iostream>
#include <conio.h>
#include <math.h>


int main() {
	setlocale(LC_ALL,"portuguese");
		
	int i,sum;
		
	for (i = 0; i < 101; i++){
		sum += i;
	}
	
	printf("A soma é igual a: %d",sum - 1);
	
			
getch();
return 0;	
}

