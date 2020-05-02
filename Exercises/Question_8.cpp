//Questão 8
#include <iostream>
#include <math.h>
#include <conio.h>
int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float aluno1,aluno2,aluno3,soma,media;
	
	printf("Digite a nota do 1° aluno: ");
	scanf("%f",&aluno1);
	printf("\nDigite a nota do 2° aluno: ");
	scanf("%f",&aluno2);
	printf("\nDigite a nota do 3° aluno: ");
	scanf("%f",&aluno3);
	
	soma=aluno1*1+aluno2*2+aluno3*3;
	media=soma/6;
	
	printf("\nA média ponderada das notas é: %.2f",media);
	
	getch();
	return 0;
	
}