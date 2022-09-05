#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");

float salario,reajuste,bonus,final;
int ano;

printf("\nDigite o salário do funcionário: \n");
scanf("%f",&salario);

if(salario <= 0){
printf("\nValor Inválido! Digite o salário do funcionário: \n");
scanf("%f",&salario);	
}

printf("\nDigite o tempo de serviço em anos: \n");
scanf("%i",&ano);

if(ano <= 0){
printf("\nValor Inválido! Digite o tempo de serviço em anos: \n");
scanf("%i",&ano);
}

// tratativa do salario

if(salario < 500){
	reajuste = salario * 0.25;

}else if(salario >= 500 && salario < 1000){
	reajuste = salario * 0.20;

}else if(salario >= 1000 && salario < 1500){
	reajuste = salario * 0.15;

}else if(salario >= 1500 && salario < 2000){
	reajuste = salario * 0.10;

}else{
	reajuste = 0;
	printf("\nFuncionário sem direito a reajuste\n");
}

// tratativa do tempo de casa
if(ano < 1){
	bonus = 0;
	printf("\nFuncionário sem direito a bonus\n");

}else if(ano >= 1 && ano < 4){
	bonus = 100;

}else if(salario >= 4 && salario < 7){
	bonus = 200;

}else if(salario >= 7 && salario < 10){
	bonus = 300;

}else{
	bonus = 500;
}

final = salario + reajuste + bonus;
printf("O valor final do salário do funcionário será de: R$ %f",final);

}
