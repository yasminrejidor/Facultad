//Actividad 8
/*
8.	Ingresar la edad y la altura de dos personas, 
indicar  e imprimir la estatura del de  mayor edad
*/

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

int main(){
	
	int edad1;
	int edad2;
	float altura1;
	float altura2;
	
	printf("\nPor favor, ingrese la edad de la primera persona:  ");
	scanf("%d",&edad1);
	printf("\nPor favor, ingrese la edad de la segunda persona:  ");
	scanf("%d",&edad2);
	printf("\nPor favor, ingrese la altura de la primera persona:  ");
	scanf("%f",&altura1);
	printf("\nPor favor, ingrese la altura de la segunda persona:  ");
	scanf("%f",&altura2);
	
	if(edad1>edad2){
		printf("\nLa primera persona es la de mayor edad y mide %.2fm",altura1);
	}
	if(edad2>edad1){
		printf("\nLa segunda persona es la de mayor edad y mide %.2fm",altura2);
	}
	if(edad1==edad2){
		printf("\nLas dos personas tienen la misma edad.\nLa primera mide %.2fm y la segunda mide %.2fm",altura1,altura2);
	}

return 0;
}
