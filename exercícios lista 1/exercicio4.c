#include <stdio.h>
#include <math.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    
    //declaração das variáveis
    float s1,s2,aumento;
    
    //inicio do programa
    printf("\n Digite o salário do funcionário: \n");
    scanf("%f",&s1);

    printf("\n Digite o percentual de aumento: \n");
    scanf("%f",&aumento);

    //Processamento dos dados

    s2 = s1+(s1*(aumento/100));

    //Resposta

    printf("\n O novo salário com aumento é: %f\n",s2);

}