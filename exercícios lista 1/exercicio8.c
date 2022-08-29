#include <stdio.h>
#include <math.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    
    //declaração das variáveis
    float area,base,altura;
    
    //inicio do programa
    printf("\n Digite o valor da base do triângulo: \n");
    scanf("%f",&base);

    printf("\n Digite o valor da altura do triângulo: \n");
    scanf("%f",&altura);

    //Processamento dos dados

    area = (base*altura)/2;

    //Resposta

    printf("\n O valor da área do triângulo é: %f\n",area);
}