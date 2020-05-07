//Questão 17
#include <iostream>
#include <conio.h>
#include <math.h>

void calculo(float total,float ipi,int value1,int value2,int quant1,int quant2){
	
	float t2;
	
	t2=(ipi/100)+1;
	
	total=(value1*quant1)+(value2*quant2);
	total*=t2;
	
	printf("O valor total a ser pago é de: R$%.2f!",total);

}

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float total;
	float ipi,value1,value2;
	int quant1,quant2;
	
	printf("Informe a porcentagem do IPI:\n");
	scanf("%f",&ipi);
	printf("Agora informe o valor unitário da peça 1:\n");
	scanf("%f",&value1);
	printf("Informe também a quantidade de peças 1:\n");
	scanf("%d",&quant1);
	printf("Agora informe o valor unitário da peça 2:\n");
	scanf("%f",&value2);	
	printf("Informe também a quantidade de peças 2:\n");
	scanf("%d",&quant2);
	
	calculo(total,ipi,value1,value2,quant1,quant2);
	
	
getch();
return 0;
}


