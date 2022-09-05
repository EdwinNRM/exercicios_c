#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    //declaração das variáveis
    int n1;
        
    //inicio do programa
    printf("\n Digite um valor: \n");
    scanf("%i",& n1);

    //Processamento dos dados
    
    int const a = (0 == n1 % 3);
    int const b = (0 == n1 % 5);

    if( a && !b){
      printf ("Divisivel por 3 mas não por 5 \n");
    }else if( b && !a){
      printf ("Divisivel por 5 mas não por 3 \n");
    }else if( b && a){
      printf ("Divisivel por 3 e 5 \n");
    }else if(a != b){
      printf ("Divisivel por 3 ou por 5 \n");
    }else{
      printf ("Não é divisivel por 3 ou 5 \n");
    }

   return 0; 
}