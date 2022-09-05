#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    //declaração das variáveis
    int n1,n2,n3;
        
    //inicio do programa
    printf("\n Digite os três valores: \n");
    scanf("%i %i %i",&n1,&n2,&n3);

    //Processamento dos dados

    if(n1 < n2 + n3 && n2 < n1 + n3 && n3 < n1 + n2){
      printf("Os números formam um triângulo: ");
      
      if(n1 == n2 && n1 ==n3){
        printf("Equilatero\n");
      }else if(n1 == n2 || n1 == n3 || n2 == n3){
        printf("Isosceles\n");
      }else{
        printf("Escaleno\n");
      }

    }else{
      printf("Os números não formam um triângulo!!");
    }
}