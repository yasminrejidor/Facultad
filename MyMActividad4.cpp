/*******************************************************
EJERCICIOS SOBRE MAXIMOS y MINIMOS
-------------------------------------------------------
-------------------------------------------------------
Actividad 4
-------------------------------------------------------
-------------------------------------------------------
Consigna:

Ingresar las edades y estaturas de los alumnos, 
calcular e imprimir la edad promedio, la edad mayor y la estatura menor, 
los datos finalizan con edad = 0
*******************************************************/  
/*******************************************************
Librerias
*******************************************************/
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>


int main() {

/*******************************************************
Datos y variables
*******************************************************/
	int edad,edadMax,edadAcum=0,flag=0;
	float est,estMin,edadProm=0,i;

/*******************************************************
Instrucciones para el usuario
*******************************************************/
	printf("\nPresione enter para ingresar datos.  ");
	printf("\nPara finalizar, complete con 0 la edad.\n\n");

/*******************************************************
Se cargan las variables contra las que se comparara
en el WHILE.
********************************************************/	
	printf("\nEdad del alumno:  ");
	scanf("%d",&edad);
	
	if(edad==0){
		flag=3;
	}
	
	if(edad<0){
		flag=1;
	}
	
	if(edad>0){
		printf("\nEstatura del alumno:  ");
		scanf("%f",&est);
		
		if(est<=0){
			flag=2;
		}
		
		else{
			edadMax=edad;
			edadAcum=edad;
			i=1;
			estMin=est;

/*******************************************************
Se carga la edad para iniciar el ciclo.
*******************************************************/
			printf("\nEdad del alumno:  ");
			scanf("%d",&edad);
	
			if(edad<0){
				flag=1;
			}	
/*******************************************************
Ciclo1: Comienza y valida edad.
*******************************************************/
		while((flag==0)&&(edad>0)){
/*******************************************************
Ciclo2: valida estatura.
*******************************************************/			
			printf("\nEstatura del alumno:  ");
			scanf("%f",&est);
		
			if(est<=0){
				flag=2;
			}

/*******************************************************
Ciclo3: Actualizar variables.
*******************************************************/
			else{
				
				if (edad>edadMax){
					edadMax=edad;
				}
				
				edadAcum+=edad;
				i+=1;
				
				if(est<estMin){
					estMin=est;
				}
		 	
		 	
/*******************************************************
Ciclo4:Se vuelve a cargar y validar
       la edad para reiniciar el ciclo.
*******************************************************/
				printf("\nEdad del alumno:  ");
				scanf("%d",&edad);
	
				if(edad<0){
					flag=1;
				}
							
//Se cierran llaves de arriba
			}
		}

		}
		
	}
	
/*******************************************************
Respuestas
*******************************************************/
	switch(flag){
		case 0:
			edadProm=edadAcum/i;
	
			printf("\nEdad romedio:  %.1f anios.",edadProm);
			printf("\nMayor edad:  %d anios.",edadMax);
			printf("\nMenor estatura:  %.1fm.",estMin);
			
			break;
		
		case 1:
			printf("Error! Se cargo una edad invalida.");
			break;
		
		case 2:
			printf("Error! Se cargo una estatura invalida.");
			break;
	
		case 3:
			printf("No se cargo ningun dato. Hasta luego.");
			break;
	}
return 0;
}
