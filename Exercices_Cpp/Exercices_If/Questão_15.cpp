//Questão 15

#include <iostream>
#include <math.h>
#include <conio.h>

/*void calculo(int &o,int &t,int &t3,int vetor[3],int n){
	
	int menor,aux;
	
	for (int i=0;i<n-1;i++){
		menor=1;
		for (int j=i;j<n;j++){
		if (vetor[menor]>vetor[j]){
			menor=j;
		}
		}
		if(i!=menor){
			aux=vetor[i];
			vetor [i]=vetor[menor];
			vetor [menor]=aux;
		}
	}
}*/

void calculo(float &o,float &t,float &t3){
	
	if (t<o && t<t3 && o<t3){
		printf("A ordem é a seguinte:%.2f, %.2f, %.2f",t,o,t3);
	}
	else if (t3<o && t3<t && o<t){
		printf("A ordem é a seguinte:%.2f, %.2f, %.2f",t3,o,t);
	}
	else if (o<t3 && o<t && t<t3){
		printf("A ordem é a seguinte:%.2f, %.2f, %.2f",o,t,t3);
	}
	else if (t3<t && t3<o && t<o){
		printf("A ordem é a seguinte:%.2f, %.2f, %.2f",t3,t,o);
	}
	else if (t<t3 && t<o && t3<o){
		printf("A ordem é a seguinte:%.2f, %.2f, %.2f",t,t3,o);
	}
	else if (o<t3 && o<t && t3<t){
		printf("A ordem é a seguinte:%.2f, %.2f, %.2f",o,t3,t);
	}
	else {
		printf("Existem numeros repetidos!");
	}
	
	
}

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float o,t,t3;
	
	printf("Informe o 1° valor:\n");
	scanf("%f",&o);
	printf("\nInforme o 2° valor:\n");
	scanf("%f",&t);
	printf("\nInforme o 3° valor:\n");
	scanf("%f",&t3);
	
	calculo(o,t,t3);
	
getch();
return 0;
	
}
