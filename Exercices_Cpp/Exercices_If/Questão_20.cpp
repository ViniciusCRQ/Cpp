//Questão_20

#include <iostream>
#include <math.h>
#include <conio.h>

void calculo(int n1,int n2,int n3){
	
	if (n1<n2 && n2<n3){
		printf("%d-%d-%d",n1,n2,n3);
	}
	else if (n2<n1 && n1<n3){
		printf("%d-%d-%d",n2,n1,n3);
	}
	else if (n1<n3 && n3<n2){
		printf("%d-%d-%d",n1,n3,n2);
	}
	else if (n2<n3 && n3<n1){
		printf("%d-%d-%d",n2,n3,n1);
	}
	else if (n3<n1 && n1<n2){
		printf("%d-%d-%d",n3,n1,n2);
	}
	else if (n3<n2 && n2<n1){
		printf("%d-%d-%d",n3,n2,n1);
	}
	else {
		printf("Dados não válidos!");
	}
}

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int n1,n2,n3;
	
	printf("Informe o primeiro numero:\n");
	scanf("%d",&n1);
	printf("Informe o segundo numero:\n");
	scanf("%d",&n2);
	printf("Informe o terceiro numero:\n");
	scanf("%d",&n3);
	
	calculo(n1,n2,n3);
	
getch();
return 0;
}
