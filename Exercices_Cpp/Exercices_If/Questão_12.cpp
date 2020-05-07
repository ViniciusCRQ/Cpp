//Questão 12

#include <iostream>
#include <math.h>
#include <conio.h>

int main(){
	
	
	int chose;
	float h,peso_i;
	
	printf("Informe seu sexo:\n1-Mulher\n2-Homem\nResposta:");
	scanf("%d",&chose);
	printf("\nAgora informe a sua altura:\n");
	scanf("%f",&h);
	
	if(chose==1){
		peso_i=62.1*h;
		peso_i-=44.7;
	}
	else if(chose==2){
		peso_i=72.7*h;
		peso_i-=58;
	}
	else{
		printf("Escolha inválida, tente novamente");
	}
	
	
	printf("\nO seu peso ideal seria:%.2f",peso_i);
	
getch();
return 0;
}


