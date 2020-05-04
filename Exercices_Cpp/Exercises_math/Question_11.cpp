//Questão 11
#include <iostream>
#include <math.h>
#include <conio.h>
int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float dias,meses,anos;
	
	printf("Dias sem acidentes:");
	scanf("%f",&dias);
	
	meses=dias/30;
	anos=meses/12;	
	
	printf("A fabrica está ha %.2f meses e %.2f anos sem ocorrer nenhum acidente!", meses,anos);
	
	getch();
	return 0;
}