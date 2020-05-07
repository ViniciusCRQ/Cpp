//Questão 10

#include <iostream>
#include <math.h>
#include <conio.h>
#include <string.h>

int calculo(int nm1,int nm2,int nm3){

	if (nm2<nm1<nm3 || nm3<nm1<nm3){
		printf("A mediana é %d",nm1);
	}
	else if (nm1<nm2<nm3 || nm3<nm2<nm1){
		printf("A mediana é %d",nm2);
	}
	else if (nm2<nm3<nm1 || nm1<nm3<nm2){
		printf("A mediana é %d",nm3);
	}
}
int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int nm1,nm2,nm3;

	printf("Informe o 1° número:\n");
	scanf("%d",&nm1);
	printf("\nInforme o 2° número:\n");
	scanf("%d",&nm2);
	printf("\nInforme o 3° número:\n");
	scanf("%d",&nm3);

	calculo(nm1,nm2,nm3);

getch();
return 0;
}

