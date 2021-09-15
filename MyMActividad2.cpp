//EJERCICIOS SOBRE MAXIMOS y MINIMOS
//Actividad 2
/*  
Ingresar temperaturas hasta una temperatura igual a 1000, 
indicar e imprmir la mayor y menor
*/

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>

int main() {

	float temp,max,min;
	
	printf("\nIngrese una temperatura:  ");
	scanf("%f",&temp);
	max=temp;
	min=temp;
	
	while(temp!=1000){
		
		printf("\nIngrese una temperatura:  ");
	    scanf("%f",&temp);
	    
	    if(temp>max){
	    	max=temp;
		}
		if(temp<min){
			min=temp;
		}
		
	}
	
	printf("\nLa temperatura maxima fue:  %.1f grados.",max);
	printf("\nLa temperatura minima fue:  %.1f grados.",min);

return 0;
}
