#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    //declaração das variáveis
    int n1,t1;
        
    //inicio do programa
    printf("\n Digite a idade do trabalhador: \n");
    scanf("%i",&n1);

    printf("\n Digite o tempo de serviço: \n");
    scanf("%i",&t1);


    //Processamento dos dados

    if(n1 >= 65 || t1 >=30){
      printf("\n O trabalhador pode se aposentar.");
    }else if(n1>=60 && t1 >=25){
      printf("\n O trabalhador pode se aposentar.");      
    }else{
      printf("\n O trabalhador não pode se aposentar.");
    }
}