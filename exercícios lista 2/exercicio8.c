#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    //declaração das variáveis
    int p1,p2,p3;
    float n1,n2,n3,media;

    p1 = 2;
    p2 = 3;
    p3 = 5;

    
    //inicio do programa
    printf("\n Digite a nota do trabalho de laboratório: \n");
    scanf("%f",& n1);

    printf("\n Digite a nota da avaliação semestral: \n");
    scanf("%f",& n2);

    printf("\n Digite a nota do exame final: \n");
    scanf("%f",& n3);

    //Processamento dos dados
    media = ((n1*p1+n2*p2+n3*p3)/(p1+p2+p3));

    if(media > 4.9){
       printf("Aluno aprovado, sua média foi:%f",media);
    }else if(media <= 2.9){
       printf("Aluno de reprovado, sua média foi:%f",media);
    }else{
       printf("Aluno de recuperação, sua média foi:%f",media);
    }
   return 0; 
}