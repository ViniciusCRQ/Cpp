//Quest�o 23
#include <iostream>
#include <math.h>
#include <conio.h>
int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float hy,hb,shw,shwb;
	
	printf("Digite a sua altura(Digite com a v�rgula ao inv�s do ponto):\n");
	scanf("%f",&hy);
	printf("Agora, digite o comprimento da sombra que voc� projeta:\n");
	scanf("%f",&shw);
	printf("Por �ltimo, digite a sombra que o pr�dio projeta:\n");
	scanf("%f",&shwb);
	
	hb=shwb*hy;
	hb/=shw;
	
	printf("A altura do pr�dio � de:%.2f",hb);
	
	getch();
	return 0;
	
}
