/*******************************************************
EJERCICIOS SOBRE MAXIMOS y MINIMOS
-------------------------------------------------------
-------------------------------------------------------
Actividad 6
-------------------------------------------------------
-------------------------------------------------------
Consigna:

Ingresar el precio de N artículos, 
indicar e imprimir 
					el más caro, el más barato, 
         			el precio promedio y 
					la suma de todos los precios
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
	int nArts,flag=0,continuar,i;
	float pre,preMax,preMin,preProm,preSum;
	char art [30],artMax [30],artMin [30];
/*******************************************************
Se cargan las variables contra las qe se comparara
*******************************************************/
	printf("Indique la cantidad de articulos que cargara:  ");
	scanf("%d",&nArts);

if(nArts<=0){
	flag=3;
}
else{
	
	printf("\n\nArticulo:  ");
	fflush(stdin);
	gets(art);
	printf("Precio:  ");
	scanf("%f",&pre);		
	
	preMax=pre;
	strcpy(artMax,art);
	preMin=pre;
	strcpy(artMin,art);
	preSum=pre;

/*******************************************************
Se validan las variables ingresadas
*******************************************************/

	if(pre<=0){
		flag=2;
	}
	else{
		
/*******************************************************
Ciclo1: Entra al ciclo, carga y valida variables.
*******************************************************/
		for(i=1;i<nArts;i++){
			
			printf("\n\nArticulo:  ");
			fflush(stdin);
			gets(art);
			printf("Precio:  ");
			scanf("%f",&pre);
		
			if((art==artMax)||(art==artMin)){	//Esta parte no funciona
				flag=1;							// |
				i=nArts;						// |
			}
			else{
				if(pre<=0){
					flag=2;
					i=nArts;}
				else{

/*******************************************************
Ciclo2: Comparar variables.
*******************************************************/

					if(pre>preMax){
						preMax=pre;
						strcpy(artMax,art);
					}
					if(pre<preMin){
						preMin=pre;
						strcpy(artMin,art);
					}
					
					preSum+=pre;
						
//se cierran llaves.
				
				}
			}
			
		}
	}
}
/*******************************************************
Salida
*******************************************************/

	switch(flag){
		
		case 0:
			printf("\nEl articulo %s es el mas caro. Su precio es $%02.2f",artMax,preMax);
			printf("\nEl articulo %s es el mas barato. Su precio es $%02.2f",artMin,preMin);
			
			preProm=preSum/nArts;
			
			printf("\nEl precio promedio es $%02.2f",preProm);
			printf("\nEl precio total de todos los articulos es $%02.2f",preSum);
			
			break;
		
		case 1:
			printf("\nError! El articulo ingresado es invalido.");
			break;
		
		case 2:
			printf("\nError! El precio ingresado es invalido.");
			break;
	
		case 3:
			printf("\nError! El numero ingresado es invalido.");
			break;
	
		default:
			printf("\nUps! Parece que hubo un error.");
			break;
	}

return 0;
}
