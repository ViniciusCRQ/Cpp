//Questão 8
#include <iostream>
#include <math.h>
#include <conio.h>

void calculo(int v1,int v2,int x,int x2){
	
	
	x=v2%v1;
	x2=v1%v2;
	
	if (x==0){
			printf("\nOs numeros são multiplos");
		}	
	else if (x2==0) {
			printf("\nOs numeros são multiplos!");
	}
	else {
			printf("\nOs numeros não são multiplos");
	}
}


int main(){
	
	setlocale(LC_ALL,"portuguese");

	int v1,v2,x,x2;
	
	printf("\nDigite um numero:\n");
	scanf("%d",&v1);
	printf("\nDigite outro numero:\n");
	scanf("%d",&v2);
	

	calculo(v1,v2,x,x2);
	
getch();
return 0;
}
