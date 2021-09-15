//EJERCICIOS SOBRE MAXIMOS y MINIMOS
//Actividad 3
/*  
Ingresar los sueldos y nombres de 30 empleados, 
indicar e imprimir el sueldo mayor y a quién pertenece
*/

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>

int main() {

	float sueldo,max;
	int i;
	char nombre[30],nomMax[30];
	
	printf("\nNombre del empleado:  ");
	fflush(stdin);
	gets(nombre);
	printf("\nSueldo:  ");
	scanf("%f",&sueldo);
	
	max=sueldo;
	strcpy(nomMax,nombre);
	
	for(i=1;i<29;i++){
		
		printf("\nNombre del empleado:  ");
		fflush(stdin);
		gets(nombre);
		printf("\nSueldo:  ");
		scanf("%f",&sueldo);
	    
	    if(sueldo>max){
	    	max=sueldo;
	    	strcpy(nomMax,nombre);
		}
		
	}
	
	printf("\nSueldo mas alto:  $%.2f.",max);
	printf("\nEmpleado con sueldo mas alto:  %s.",nomMax);

return 0;
}
