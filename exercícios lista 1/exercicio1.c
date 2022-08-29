#include <stdio.h>
#include <math.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    
    //declaração das variáveis
    int n1,n2,n3,n4,soma;
    
    //inicio do programa
    printf("\n Digite o primeiro número: \n");
    scanf("%i",&n1);
    printf("\n Digite o segundo número: \n");
    scanf("%i",&n2);
    printf("\n Digite o terceiro número: \n");
    scanf("%i",&n3);
    printf("\n Digite o quarto número: \n");
    scanf("%i",&n4);
    
    //Processamento dos dados

    soma = n1+n2+n3+n4;

    //Resposta

    printf("\n A soma dos número é: %i\n",soma);

}