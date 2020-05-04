//Questão 28
#include <iostream>
#include <math.h>
#include <conio.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float nota1,nota2,media;
	
	printf("Informe a nota do 1° aluno:\n");
	scanf("%f",&nota1);
	printf("Informe a nota do 2° aluno:\n");
	scanf("%f",&nota2);
	
	media=nota1*2+nota2*3;
	media/=2;
	
	printf("A média ponderada das notas desses dois alunos é: %.2f",media);
	
	getch();
	return 0;
}
