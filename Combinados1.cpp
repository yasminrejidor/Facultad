/*******************************************************
EJERCICIOS COMBINADOS
-------------------------------------------------------
-------------------------------------------------------
Actividad 1
-------------------------------------------------------
-------------------------------------------------------
Consigna:

En una empresa los empleados cobran un sueldo según la categoria, 
son 50 empleados y 
3 categorías

Categoría 1 = $ 1500
Categoría 2 = $ 2000
Categoría 3 = $ 2500

Al sueldo se le suman $ 100 por cada año trabajado.

Si se ingresa el nombre, categoría y antigüedad de cada empleado, 

calcular
A. Cuántos empleados hay por categoría
B. Total de sueldos pagados por categoría
C. Sueldo promedio general
D. Sueldo máximo y a quién pertenece
E. Qué porcentuel sobre el total de sueldos representa cada total de sueldos de las categorías
*******************************************************/  
/*******************************************************
Librerias
*******************************************************/

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>

int main() {
	
/*******************************************************
Datos y variables
*******************************************************/
//Variables
int cat,empc1=0,empc2=0,empc3=0,flag=0,i,antig,sueldo=0,totSueldo=0,sueldoMax=0,totc1=0,totc2=0,totc3=0;
float promSueldo,pc1,pc2,pc3;
char name[30],nameMax[30];

//Constantes
int cat1=1500,cat2=2000,cat3=2500,emps=50;

/*******************************************************
Inicio ciclo
*******************************************************/		
for(i=0;((flag==0)&&(i<emps));i++){

/*******************************************************
Usuario carga variables iniciales
*******************************************************/
	printf("\n\nNombre del empleado:  ");
	fflush(stdin);
	gets(name);
	printf("Anios trabajados:  ");
	scanf("%d",&antig);
	printf("Categoria (1,2 o 3):  ");
	scanf("%d",&cat);

/*******************************************************
Se validan variables
*******************************************************/
	if(antig<0){
		flag=1;
	}

	else{

/*******************************************************
Se cargan variables
*******************************************************/
	switch(cat){
		case 1:
			empc1+=1;//A,B,E
			sueldo=cat1+100*antig; //C,D
			totc1+=sueldo; //E
			printf("%d",totc1); 
			break;
		case 2:
			empc2+=1;//A,B,E
			sueldo=cat2+(100*antig); //C,D	
			totc2+=sueldo; //E
			break;
		case 3:
			empc3+=1;//A,B,E
			sueldo=cat3+(100*antig); //C,D
			totc3+=sueldo; //E
			break;
		default:
			flag=2;
			break;	
	}
		
	totSueldo+=sueldo; //C
	
	if(sueldo>sueldoMax){
		sueldoMax=sueldo;    //D
		strcpy(nameMax,name);//D
	}
	
			
			
			
			
//se cierran llaves		
}//else
}//for-->se mueve


/*******************************************************
Salida
*******************************************************/
	switch(flag){
		
		case 0:
			printf("\nHay %d empleados en la categoria '1', %d empleados en la '2' y %d empleados en la '3'",empc1,empc2,empc3); //A
			printf("\nSe pagaron %d sueldos en la categoria '1', %d en la '2' y %d en la '3'",empc1,empc2,empc3); //B
			
			promSueldo=totSueldo/emps;
			printf("\nEl sueldo promedio es de $%.2f.",promSueldo); //C
			printf("\nEl sueldo mas alto es de $%d y pertenece a %s.",sueldoMax,nameMax); //D
			
			pc1=(totc1*100)/totSueldo; //E    
			pc2=(totc2*100.00)/totSueldo; //E     
			pc3=totc3*100/totSueldo; //E
			
			printf("\nEl %.2f%% del total de sueldos pertenece a la categoria 1.",pc1); //E
			printf("\nEl %.2f%% del total de sueldos pertenece a la categoria 2.",pc2); //E
			printf("\nEl %.2f%% del total de sueldos pertenece a la categoria 3.",pc3); //E
			
			break;
		
		case 1:
			printf("\nError! Antiguedad invalida. ");
			break;
		
		case 2:
			printf("\nError! Categoria invalida.");
			break;
	
		case 3:
			printf("\nError! ");
			break;
	
		default:
			printf("\nUps! Parece que hubo un error.");
			break;
	}

return 0;
}
