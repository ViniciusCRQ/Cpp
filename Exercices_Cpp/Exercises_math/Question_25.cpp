//Quest�o 25
#include <iostream>
#include <math.h>
#include <conio.h>
int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float PI,raio,altura,volume;
	
	printf("Digite a altura (em metros) da caixa d'agua:\n");
	scanf("%f",&altura);
	printf("Agora,digite o raio (tamb�m em metros) da sua caixa d'agua:\n");
	scanf("%f",&raio);
	
	PI=3,14;
	volume=PI*pow(raio,2)*altura;
	
	printf("O volume da sua caixa d'�gua � de:\n%.2fm�",volume);
	
	getch();
	return 0;
}
