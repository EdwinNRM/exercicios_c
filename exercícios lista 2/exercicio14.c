#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    //declaração das variáveis
    float km,l,media;
        
    //inicio do programa
    printf("\n Digite a quantidade de km percorridos: \n");
    scanf("%f",&km);

    printf("\n Digite quantos litros de combustível foram usados: \n");
    scanf("%f",&l);


    //Processamento dos dados

    media =km/l;

    if(media < 8){
      printf("\nVenda o carro!");

    }else if(media > 12){
      printf("\nCarro super econômico!");

    }else{
      printf("\nCarro econômico!");
    }
}