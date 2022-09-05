#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");

float vlr_prd,vlr_novo;

printf("\nDigite o valor da venda: ");
scanf("%f",&vlr_prd);

if(vlr_prd<0){

printf("\nValor inválido!\nDigite o valor da venda: ");
scanf("%f",&vlr_prd);

}else{

}


if(vlr_prd<20000){

	vlr_novo=400 + (vlr_prd*0.14);
	printf("\nValor a ser pago é de R$ %f",vlr_novo);

}else if(vlr_prd < 40000 && vlr_prd >= 20000){

	vlr_novo=500 + (vlr_prd*0.14);	
	printf("\nValor a ser pago é de R$ %f",vlr_novo);

}else if(vlr_prd < 60000 && vlr_prd >= 40000){

	vlr_novo=550 + (vlr_prd*0.14);	
	printf("\nValor a ser pago é de R$ %f",vlr_novo);

}else if(vlr_prd < 80000 && vlr_prd >= 60000){

	vlr_novo=600 + (vlr_prd*0.14);	
	printf("\nValor a ser pago é de R$ %f",vlr_novo);

}else if(vlr_prd < 100000 && vlr_prd >= 80000){

	vlr_novo=650 + (vlr_prd*0.14);	
	printf("\nValor a ser pago é de R$ %f",vlr_novo);

}else{

	vlr_novo=700 + (vlr_prd*0.16);	
	printf("\nValor a ser pago é de R$ %f",vlr_novo);

}
}
