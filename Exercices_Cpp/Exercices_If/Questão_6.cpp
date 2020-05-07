//Questão 6
#include <iostream>
#include <math.h>
#include <conio.h>
#include <string.h>

void calculo(float n1,float n2,float n3,float m,char aluno[15]){
	
	if (m>=6){
		printf("O aluno %s foi aprovado com uma média de %.1f",aluno,m);
	}
	if (m<6){
		printf("O aluno %s foi reprovado com uma média de %.1f",aluno,m);
	}


}

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	char aluno[15];
	float n1,n2,n3,m;
	
	printf("\nInforme o nome do aluno:\n");
	gets(aluno);
	setbuf(stdin,NULL);
	printf("\nDigite a primeira nota:\n");
	scanf("%f",&n1);
	printf("\nDigite a segunda nota:\n");
	scanf("%f",&n2);
	printf("\nDigite a terceira nota:\n");
	scanf("%f",&n3);
	
	m=n1+n2+n3;
	m/=3;
	
	calculo(n1,n2,n3,m,aluno);
	

getch();
return 0;	
}
