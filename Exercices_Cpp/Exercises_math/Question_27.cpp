//Quest�o_27
#include <iostream>
#include <math.h>
#include <conio.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float d1,d2,q;
	
	printf("Inforte o dividendo:\n");
	scanf("%f",&d1);
	printf("Agora informe o divisor:\n");
	scanf("%f",&d2);
	
	if(d2==0){
		printf("N�o h� como dividir um n�mero por 0!");
		return 0;
	}else{
	q=d1/d2;
	printf("O quociente da divis�o � :\n%.2f",q);}
	
	getch();
	return 0;
}
