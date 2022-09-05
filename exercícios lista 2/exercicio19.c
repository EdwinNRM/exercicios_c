#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");

float vlr_prd,vlr_novo;

printf("\nDigite o valor atual do produto: ");
scanf("%f",&vlr_prd);

if(vlr_prd<0){

printf("\nValor inválido!\nDigite o valor atual do produto: ");
scanf("%f",&vlr_prd);

}else{

}


if(vlr_prd<50){

	vlr_novo=vlr_prd + (vlr_prd*0.05);

}else if(vlr_prd>100){

	vlr_novo=vlr_prd + (vlr_prd*0.15);

}else{
	vlr_novo=vlr_prd + (vlr_prd*0.10);
}

if(vlr_novo<80){
	printf("\nValor do produto é R$ %f e ele está Barato!",vlr_novo);
}else if(vlr_novo >= 80 && vlr_novo <= 120){
	printf("\nValor do produto é R$ %f e ele está normal!",vlr_novo);
}else if(vlr_novo > 120 && vlr_novo <= 200){
	printf("\nValor do produto é R$ %f e ele está caro!",vlr_novo);
}else{
	printf("\nValor do produto é R$ %f e ele está muito caro!",vlr_novo);
}
}
