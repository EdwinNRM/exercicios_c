#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    //declaração das variáveis
    int p1,p2,p3;
    float n1,n2,n3,media;

    p1 = 1;
    p2 = 1;
    p3 = 2;

    
    //inicio do programa
    printf("\n Digite a nota da primeira prova: \n");
    scanf("%f",& n1);

    printf("\n Digite a nota da segunda prova: \n");
    scanf("%f",& n2);

    printf("\n Digite a nota da terceira prova: \n");
    scanf("%f",& n3);

    //Processamento dos dados
    media = ((n1*p1+n2*p2+n3*p3)/(p1+p2+p3));

    if(media >= 60){
       printf("Aluno aprovado, sua média foi:%f",media);
    }else{
       printf("Aluno reprovado, sua média foi:%f",media);
    }
   return 0; 
}