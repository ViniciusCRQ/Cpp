//Quest�o 26
#include <iostream>
#include <math.h>
#include <conio.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float n1,n2,n3,total;
	
	printf("Digite o primeiro n�: ");
	scanf("%f",&n1);
	printf("\nAgora digite o segundo n�: ");
	scanf("%f",&n2);
	printf("\nPor �ltimo, digite o terceiro n�: ");
	scanf("%f",&n3);
	
	total=n1*n2*n3;
	
	printf("A multiplica��o desses tr�s n�meros �:\n%.2f",total);
	
	getch();
	return 0;
}
