/* Exercise 4

Solicitar a idade de v�rias pessoas e imprimir: Total de pessoas com menos de 21 anos & total de pessoas com mais de 50 anos. A repeti��o deve parar quando se digitar um n�mero espec�fico

*/
#include <iostream>
#include <conio.h>

int main(){
	
	float age;
	int menor=0,maior=0;
	
	while ( age != -1 ){
		
		printf("Informe sua idade ( para parar a repeti��o digite -1): ");
		scanf("%f",&age);
		
		if ( age < 21 ){
			menor ++;
		}
		else if ( age > 50 ){
			maior ++;
		}
	}
	
	printf("No total possuem %d pessoas com menos de 21 anos e %d com mais de 50",menor - 1,maior);
	
getch();
return 0;
}
