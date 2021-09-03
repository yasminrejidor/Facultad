//Actividad 5
//Ingresar los tres lados de un triángulo e indicar que tipo de triángulo es

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

int main(){
	int lado1;
	int lado2;
	int lado3;
	
	printf("Por favor, ingrese un lado del triangulo:  \n");
	scanf("%d",&lado1);
	printf("Por favor, ingrese otro lado del triangulo:  \n");
	scanf("%d",&lado2);
	printf("Por favor, ingrese otro lado del triangulo:  \n");
	scanf("%d",&lado3);
	
	if((lado1<=0)||(lado2<=0)||(lado3<=0)){
		printf("Uno de los valores ingresados es menor o igual a 0. \nNo es un triangulo.");
	}
	else {
	    if((lado1==lado2)&&(lado2==lado3)&&(lado1==lado3)){
		     printf("El triangulo es equilatero.\n");
	     }
	     if((lado1!=lado2)&&(lado2!=lado3)&&(lado1!=lado3)){
		     printf("El triangulo es escaleno.\n");
	     }
	     if(((lado1==lado2)&&(lado1!=lado3))||((lado1==lado3)&&(lado1!=lado2))
		 ||((lado2==lado3)&&(lado2!=lado1))){
		 	 printf("El triangulo es isosceles.\n");
		 }
	 }
	
return 0;
}
