//Actividad 7
/* Ingresar cuatro valores, 
sumar el 1ro y el 2do, el 3ro y el 4to, 
indicar e imprimir cúal de esta sumas es mayor */

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

int main() {

int valor1;
int valor2;
int valor3;
int valor4;

printf("\nPor favor, ingrese un numero:  ");
scanf("%d",&valor1);
printf("\nPor favor, ingrese otro numero:  ");
scanf("%d",&valor2);
printf("\nPor favor, ingrese otro numero:  ");
scanf("%d",&valor3);
printf("\nPor favor, ingrese otro numero:  ");
scanf("%d",&valor4);

int suma1=valor1+valor2;
int suma2=valor3+valor4;

printf("\nVamos a realizar dos sumas.");
printf("\nSumaremos los dos primeros numeros:");
printf("\n%d + %d = %d",valor1,valor2,suma1);
printf("\nTambien sumaremos los otros dos numeros:");
printf("\n%d + %d = %d",valor3,valor4,suma2);

if (suma1>suma2){
	printf("\nEl resultado de la primera suma es mayor.");
}
if (suma1<suma2){
	printf("\nEl resultado de la segunda suma es mayor.");	
}
if (suma1==suma2){
	printf("\nLas dos sumas dan el mismo resultado.");	
}

return 0;
}
