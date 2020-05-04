/*Question_10

Escreva um algoritmo que calcule a média aritmética das 3 notas dos alunos de uma
classe. O algoritmo deverá ler, além das notas, o código do aluno e deverá ser
encerrado quando o código for igual a zero.
*/
#include <iostream>
#include <conio.h>
	
int main (){
	
	int nn=1,id_aluno,chose=1;
	float nota,notat=0,notam;
	
	setlocale(LC_ALL,"portuguese");
	
	//MENU
	while (chose!=0){
		printf ("====MENU====\n\nOpções\n0- Sair do programa \n1- Adicionar um aluno e suas medias\n\nEscolha:");
		scanf ("%d",&chose);
		//REPETIÇÃO PRA CONTAGEM DE NOTAS
		if (chose == 1){
			printf ("Digite o código do Aluno: ");
			scanf ("%d",&id_aluno);
				for (nn=1;nn<4;nn++){
					printf ("Digita a %d° nota:",nn);
					scanf ("%f",&nota);
					notat += nota;
				}
			notam = notat / 3;
			printf ("A nota do aluno %d é : %.2f",id_aluno,notam);
			notam = 0;
			notat = 0;
			getch();
			system ("cls");
			}
		//SAIDA
		else {
			printf("Saindo do programa");
			}
}


getch();
return 0;
}

