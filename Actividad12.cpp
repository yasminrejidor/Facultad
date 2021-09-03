//Actividad 12
/*
Sobre los datos del ejercico anterior 
imprimir los sueldos de los empleados con más de 5 años de antigüedad
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
	
	if(antig>5){
	printf("El sueldo del empleado es: %.2f",sueldo);
	}
	
return 0;
}
