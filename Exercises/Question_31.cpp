//QUest�o 30
#include <iostream>
#include <math.h>
#include <conio.h>

//tentei fazer com outras fun��es mas nn deu certo, fiquei algum tempo procurando o erro e nn consegui encontra-lo;
//COnsegui encontrar, o problema estava em eu colocar um printf ("Seu pesoo caso engorde 15% ser� de %.2f",pesof); Nesse caso o 15% dava erro com o comando;

/*void emagrece(float &pesof, float &pesoi){
	pesof=pesoi/100;
	pesof*=80;
}
void engorda(float &pesof,float &pesoi,int &i){
	i=pesoi/100;
	i=i*15;
	pesof=pesoi+i;
}*/

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float pesof,pesoi;
	int i;
	
	printf("Informe seu peso atual:");
	scanf("%f",&pesoi);
	
	printf("Agora nos informe se vc pretende engordar ou emagrecer. Digite 1 p/ emagrecer e 2 p/ engordar");
	scanf("%d",&i);
	
	if (i==1){
		pesof=pesoi/100;
		pesof*=80;
		printf("Seu peso final ser� de:%.2f",pesof);
	}
	else if (i==2){
		pesof=pesoi/100;
		pesof=pesof*115;
		printf("Seu peso, caso engorde ser� de %.2f",pesof);
	}
	else {
		printf("Digite um valor v�lido entre 1 e 2 para decidir entre as vari�veis!");
		return 0;
	}	


	getch();
	return 0;

}



