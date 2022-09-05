#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    //declaração das variáveis
    int menu;
    double n1,n2,n3,geo,result,pon,har,ari;
        
    //inicio do programa
    do{
      printf("\nEscolha uma opção: \n 1 - Média Geométrica\n 2 - Média Ponderada\n 3 - Média Harmônica\n 4 - Média Aritimética\n 0 - Sair\n\n");
      scanf("%i",&menu);

      if(menu > 0 && menu < 5){
      printf("\n Digite três números inteiros: \n");
      scanf("%lf%lf%lf",&n1,&n2,&n3);
      }

      if(n1 <= 0 || n2 <= 0 || n3 <= 0){
      printf("\n Números inválidos! Digite três números inteiros: \n");
      scanf("%lf%lf%lf",&n1,&n2,&n3);
      }

    //Processamento dos dados
      result = n1*n2*n3;
      geo = cbrt(result);
      pon =(((n1+2)*(n2+3)*(n3))/6);
      har = (1/((1/n1)+(1/n2)+(1/n3)));
      ari = ((n1+n2+n3)/3);  

      switch (menu)
      {
      case 0:
        printf("fechando a aplicação\n");
        break;

      case 1:
        printf("A média geométrica dos números é: %lf",geo);
        break;

      case 2:
        printf("A média ponderada dos números é: %lf",pon);
        break;
      
      case 3:
        printf("A média harmônica dos números é: %lf",har);
        break;

      case 4:
        printf("A média aritimética dos números é: %lf",ari);
        break;
                                
      default:
        printf("Opção inválida, selecione outra opção");
      }

    }while(menu != 0);
}