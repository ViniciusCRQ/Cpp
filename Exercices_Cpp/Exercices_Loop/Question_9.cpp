/*Question_9
Em uma eleição presidencial existem quatro candidatos. Os votos são informados
através de códigos. Os dados utilizados para a contagem dos votos obedecem à
seguinte codificação:
- 1,2,3,4 = voto para os respectivos candidatos;
- 5 = voto nulo;
- 6 = voto em branco;
Elabore um algoritmo que leia o código do candidato em um voto. Calcule e escreva:
- total de votos para cada candidato;
- total de votos nulos;
- total de votos em branco;
Como finalizador do conjunto de votos, tem-se o valor 0. */

#include <iostream>
#include <conio.h>

void calc (int chose,int &A,int &B,int &C,int &D,int &E,int &F){
	
	if ( chose == 1 )
		A ++;
	else if ( chose == 2 )
		B ++;
	else if ( chose == 3 )
		C ++;
	else if ( chose == 4 )
		D ++;
	else if ( chose == 5 )
		E ++;
	else if ( chose == 6 )
		F ++;
	else if ( chose > 6 ){
		printf ("Condidato(a) invalido,reinicie o programa e tente novamente mais tarde!");
		exit (0);
	}
}

int main(){
	
	int chose=1,A=0,B=0,C=0,D=0,E=0,F=0;
	
	while (chose != 0 ){
		printf ("\tMENU DE VOTAÇÃO\n\n====Opções====:\n1-Candidato 1\n2- Candidato 2\n3- Candidato 3\n4- Candidato 4\n5- Votar Nulo\n6- Votar em Branco\n0- Finalizar contagem\n\nSeu Voto:");
		scanf("%d",&chose);
		calc (chose,A,B,C,D,E,F);
		system("cls");
	}
	
	printf ("A contagem de votos se deu assim:\n1- %d\n2- %d\n3- %d\n4- %d\nNulo- %d\nBranco- %d ",A,B,C,D,E,F); 
	
getch();
return 0;	
}
