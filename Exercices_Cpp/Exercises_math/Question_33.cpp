//Quest�o 33
#include <iostream>
#include <math.h>
#include <conio.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float b1,b2,h,total;
	
	printf("Informe o valor da base maior:\n");
	scanf("%f",&b1);
	printf("Agora informe o valor da base menor:\n");
	scanf("%f",&b2);
	printf("Por ultimo, informe a altura do trap�zio:\n");
	scanf("%f",&h);
	
	total=(b1+b2)*h/2;
	
	printf("A �rea do trap�zio � igual a:\n%.2f m�",total);
	
	getch();
	return 0;
}
