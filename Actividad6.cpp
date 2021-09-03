//Actividad 6
/*
Ingresar tres valores, sumarlos, calcular el promedio e indicar 
e imprimir cúal de estos valores es mayor al promedio 
*/

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

int main(){
	
	int valor1;
	int valor2;
	int valor3;
	
	printf("Por favor, ingrese un numero:  \n");
	scanf("%d",&valor1);
	printf("Por favor, ingrese otro numero:  \n");
	scanf("%d",&valor2);
	printf("Por favor, ingrese otro numero:  \n");
	scanf("%d",&valor3);
	
	int suma1 = valor1 + valor2 + valor3;
	int promedio1 = suma1 / 3;
	
	printf("\nEl promedio es %d",promedio1);
	
	if(valor1>promedio1){
		printf("\n%d es mayor que el promedio.",valor1);
	}
	if(valor2>promedio1){
		printf("\n%d es mayor que el promedio.",valor2);
	}
	if(valor3>promedio1){
		printf("\n%d es mayor que el promedio.",valor3);
	}
	if((valor1==promedio1)&&(valor2==promedio1)&&(valor3==promedio1)){
		printf("\nNingun valor es mayor que el promedio. Todos los numeros son iguales");
	}
		
return 0;	
}
