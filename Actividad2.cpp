//Actividad 2
//2.	Ingresar un valor indicar e imprmir si es positivo, negativo o cero

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

int main(){
	
	int valor1;
	
	printf("Por favor, ingrese un valor:  \n");
	scanf("%d",&valor1);
	
	if(valor1 == 0){
		printf("El valor ingresado es 0");
	}
	
	else {
		if (valor1<0){
			printf("El numero es negativo.");
						}
		if (valor1>0){
			printf("El numero es positivo.");
		}
	}
	
return 0;
}
