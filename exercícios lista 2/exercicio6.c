#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    //declaração das variáveis
    int num,soma=0;
    
    //inicio do programa
    printf("\n Digite um número: \n");
    scanf("%i",& num);

    //Processamento dos dados
    if(num>0){
       while(num>0){
       soma=soma+num%10;
       num=num/10;
       }
       printf("A soma dos algarismos é:%i",soma);
   }else{
       printf("O número é invalido");
   }
   return 0; 
}