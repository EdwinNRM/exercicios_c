#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    //declaração das variáveis
    int n1;
        
    //inicio do programa
    printf("\n Digite o dia da semana em número decimal (por exemplo 1 para Domingo, 2 para segunda): \n");
    scanf("%i",& n1);

    //Processamento dos dados
   switch(n1){

      case 1:
         printf("O dia da semana escolhido foi Domingo");
      break;

      case 2:
         printf("O dia da semana escolhido foi Segunda-Feira");
      break;

      case 3:
         printf("O dia da semana escolhido foi Terça-Feira");
      break;
      
      case 4:
         printf("O dia da semana escolhido foi Quarta-Feira");
      break;

      case 5:
         printf("O dia da semana escolhido foi Quinta-Feira");
      break;

      case 6:
         printf("O dia da semana escolhido foi Sexta-Feira");
      break;

      case 7:
         printf("O dia da semana escolhido foi Domingo");
      break;

      default:
      printf("Dia escolhido é inválido, deve ser entre 1 - 7!!!!");
   }   
   return 0; 
}