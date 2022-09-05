#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    //declaração das variáveis
    float n1,resultado;
    
    //inicio do programa
    printf("\n Digite o número: \n");
    scanf("%f",&n1);

    //Processamento dos dados
    if (n1 > 0) {
    resultado = sqrt(n1);
    printf("\n A raiz quadrada do número é: %f\n",resultado);
    
    }else{
    printf("\n O número é inválido \n");    
    }
    system("pause");

}