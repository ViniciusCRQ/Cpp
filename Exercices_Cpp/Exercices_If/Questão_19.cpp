//Quest„o 19

#include <iostream>
#include <math.h>
#include <conio.h>

void calculo(float l1,float l2,float l3){
	
	float total;
	total=l1*l2*l3;
	
	
	if (total > 0){
		if (l1 == l2 && l2 == l3){
			printf("\n… um triangulo equilatero");
		}
		else if (l1 == l2 || l2 == l3 || l1 == l3){
			printf("\n… um triangulo isosceles");
		}
		else if (l1 != l2 && l2 != l3 && l1 != l3 ){
			printf("\n… um triangulo escaleno");
		}
	}
	else {
		printf ("\nN„o pode-se criar um triangulo com as medidas informadas");
	}
}

int main(){
	
	float l1,l2,l3;
	
	printf("Informe o primeiro lado do tri‚ngulo:\n");
	scanf("%f",&l1);
	printf("Informe o segundo lado do tri‚ngulo:\n");
	scanf("%f",&l2);
	printf("Informe o terceiro lado do tri‚ngulo:\n");
	scanf("%f",&l3);
	
	calculo (l1,l2,l3);
	
getch();
return 0;
}
