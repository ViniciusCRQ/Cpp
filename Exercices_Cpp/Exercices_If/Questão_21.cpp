//Quest�o 21

#include <iostream>
#include <conio.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	
	bool a;
	int n,min=20,max=90;
	
	printf("\ninforme o numero:\n");
	scanf("%d",&n);
	
	a=n>=20 && n<=90;

	if (a){
		printf("\nO n�mero est� entre 20 e 90!\n");
	}
	else {
		printf("\nO numero N�O est� entre 20 e 90!\n");
	}

getch();
return 0;
}
