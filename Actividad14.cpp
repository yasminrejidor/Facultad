//Actividad 14
/*
Escribir un algoritmo que determine 
el precio total a pagar por una llamada telefónica, 
teniendo en cuenta que:
a.	Toda llamada que dure menos de tres minutos (10 pulsos) 
tiene un precio de 0.50 pesos.
b.	Y cada minuto adicional (a partir de los tres minutos iniciales) 
equivale a un pulso y tiene un precio de 0.10 pesos.
*/
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

int main() {
	int minutos,pulsos;
	float precio;
	
	printf("Ingrese la cantidad de minutos que duró la llamada: ");
	scanf("%d",&minutos);
	
	if(minutos<=0){
		printf("Error! El numero de minutos ingresados es invalido");
	}
	else{
		if(minutos<3){
			precio=0.50;
	        printf("El precio total a pagar por la llamada es: $%.2f",precio);
		}
	    else{
		     minutos-=2;
		     precio=minutos*0.10+0.50;
		     printf("El precio total a pagar por la llamada es: $%.2f",precio);		
	    }
    }

return 0;
}
