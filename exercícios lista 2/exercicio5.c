#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    //declaração das variáveis
    float n1,p;
    char sexo;
    
    //inicio do programa
    printf("\n Digite a sua altura: \n");
    scanf("%f",& n1);

    printf("\n Digite F para sexo feminino e M para sexo masculino: \n");
    scanf("%s",& sexo);

    //Processamento dos dados
    if (sexo == 'f'){
    p = (72.7 *n1) - 44.7;
    printf("\n Seu peso ideal é: %f\n",p);
    
    }else if(sexo == 'm'){
    p = (72.7 *n1) - 58;
    printf("\n Seu peso ideal é: %f\n",p);    
    }else{
    printf("\n Opção inválida \n");    
    }

}