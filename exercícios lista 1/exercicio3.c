#include <stdio.h>
#include <math.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    
    //declaração das variáveis
    float n1,n2,n3,p1,p2,p3,media;
    
    //inicio do programa
    printf("\n Digite a primeira nota: \n");
    scanf("%f",&n1);

    printf("\n Digite o primeiro peso: \n");
    scanf("%f",&p1);

    printf("\n Digite a segunda nota: \n");
    scanf("%f",&n2);

    printf("\n Digite o segundo peso: \n");
    scanf("%f",&p2);

    printf("\n Digite a terceira nota: \n");
    scanf("%f",&n3);

    printf("\n Digite o terceiro peso: \n");
    scanf("%f",&p3);
    
    //Processamento dos dados

    media = ((n1*p1+n2*p2+n3*p3)/(p1+p2+p3));

    //Resposta

    printf("\n A média ponderada é: %f \n",media);

}