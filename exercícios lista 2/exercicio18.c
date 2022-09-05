#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");

	int cod,qtd;
	float vlr,vlr_total;

	do{
	printf("\nBem vindo a lanchonete Good-Burguer, selecione um dos itens abaixo:\n");
	printf("-------------------------------------------------------------------\n");
	printf(" 100 - Cachorro quente - R$ 1,20\n 101 - Bauru Simples - R$ 1,30\n 102 - Bauru com Ovo - R$ 1,50 \n 103 - Hamburguer - R$ 1,20 \n 104 - Cheeseburguer - R$ 1,70\n 105 - Suco - R$ 2,20 \n 106 - Refrigerante - R$ 1,00\n 0 - Ir embora\n");
	printf("-------------------------------------------------------------------\n");

	scanf("%i",&cod);
	
	switch (cod){
	case 0:
	printf("\nObrigado por visitar o Good-Burguer até a próxima");
		break;
	
	case 100:
	vlr = 1.20;
		break;

	case 101:
	vlr = 1.30;
		break;

	case 102:
	vlr = 1.50;
		break;

	case 103:
	vlr = 1.20;
		break;

	case 104:
	vlr = 1.70;
		break;

	case 105:
	vlr = 2.20;
		break;

	case 106:
	vlr = 1.00;
		break;
		
      default:
        printf("\nOpção inválida, selecione outra opção");
      }
        printf("\n Digite a quantidade desejada: ");
		scanf("%i",&qtd);

		vlr_total = qtd*vlr;

		printf("\nO valor a ser pago é: %f\n\n",vlr_total);

	}while(cod!=0);
}
