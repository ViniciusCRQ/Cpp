//Quest�o 14
#include<iostream>
#include<math.h>
#include<conio.h>

void calculo(int cod,float salarionov,float salarioant,float dif){

	if(cod==101){
		salarionov=salarioant/100;
		salarionov*=110;
		dif=salarionov-salarioant;
		printf("O valor do novo sal�rio deste Gerente � de R$%.2f ,o antigo era R$%.2f, sendo assim a diferen�a � de %.2f!",salarionov,salarioant,dif);
	}
	else if (cod==102){
		salarionov=salarioant/100;
		salarionov*=120;
		dif=salarionov-salarioant;
		printf("O valor do novo sal�rio deste Engenheiro � de R$%.2f ,o antigo era R$%.2f, sendo assim a diferen�a � de %.2f!",salarionov,salarioant,dif);
	}
	else if (cod==103){
		salarionov=salarioant/100;
		salarionov*=130;
		dif=salarionov-salarioant;
		printf("O valor do novo sal�rio deste T�cnico � de R$%.2f, o antigo era R$%.2f, sendo assim a diferen�a � de %.2f!",salarionov,salarioant,dif);
	}
	else {
		salarionov=salarioant/100;
		salarionov*=140;
		dif=salarionov-salarioant;
		printf("O valor do novo sal�rio deste Funcion�rio � de R$%.2f, o antigo era R$%.2f, sendo assim a diferen�a � de %.2f!",salarionov,salarioant,dif);
	}

}

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int cod;
	float salarioant,salarionov,dif;
	
	printf("Informe o setor que o funcion�rio trabalha:\n");
	scanf("%d",&cod);
	printf("Agora informe o sal�rio atual deste funcion�rio:\n");
	scanf("%f",&salarioant);
	
	calculo(cod,salarionov,salarioant,dif);
	
getch();
return 0;
}
