//Quest�o 18

#include <iostream>
#include <math.h>
#include <conio.h>

void calculo(float a,float b,float c,float d){
	
	float r1,r2;
	
	d= (pow(b,2) - 4*a*c);
	
	if (d > 0){
		r1=((-b + sqrt(d))/2*a);
		
		r2=((-b - sqrt(d))/2*a);
		
		printf("A 1� raiz � %.2f\n",r1);
		printf("A 2� raiz � %.2f\n",r2);
	}
	
	else if (d == 0){
		
		r1=-b/2*a;
		
		printf("Possui duas raizes iguais: %.2f",r1);
	}
	
	else{
		printf("Esse n�mero n�o possui raizes reais!");
	}	
}

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float a,b,c,d;
	
	printf("Informe o valor A da opera��o:");
	scanf("%f",&a);
	printf("Agora informe o valor B da opera��o:");
	scanf("%f",&b);
	printf("Por ultimo informe o valor C da opera��o:");
	scanf("%f",&c);
	
	calculo(a,b,c,d);
	
getch();
return 0;
}
