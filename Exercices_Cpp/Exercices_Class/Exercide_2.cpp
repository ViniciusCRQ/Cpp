/* Exercise 2 14/05/2020 

Ler um valor e retornar um reajuste de 10% em cima dele

*/
#include <iostream>
#include <math.h>
#include <conio.h>

void math (float v1, float result1, float result2) {
	
	result1 = v1/10;
	result1 *= 9;
	result2 = v1/10;
	result2 *= 11;
	
	printf("O reajuste de 10 porcento ficou em : %.2f para baixo e %.2f para cima",result1,result2);
	
}

int main(){
	
	float v1,result1,result2;
	
	printf("Digite um valor qualquer: ");
	scanf("%f",&v1);
	
	math(v1,result1,result2);
	
getch();
return 0;
}
