//Questão 13
#include<iostream>
#include<math.h>
#include<conio.h>

void calculo(int cod,float price,float pricetotal,int quant){
	
	switch (cod){
		case 1001:
			pricetotal=5.32*quant;
			printf("\nO cliente te deve R$%.2f!",pricetotal);
		break;
		case 1324:
			pricetotal=6.45*quant;
			printf("\nO cliente te deve R$%.2f!",pricetotal);
		break;
		case 6548:
			pricetotal=2.37*quant;
			printf("\nO cliente te deve R$%.2f!",pricetotal);
		break;
	}
}

int main(){
	
	int cod,quant;
	float price,pricetotal;
	
	printf("Informe o código do produto:\n1001- R$5,32(PRODUTO A)\n1324- R$ 6,45(PRODUTO B)\n6548- R$ 2,37(PRODUTO C)\nResposta: ");
	scanf("%d",&cod);
	printf("\nAgora informe a quantidade do mesmo produto que foram comprados: ");
	scanf("%d",&quant);
	
	calculo(cod,price,pricetotal,quant);
	
getch();
return 0;
	
}
