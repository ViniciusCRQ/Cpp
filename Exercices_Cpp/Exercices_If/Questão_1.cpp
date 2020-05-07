//QuestÃ£o 1

#include <iostream>
#include <math.h>
#include <conio.h>

void resto(int A,int B,int x){
  
  x=A%B;
   switch(x){
    case 0:
    printf("Os números são divisíveis!");
    break;
    default :
    printf("Os números não são divisiveis");
    break;
  }

}
int main(){

  setlocale(LC_ALL,"portuguese");

  int A,B;
  int x;

  printf("\nInforme um valor para ser o dividendo:\n");
  scanf("%d",&A);
  printf("\nAgora informe o valor do divisor:\n");
  scanf("%d",&B);

  resto(A,B,x);

  
getch();
return 0;
}
