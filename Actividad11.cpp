//Actividad 11
/*
Ingresar el sueldo, categoría y antigüedad de un empleado, 
calcular el sueldo final de cada uno de ellos, 
si  empleado es de la categoria 1 
se le adicionara $50 por cada año de antiguedad.
*/

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

int main(){
	
	int categoria, antig;
	float sueldo;
	
	printf("Por favor, ingrese el sueldo del empleado:  ");
	scanf("%f",&sueldo);
	printf("Por favor, ingrese la categoria del empleado:  ");
	scanf("%d",&categoria);
	printf("Por favor, ingrese los años de antiguedad del empleado:  ");
	scanf("%d",&antig);
	
	if(categoria==1){
		sueldo+=(50*antig);
	}
	
	printf("El sueldo del empleado es: %.2f",sueldo);
	
return 0;
}
