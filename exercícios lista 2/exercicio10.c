#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    //declaração das variáveis
    float n1,n2;
    int menu;
        
    //inicio do programa

    do{
      printf("\nEscolha uma opção: \n 1 - Soma\n 2 - Subtração\n 3 - Multiplicação\n 4 - Divisão\n 0 - Sair\n\n");
      scanf("%i",&menu);
      
      if(menu > 0 && menu < 5){
        printf("Digite dois valores: \n");
        scanf("%f%f",&n1,&n2);
      }

      switch(menu){
        
        case 0:
        printf("fechando a aplicação\n");
        break;

        case 1:
        printf("A soma é: %f\n",n1+n2);
        break;

        case 2:
        printf("A subtração é: %f\n",n1-n2);
        break;

        case 3:
        printf("A multiplicação é: %f\n",n1*n2);
        break;

        case 4:
        while(n2 == 0){
          printf("Não existe divisão por 0, informe outro número: ");
          scanf("%f",&n2);
        }
        printf("A divisão é: %f\n",n1/n2);
        break;

        default:
        printf("Opção inválida, selecione outra opção");              
      }
    }while(menu != 0);
  }