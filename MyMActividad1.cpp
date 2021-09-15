//EJERCICIOS SOBRE MAXIMOS y MINIMOS
//Actividad 1
/*  
1. Ingresar N temperaturas , indicar e imprimir la máxima y mínima
*/

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>

int main() {
	int tot,i;
	float temp,max,min;
	
	printf("Ingrese la cantidad total de temperaturas a comparar:   ");
	scanf("%d",&tot);
	
	printf("\nIngrese una temperatura:  ");
	scanf("%f",&temp);
	max=temp;
	min=temp;
	
	for(i=1;i<tot;i++){
		
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
