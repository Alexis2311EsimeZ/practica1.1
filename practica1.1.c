/*
Practica1.1
suma y resta
Rincon Resendiz Angel Alexis
*/
#include<stdio.h>
#include<conio.h>
int main(void)
{
printf("1.-suma\n");
printf("2.-resta\n");
printf("introduce 1 para la suma\n");
int opt;
scanf("%d",&opt);
int a;
int b;
printf("introduce la primera cantidad");
scanf("%d",&a);
printf("introduce la segunds cantida");
scanf("%d",&b);
int c;

	if (opt==1){
		c=a+b;
		}
		else{
			c=a-b;
		}
		printf("el resultado de%d",c);

}
