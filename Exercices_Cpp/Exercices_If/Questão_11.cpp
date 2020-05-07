//Questão 12
#include <iostream>
#include <math.h>
#include <conio.h>

int calculo1(int chose,int chose2,float value){
	
	switch(chose){
		case 1:
			printf("Escolha quantos cachorros quentes você deseja:\n");
			scanf("%d",&chose2);
			value=chose2*1.1;
		break;
		case 2:
			printf("Escolha quantos baurus você deseja:\n");
			scanf("%d",&chose2);
			value=chose2*1.3;
		break;
		case 3:
			printf("Escolha quantos baurus c/ ovo você deseja:\n");
			scanf("%d",&chose2);
			value=chose2*1.5;
		break;
		case 4:
			printf("Escolha quantos hamburgueres você deseja:\n");
			scanf("%d",&chose2);
			value=chose2*1.1;
		break;
		case 5:
			printf("Saindo do Programa...");
			getch();
			exit(0);
		break;
}
printf("O cliente deve pagar R$%.2f!",value);

return chose;
}

int main(){

	float value;
	int chose,chose2;

	while(chose!=5){
		
	printf("\t\t<MENU>\n\n");
	printf("Escolha uma das opeções:\n");
	printf("1- Dogão\n");
	printf("2- Bauru\n");
	printf("3- Bauru c/ Ovo\n");
	printf("4- Hamburguer\n");
	printf("5- Sair do Programa\n");
	printf("Escolha:\n");	
	scanf("%d",&chose);
	
	calculo1(chose,chose2,value);
	getch();
	system("cls");
}
getch();
return 0;
}
