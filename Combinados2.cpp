/*******************************************************
EJERCICIOS COMBINADOS
-------------------------------------------------------
-------------------------------------------------------
Actividad 2
-------------------------------------------------------
-------------------------------------------------------
Consigna:

Una empresa conoce el nombre, sueldo y categoría de sus empleados, son 4 categorías, y la cantidad de empleados es variable N.
Se desea saber
A. Cantidad de empleados por categoría
B. Cantidad de empleados que cobran mas de $ 2000
C. Cantidad de empleados de la categoría 1 con sueldo mayor a $ 1000
D. Sueldo máximo y a qué empleado pertenece
E. Sueldo mínimo y a que empleado pertenece
F. Categoría con más empleados
G. Porcentual en cantidad de empleados de cada categoría sobre el total de la empresa
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
int emps,cat,empc1=0,empc2=0,empc3=0,empc4=0,flag=0,i,sueldo=0,totSueldo=0,sueldoMax=0,sueldoMin=9999999,totc1=0,totc2=0,totc3=0,emp2000=0,c1_1000=0,igual=0;
float promSueldo,pc1=0,pc2=0,pc3=0,pc4=0;
char name[30],nameMax[30],nameMin[30];


printf("Cantidad de empleados:  ");
scanf("%d",&emps);
if(emps<0){
		flag=3;
	}
	
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
	printf("Sueldo:  ");
	scanf("%d",&sueldo);
	printf("Categoria (1,2,3 O 4):  ");
	scanf("%d",&cat);

/*******************************************************
Se validan variables
*******************************************************/
	if(sueldo<0){
		flag=1;
	}

	else{

/*******************************************************
Se cargan variables
*******************************************************/
	switch(cat){
		case 1:
			empc1+=1;//A,F
			if(sueldo>1000){
				c1_1000+=1;//C
			}
			break;
		case 2:
			empc2+=1;//A,F
			break;
		case 3:
			empc3+=1;//A,F
			break;
		case 4:
			empc4+=1;//A,F
			break;
		default:
			flag=2;
			break;	
	}
	
	if(sueldo>2000){ //B
		emp2000+=1;
	}
	if(sueldo>sueldoMax){
		sueldoMax=sueldo;    //D
		strcpy(nameMax,name);//D
	
	if(sueldo<sueldoMin){
		sueldoMin=sueldo;    //D
		strcpy(nameMin,name);//D			
	}
			
			
//se cierran llaves		
}//else
}//for-->se mueve
}

/*******************************************************
Salida
*******************************************************/
	switch(flag){
		
		case 0:
			printf("\nHay %d empleados en la categoria '1', %d empleados en la '2', %d empleados en la '3' y %d en la '4'",empc1,empc2,empc3,empc4); //A
			printf("\nHay %d empleados que cobra mas de $2000",emp2000); //B
			printf("\nHay %d empleados de la categoria '1' que cobra mas de $1000",c1_1000); //C
			
			promSueldo=totSueldo/emps;
			printf("\nEl sueldo promedio es de $%.2f.",promSueldo);
			printf("\nEl sueldo mas alto es de $%d y pertenece a %s.",sueldoMax,nameMax); //D
			printf("\nEl sueldo mas bajo es de $%d y pertenece a %s.",sueldoMin,nameMin); //E
			
			if((empc1>empc2)&&(empc1>empc3)&&(empc1>empc4)){//F
				cat=1;
			}
			if((empc2>empc1)&&(empc2>empc3)&&(empc2>empc4)){//F
				cat=2;
			}
			if((empc3>empc2)&&(empc3>empc1)&&(empc3>empc4)){//F
				cat=3;
			}
			if((empc4>empc2)&&(empc4>empc3)&&(empc4>empc1)){//F
				cat=4;
			}
			
			if((cat==1)||(cat==2)||(cat==3)||(cat==4)){
				printf("\nLa categoria con mas empleados es la %d.",cat); //F
			}
			if((empc1==empc2)&&(empc1==empc3)&&(empc1==empc4)){//F
				printf("Todas las categorias tienen la misma cantidad de empleados.");
			}
			
			if((empc1==empc2)&&(empc1>empc3)&&(empc1>empc4)){//F
				printf("Las categorias 1 y 2 son las que mas empleados tienen. Ambas tienen la misma cantidad de empleados.");
			}
			
			if((empc1>empc2)&&(empc1==empc3)&&(empc1>empc4)){//F
				printf("Las categorias 1 y 3 son las que mas empleados tienen. Ambas tienen la misma cantidad de empleados.");
			}
			
			if((empc1>empc2)&&(empc1>empc3)&&(empc1==empc4)){//F
				printf("Las categorias 1 y 4 son las que mas empleados tienen. Ambas tienen la misma cantidad de empleados.");
			}
			
			if((empc2>empc1)&&(empc2==empc3)&&(empc2>empc4)){//F
				printf("Las categorias 2 y 3 son las que mas empleados tienen. Ambas tienen la misma cantidad de empleados.");
			}
		
			if((empc2>empc1)&&(empc2>empc3)&&(empc2==empc4)){//F
				printf("Las categorias 2 y 4 son las que mas empleados tienen. Ambas tienen la misma cantidad de empleados.");
			}
			
			if((empc4>empc2)&&(empc4==empc3)&&(empc4>empc1)){//F
				printf("Las categorias 3 y 4 son las que mas empleados tienen. Ambas tienen la misma cantidad de empleados.");
			}
			
			pc1=empc1*100/emps; //G
			pc2=empc2*100/emps; //G     
			pc3=empc3*100/emps; //G
			pc4=empc4*100/emps; //G
			
			printf("\nEl %.2f%% de los empleados pertenece a la categoria 1.",pc1); //G
			printf("\nEl %.2f%% de los empleados pertenece a la categoria 2.",pc2); //G
			printf("\nEl %.2f%% de los empleados pertenece a la categoria 3.",pc3); //G
			printf("\nEl %.2f%% de los empleados pertenece a la categoria 4.",pc4); //G
			
			break;
		
		case 1:
			printf("\nError! Sueldo invalido. ");
			break;
		
		case 2:
			printf("\nError! Categoria invalida.");
			break;
	
		default:
			printf("\nUps! Parece que hubo un error.");
			break;
	}

return 0;
}
