#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int i,acertos=0;
float a,b,soma,resp;

int main()
{
for(i=0;i<5;i++){
 a = (rand() % 100) + 1;
 b = (rand() % 100) + 1;
 soma = a+b;
 resp = soma;
 printf("qual é a soma de %f + %f?\n\n",a,b);
 scanf("%f",&resp);
 if (resp != soma)
  printf("Resposta errada. a resposta certa é: %f\n",soma);
 else
  printf("Resposta Correta!\n");
 acertos ++;

}
printf("Você acertou %d respostas\n",acertos);
return 0;

}