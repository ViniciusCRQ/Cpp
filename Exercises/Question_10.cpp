//Questão 10
#include <iostream>
#include <math.h>
#include <conio.h>
int main(){
	
    // formula p/ medir a distancia entre dois pontos dab=Raiz de (x2-x1)² + (y2-y1)²
	
	setlocale(LC_ALL, "portuguese");
	
	int xA,xB,yA,yB,D1;
	float D2;
	
	printf("\nDigite o X do primeiro ponto: ");
	scanf("%d",&xA);
	printf("\nDigite o Y desse mesmo ponto: ");
	scanf("%d",&yA);
	printf("\nDigite o X do segundo ponto: ");
	scanf("%d",&xB);
	printf("\nDigite o Y do segundo ponto: ");
	scanf("%d",&yB);
	
	D1=pow(xB-xA,2) + pow(yB-yA,2);
	D2=sqrt(D1);
	
	printf("\nA distância entre os pontos A(%d,%d) e B(%d,%d) é: raiz de %d(%.2f)",xA,yA,xB,yB,D1,D2);
	
	getch();
	return 0;
	
	//d=raiz de (x2-x1)² + (y2-y1)²
		
	
}