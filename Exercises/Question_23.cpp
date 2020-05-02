//Questão 23
#include <iostream>
#include <math.h>
#include <conio.h>
int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float hy,hb,shw,shwb;
	
	printf("Digite a sua altura(Digite com a vírgula ao invés do ponto):\n");
	scanf("%f",&hy);
	printf("Agora, digite o comprimento da sombra que você projeta:\n");
	scanf("%f",&shw);
	printf("Por último, digite a sombra que o prédio projeta:\n");
	scanf("%f",&shwb);
	
	hb=shwb*hy;
	hb/=shw;
	
	printf("A altura do prédio é de:%.2f",hb);
	
	getch();
	return 0;
	
}
