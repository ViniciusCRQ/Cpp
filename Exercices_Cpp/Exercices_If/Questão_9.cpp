//Questão 9

#include <iostream>
#include <math.h>
#include <conio.h>
#include <string.h>

int calculo(int idade){
	
	if (idade>=5 && idade<=7){
		printf("Essa pessoa está na categoria INFANTIL A!");
	}
	else if (idade>7 && idade<=10){
		printf("Essa pessoa está na categoria INFANTIL B!");
	}
	else if (idade>10 && idade<=13){
		printf("Essa pessoa está na categoria JUVENIL A!");
	}
	else if (idade>13 && idade<=17){
		printf("Essa pessoa está na categoria JUVENIL B!");
	}
	else {
		printf("Essa pessoa está na categoria ADULTO!");
	}
	
return idade;
}

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int idade;
	char nome[20];
	
	printf("Informe o nome do nadador:\n");
	gets(nome);
	printf("\nAgora informe a idade do mesmo:\n");
	scanf("%d",&idade);
	
	calculo(idade);
	
getch();
return 0;
}
