//Questão 21
#include <iostream>
#include <math.h>
#include <conio.h>
int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float m1,m2,m3,total;
	
	printf ("Digite o n° de refris de 350 ml:\n");
	scanf("%f",& m1);
	printf ("\nAgora digite quantas de 600 você deseja:\n");
	scanf("%f",&m2);
	printf ("\nE,por último, digite, quantas cocas de 2 litros você deseja comprar:");
	scanf("%f",&m3);
	
	total=m1*0.35+m2*.6+m3*2;
	
	printf("O total de litros de refri que você comprou é:\n%.2f",total);
	
	getch();
	return 0;
	
}
