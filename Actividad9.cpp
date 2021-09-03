//Actividad 9
/*
Ingresar el valor de la hora y el tiempo trabajado por un empleado, 
calcular su sueldo conociendo que recibe 
un premio de $ 100 si trabajo más de 50 hs 
y  si trabajo más de 150 hs le dan otros $ 100  adicionales.
imprimir el sueldo
*/

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

int main(){
	float valorHora, tiempoTrabaj, sueldo;
	
	printf("\nIngrese el valor de la hora del trabajador:  ");
	scanf("%f",&valorHora);
	printf("\ningrese el tiempo trabajado del empleado:  ");
	scanf("%f",&tiempoTrabaj);
	
	sueldo = valorHora*tiempoTrabaj;
	
	if(tiempoTrabaj >50){
		sueldo+=100;
		
		if(tiempoTrabaj>150){
			sueldo+=100;
		}
	}
	
	printf("El sueldo del trabajador es de $%.2f.",sueldo);
	
return 0;
}
