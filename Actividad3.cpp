//Actividad 3
/*3.	Ingresar dos valores y 
realizar e imprmir el producto si el 1ro es mayor al 2do, 
si son iguales solo indicarlo */

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

int main(){
	
	int valor1;
	int valor2;
	
	printf("Por favor, ingrese un valor:  ");
	scanf("%d",&valor1);
	printf("\nPor favor, ingrese otro valor:  ");
	scanf("%d",&valor2);
	    int producto = valor1 * valor2;
	
	if(valor1<=valor2){
		printf("\nEl primer valor no es mayor que el segundo.");
		
		if (valor1<valor2){
			printf("\nEl numero %d es menor que el %d",valor1, valor2);
		}
		
		else {
			printf("\nLos dos valores son iguales.");
		}
	}
	
	else {
		printf("\nEl numero %d es mayor que el %d", valor1, valor2);
		printf("\nEl producto entre los dos es %d.", producto);
	}

return 0;
}
