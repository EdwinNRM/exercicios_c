#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
 int a,b,c,menu;
 
	printf("Digite 3 números\n");
	scanf("%i %i %i",&a,&b,&c);

    if ( a > c){
   	int tmp = c;
   	c = a;
   	a = tmp;
   }
   
   if (a > b){
   	int tmp = b;
   	b = a;
   	a = tmp;
   }
   
   if ( b > c){
   	int tmp = c;
   	c = b;
   	b = tmp;
   }

   printf("%i %i %i \n",a,b,c);
}
