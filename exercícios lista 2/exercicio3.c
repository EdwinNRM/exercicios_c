#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    //declaração das variáveis
    int n1;
    
    //inicio do programa
    printf("\n Digite o número: \n");
    scanf("%f",& n1);

    //Processamento dos dados
    if (n1 % 2 == 0){
    printf("\n O número é par\n");
    
    }else{
    printf("\n O número é impar \n");    
    }

}