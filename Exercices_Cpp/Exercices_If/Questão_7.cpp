///Questão 7

#include <iostream>
#include <math.h>
#include <conio.h>

void calculo (float v1,float v2,float v3){
	
	if (v1>v2 && v1>v3){
		printf("\n%.1f é o maior número!",v1);
	}
	else if (v2>v3 && v2>v1){
		printf("\n%.1f é o maior número!",v2);
	}
	else if (v3>v2 && v3>v1){
		printf("\n%.1f é o maior número!",v3);
	}
	else {
		printf("\nOs números são iguais!");
	}
}

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float v1,v2,v3;
	
	printf("Informe o primeiro valor:\n");
	scanf("%f",&v1);
	printf("\nInforme o segundo valor:\n");
	scanf("%f",&v2);
	printf("\nPor ultimo, informe o terceiro valor:\n");
	scanf("%f",&v3);
	
	calculo(v1,v2,v3);
	
getch();
return 0;
}

