//Questão 17 
#include <iostream>
#include <math.h>
#include <conio.h>
int main(){
	
	setlocale(LC_ALL,"portuguese");
	
//Essa daq eu acho que lembro da escola kkk c°/5=f°-32/9
	
	float c,f,total,div;
	
	printf("Digite uma temperatura em °Celsius:");
	scanf("%f",& c);
	
	div=1.8; //9/5
	f=c*div;
	total=f+32;
	
	printf("\nO valor da temperatura, em °F é:\n%.2f°F ",total);
	
	getch();
	return 0;

}
	
	
