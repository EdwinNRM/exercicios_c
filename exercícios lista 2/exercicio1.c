#include <stdio.h>
#include <math.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    
    //declaração das variáveis
    float n1,n2,resultado;
    
    //inicio do programa
    printf("\n Digite o valor do primeiro número: \n");
    scanf("%f",&n1);

    printf("\n Digite o valor do segundo número: \n");
    scanf("%f",&n2);

    //Processamento dos dados
    if (n1 > n2) {
    resultado = n1;
    }else{
    resultado = n2;
    }

    //Resposta

    printf("\n O maior número é: %f\n",resultado);
}