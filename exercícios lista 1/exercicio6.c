#include <stdio.h>
#include <math.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    
    //declaração das variáveis
    float s1,s2;
    
    //inicio do programa
    printf("\n Digite o salário do funcionário: \n");
    scanf("%f",&s1);

    //Processamento dos dados

    s2 = s1+50-(s1*0.1);

    //Resposta

    printf("\n O salário a receber é: %f\n",s2);

}