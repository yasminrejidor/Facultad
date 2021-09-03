//Actividad 4
/* 4.	Ingresar dos valores y 
realizar e imprimir la resta del mayor menos el menor */

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

int main() {

int valor1;
int valor2;

printf("Por favor, ingrese un numero:  ");
scanf("%d",&valor1);
printf("\nPor favor, ingrese otro numero:  ");
scanf("%d",&valor2);

if(valor1 != valor2){
	if(valor1>valor2){
		int resta1 = valor1 - valor2;
		printf("\nLa resta del numero mas grande menos el mas pequeño es %d",resta1);
	}
	else {
		int resta2 = valor2 - valor1;
		printf("\nLa resta del numero mas grande menos el mas pequeño es %d",resta2);
	}
}

else {
	printf("\nLos dos numeros son iguales.\nEl resultado es 0.");
}

return 0;
}
