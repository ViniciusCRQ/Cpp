//Questão 19
#include <iostream>
#include <math.h>
#include <conio.h>
int main(){
	//Se excluirmos as possibilidades de ter um frango manco, gasta-se 11 conto pra botar os aneis neles
	
	setlocale(LC_ALL,"portuguese");
	
	int frango;
	float custodosaneis;
	
	printf("Informe o número atual de frangos: ");
	scanf("%d",&frango);
	
	custodosaneis=11*frango;
	
	printf("O valor a ser gasto com os anéis é de:\nR$%.2f",custodosaneis);
	
	getch();
	return 0;
}