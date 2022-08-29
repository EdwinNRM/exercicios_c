#include <stdio.h>
#include <math.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    
    //declaração das variáveis
    float area,raio,pi;
    
    //inicio do programa
    printf("\n Digite o valor do raio da circunferência: \n");
    scanf("%f",&raio);

    //Processamento dos dados
    pi = 3.1415;
    area = (pi * raio * raio);

    //Resposta

    printf("\n O valor da área da circunferência é: %f\n",area);
}