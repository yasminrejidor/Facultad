//Actividad 1
//Ingresar dos valores, indicar e imprimir si son iguales.
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

int main(){
	
	int valor1;
	int valor2;
	
	printf("Por favor ingrese un valor numerico:  ");
	scanf("%d",&valor1);
	printf("\nPor favor, ingrese otro valor numerico:  ");
	scanf("%d",&valor2);
	
	if (valor1 == valor2)
	{printf("\nLos valores son iguales.\n");}
	else
	{printf("\nLos valores son distintos.\n");
	}
	
return 0;
}
