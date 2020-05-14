/* Exercise 3 
Transformar Celcius em Fahrenheit */

#include <iostream>
#include <conio.h>


void math(int cel) {
	
	
	printf("\n%.2f em graus Celsius são %.2f em graus Fahrenheit!",cel,cel float(9*cel+160)/5);
}

int main(){
	
	int cel;
	
	printf("Informe o valor em graus Celsius: ");
	scanf("%f",&cel);
	
	math(cel);
	
getch();
return 0;
}
