#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");

float altura, peso,imc;

printf("\nDigite a sua altura: \n");
scanf("%f",&altura);

printf("\nDigite seu peso: \n");
scanf("%f",&peso);

imc = peso / (altura * altura);

if(imc < 18.5){
printf("seu imc é: %f e você está abaixo do peso!",imc);
}else if(imc > 18.5 && imc < 24.9 ){
printf("seu imc é: %f e você está saudável!",imc);
}else if(imc > 24.9 && imc < 29.9 ){
printf("seu imc é: %f e você está com peso em excesso!",imc);	
}else if(imc > 29.9 && imc < 34.9 ){
printf("seu imc é: %f e você está com obesidade grau 1!",imc);	
}else if(imc > 34.9 && imc < 39.9 ){
printf("seu imc é: %f e você está com obesidade grau 2 (severa)!",imc);		
}else{
printf("seu imc é: %f e você está com obesidade grau 3 (mórbida)!",imc);			
}
}
