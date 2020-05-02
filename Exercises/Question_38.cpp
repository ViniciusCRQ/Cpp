//Questão 38
#include <iostream>
#include <math.h>
#include <conio.h>

void anos(int &anon,int &anoa,int &totala){
	
	totala=anoa-anon;
}
void meses(int &anon,int &anoa,int &totalm){
	
	totalm=anoa-anon;
	totalm*=12;
}
void semanas(int &anon,int &anoa,int &totals){
	
	totals=anoa-anon;
	totals*=48;
}
void dias(int &anon,int &anoa, int &totad){
	
	totad=anoa-anon;
	totad*=365;
}

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int anon,anoa,totala,totalm,totals,totad;
	
	printf("Informe o ano em que vc nasceu:\n");
	scanf("%d",&anon);
	printf("\nAgora informe o ano em que se encontra:\n");
	scanf("%d",&anoa);
	
	anos(anon,anoa,totala);
	meses(anon,anoa,totalm);
	semanas(anon,anoa,totals);
	dias(anon,anoa,totad);
	
	printf("\nVocê já viveu %d anos,%d meses,%d semanas e %d dias na sua vida!",totala,totalm,totals,totad);
	
	getch();
	return 0;
}
