// Actividad 13
/*
Ingresar las horas trabajadas por un empleado y su categoría, 
calcular su sueldo 
sabiendo que los empleados de 
la categoría 1 cobran $50, 
la 2 cobra $ 70 y 
la 3 cobra $ 80.
*/

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

int main() {
	float horasTrab,sueldo;
	int cat;
	
	printf("Por favor, ingrese la cantidad de horas trabajadas: ");
	scanf("%f",&horasTrab);
	printf("Por favor, ingrese la categoria del empleado: ");
	scanf("%d",&cat);
	
	switch(cat){
		case 1: sueldo=50*horasTrab;
		break;
		case 2: sueldo=70*horasTrab;
		break;
		case 3: sueldo=80*horasTrab;
		break;
		default: printf("Error! La categoria es invalida.");
	}
	
	if(cat>0&&cat<4){
		printf("El sueldo del empleado es: %.2f",sueldo);
	}

return 0;
}
