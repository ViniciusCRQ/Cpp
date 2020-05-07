//Questão 14
#include<iostream>
#include<math.h>
#include<conio.h>

void calculo(int cod,float salarionov,float salarioant,float dif){

	if(cod==101){
		salarionov=salarioant/100;
		salarionov*=110;
		dif=salarionov-salarioant;
		printf("O valor do novo salário deste Gerente é de R$%.2f ,o antigo era R$%.2f, sendo assim a diferença é de %.2f!",salarionov,salarioant,dif);
	}
	else if (cod==102){
		salarionov=salarioant/100;
		salarionov*=120;
		dif=salarionov-salarioant;
		printf("O valor do novo salário deste Engenheiro é de R$%.2f ,o antigo era R$%.2f, sendo assim a diferença é de %.2f!",salarionov,salarioant,dif);
	}
	else if (cod==103){
		salarionov=salarioant/100;
		salarionov*=130;
		dif=salarionov-salarioant;
		printf("O valor do novo salário deste Técnico é de R$%.2f, o antigo era R$%.2f, sendo assim a diferença é de %.2f!",salarionov,salarioant,dif);
	}
	else {
		salarionov=salarioant/100;
		salarionov*=140;
		dif=salarionov-salarioant;
		printf("O valor do novo salário deste Funcionário é de R$%.2f, o antigo era R$%.2f, sendo assim a diferença é de %.2f!",salarionov,salarioant,dif);
	}

}

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int cod;
	float salarioant,salarionov,dif;
	
	printf("Informe o setor que o funcionário trabalha:\n");
	scanf("%d",&cod);
	printf("Agora informe o salário atual deste funcionário:\n");
	scanf("%f",&salarioant);
	
	calculo(cod,salarionov,salarioant,dif);
	
getch();
return 0;
}
