/*
Practica1.1
suma resta multiplicacion y division con denominador 0
Rincon Resendiz Angel Alexis
*/
#include<stdio.h>
#include<conio.h>
int main(void)
{
printf("1.-suma\n");
printf("2.-resta\n");
printf("3.-multiplicacion\n");
printf("4.-divicion\n");
printf("introduce una opcion\n");
int opt;
scanf("%d",&opt);
int a;
int b;
printf("introduce la primera cantidad");
scanf("%d",&a);
printf("introduce la segunds cantida");
scanf("%d",&b);
int c;
if(opt==1){
		c=a+b;
	}
	if(opt==2){
		c=a-b;
	}
	if (opt==3){
		c=a*b;
	}
	if (b==0){
		printf("digite otro numero diferente de 0");
	}
	else {
		c=a/b;
	}
	printf("El resultado es:%d",c);
}

