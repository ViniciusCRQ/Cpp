//Questão 16

#include <iostream>
#include <math.h>
#include <conio.h>

void calculo(int &valor,int ncem,int ncinq,int ndez,int difdez,int ncinc,int num,int difum){
	
	int aux1,aux2;
	
	int cem=100;
	int cinq=50;
	int dez=10;
	int cinc=5;
	int um=1;
	
	aux1=valor%cem;
	aux2=valor%dez;
	
	
	if (valor>100){
		ncem=valor/cem;
		printf("\nSerão necessárias %d notas de R$100,00!",ncem);
	}//CEM
	
	if (aux1 >= 50){
		ncinq = 1;
		printf("\nSerão necessárias %d notas de R$50,00!",ncinq);
	}//CINQUENTA
	
	if (aux1 < 50){
		ndez=(aux1)/10;
		printf("\nSerão necessárias %d notas de R$10,00!",ndez);
	}
	else if (aux1 > 50 && aux1 <100){
		difdez=aux1-50;
		difdez/=10;
		printf("\nSerão necessárias %d notas de R$10,00!",difdez);
	}//DEZ
	if (aux2>= 5){
		ncinc=1;
		printf("\nSerão necessárias %d notas de R$5,00!",ncinc);
	}//CINCO
	if (aux2 < 5){
		num=aux2;
		printf("\nSerão necessárias %d notas de R$1,00!",num);
	}
	else if (aux2 >5 && aux2<10){
		difum=aux2-5;
		printf("\nSerão necessárias %d notas de R$1,00!",difum);
	}	
}

int main(){
	
	setlocale(LC_ALL,"portuguese");S
	
	int ncem,ncinq,ndez,ncinc,num,difum,difdez;
	int valor;
	int cem,cinq,dez,cinc,um;
	
	printf("Digite o valor para ser dividido:\n");
	scanf("%d",&valor);
	
	calculo(valor,ncem,ncinq,ndez,difdez,ncinc,num,difum);
	
	
getch();
return 0;
}
