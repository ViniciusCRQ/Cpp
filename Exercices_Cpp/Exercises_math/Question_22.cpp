//Questão 22

#include <iostream>
#include <math.h>
#include <conio.h>
int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float m1,m5,m10,m25,m50,total;
	
	printf("Informe a quantidade de moedas de 1 centavo:\n");
	scanf("%f",&m1);
	printf("Agora de 5 centavos:\n");
	scanf("%f",&m5);
	printf("10 Centavos:\n");
	scanf("%f",&m10);
	printf("25 Centavos:\n");
	scanf("%f",&m25);
	printf("50 Centavos:\n");
	scanf("%f",&m50);
	
	total=m1/100+m5/20+m10/10+m25/4+m50/2;
	
	printf("O total de reais que você guardou neste cofrinho é de:R$%.2f!",total);
	
	getch();
	return 0;
	
	
}
