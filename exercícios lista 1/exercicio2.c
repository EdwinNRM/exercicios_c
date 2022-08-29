#include <stdio.h>
#include <math.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    
    //declaração das variáveis
    float n1,n2,n3,media;
    
    //inicio do programa
    printf("\n Digite a primeira nota: \n");
    scanf("%f",&n1);
    printf("\n Digite a segunda nota: \n");
    scanf("%f",&n2);
    printf("\n Digite a terceira nota: \n");
    scanf("%f",&n3);
    
    //Processamento dos dados

    media = (n1+n2+n3)/3;

    //Resposta

    printf("\n A média é: %f \n",media);

}