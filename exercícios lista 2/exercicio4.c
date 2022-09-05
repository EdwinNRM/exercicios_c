#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    //declaração das variáveis
    float n1,n2;
    
    //inicio do programa
    printf("\n Digite o salário do funcionário: \n");
    scanf("%f",& n1);

    printf("\n Digite o valor da prestação: \n");
    scanf("%f",& n2);

    //Processamento dos dados
    if (n2 >= n1*0.2){
    printf("\n Empréstimo não concedido\n");
    
    }else{
    printf("\n Empréstimo concedido \n");    
    }

}