//Questão 18
#include <iostream>
#include <math.h>
#include <conio.h>
int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float horas1,horas2,sal_total,sal_liquido;
	
	printf("Horas Normais de trabalho:\n");
	scanf("%f",&horas1);
	printf("Agora informe as horas extras:\n");
	scanf("%f",&horas2);
	
	sal_total=horas1*10+horas2*15;
	sal_liquido=sal_total/100;
	sal_liquido=sal_liquido*10;
	sal_liquido=sal_total-sal_liquido;
	
	printf("\nSalário normal: R$%.2f\nSalário Líquido: R$%.2f",sal_total,sal_liquido);
	
	getch();
	return 0;
}