//Questão 37
#include <iostream>
#include <math.h>
#include <conio.h>

//CUSTEI A FAZER COM O FOR KKKK, eu tava tentando usar a variavel NME no for ao invés do MULT

void tabuada(int &nme,int &result,int &mult){
	
	for (mult=1;mult<11;mult++){
		result=nme*mult;
		printf("\nO valor de %d * %d é igual a : %d",nme,mult,result);
	}
	
}

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int nme,mult,result;
	
	printf("Digite o n° que você deseja saber a tabuada: \n");
	scanf("%d",&nme);
	
	tabuada(nme,result,mult);
	
	getch();
	return 0;
}
