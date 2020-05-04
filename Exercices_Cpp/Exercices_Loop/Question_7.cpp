/* Question 7
Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e
cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos
anos serão necessários para que Zé seja maior que Chico. */

#include <iostream>
#include <math.h>
#include <conio.h>


int main(){
	
	float agedif,ageC,ageZ;
	bool count;
	
	ageC= 150;
	ageZ= 110; 
	
	agedif = ageC - ageZ;
	
	if ( agedif < 0 ){
		count = true; 
	}
	else if (agedif >= 0){
		count = false;
	}
	
	while ( count = false ){
		ageC = ageC + 2;
		ageZ = ageZ + 3;	
	}
	
	printf ("%.2f anos",agedif);
	

getch();
return 0;	
}
