#include <stdio.h>
#include <math.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    
    //declaração das variáveis
    float n1,n2,n3,juros;
    
    //inicio do programa
    printf("\n Digite o valor depositado: \n");
    scanf("%f",&n1);

    printf("\n Digite a taxa de juros: \n");
    scanf("%f",&juros);

    //Processamento dos dados

    n2 = n1+(n1*(juros/100));
    n3 = n1*(juros/100);

    //Resposta

    printf("\n O valor do rendimento é: %f\n",n3);
    printf("\n O valor total do investimento é: %f\n",n2);

}