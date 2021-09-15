/*******************************************************
EJERCICIOS SOBRE MAXIMOS y MINIMOS
-------------------------------------------------------
-------------------------------------------------------
Actividad 5
-------------------------------------------------------
-------------------------------------------------------
Consigna:

En una carrera de autos 
se ingresan el número de auto y su tiempo, 
indicar e imprimir cuál ganó y cúal fue el último
-------------------------------------------------------
-------------------------------------------------------
Notas:

Este programa no contempla:
	-empates
	-que el usuario ingrese 2 veces el mismo auto
	(solo valida esto contra el ultimo auto y el ganador hasta el momento.
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
	int nAuto,hs,mins,segs,
		bestHs,bestMins,bestSegs,
		lastHs,lastMins,lastSegs,
		ganador,ultimo,
		continuar,flag=0;
	
/*******************************************************
Se cargan las variales.
*******************************************************/
	printf("\n\nNumero de auto:  ");
	scanf("%d",&nAuto);
	printf("TIEMPO\n");
	printf("Cantidad de horas:  ");
	scanf("%d",&hs);
	printf("Cantidad de minutos:  ");
	scanf("%d",&mins);
	printf("Cantidad de segundos:  ");
	scanf("%d",&segs);

/*******************************************************
Se validan las variables.		
*******************************************************/

	if(nAuto<=0){
		flag=2;
	}
	else{
		if((hs<0)||
	   (mins<0)||
	   (mins>59)||
	   (segs<0)||
	   (segs>59)||
	   ((hs==0)&&(mins==0)&&(segs==0))){
	   	flag=1;
	   }
		else{

/*******************************************************
Se cargan variables con las que se comparara en el ciclo.
*******************************************************/
		bestHs=hs;
		bestMins=mins;
		bestSegs=segs;
		ganador=nAuto;
		
		lastHs=hs;
		lastMins=mins;
		lastSegs=segs;
		ultimo=nAuto;

/*******************************************************
Ciclo1: valida si usuario desea continuar.
*******************************************************/
		printf("\nSi desea ingresar un nuevo auto, ingrese '1'. De lo contrario, ingrese '2'.");
		printf("\nIngrese una opcion:  ");
		scanf("%d",&continuar);
		
		switch(continuar){
			case 1: flag=0;
				break;
			default: flag=3;
				break;
		}

/*******************************************************
Ciclo2: entra al ciclo.
*******************************************************/
		while(flag==0){
			printf("\n\nNumero de auto:  ");
			scanf("%d",&nAuto);
			printf("TIEMPO\n");
			printf("Cantidad de horas:  ");
			scanf("%d",&hs);
			printf("Cantidad de minutos:  ");
			scanf("%d",&mins);
			printf("Cantidad de segundos:  ");
			scanf("%d",&segs);

/*******************************************************
Ciclo3: se validan las variables.		
*******************************************************/

			if((nAuto<=0)||
			   (nAuto==ganador)||
			   (nAuto==ultimo) 
			)
			{
				flag=2;
			}
			else{
			if((hs<0)||
			   (mins<0)||
			   (mins>59)||
			   (segs<0)||
			   (segs>59)||
			   ((hs==0)&&(mins==0)&&(segs==0))){
			   	flag=1;
			   }
			else{

/*******************************************************
Ciclo4: se calcula ganador.
*******************************************************/
				if((hs<bestHs)||
				   ((hs==bestHs)&&(mins<bestMins))||
				   ((hs==bestHs)&&(mins==bestMins)&&(segs<bestSegs))
				   //Este programa no calcula empate.				
				){
					bestHs=hs;
					bestMins=mins;
					bestSegs=segs;
					ganador=nAuto;	
				}
				
/*******************************************************
Ciclo5: se calcula ultimo.
*******************************************************/		
				if((hs>lastHs)||
				   ((hs==lastHs)&&(mins>lastMins))||
				   ((hs==lastHs)&&(mins==lastMins)&&(segs>lastSegs))
				   //Este programa no calcula empate.				
				){
					lastHs=hs;
					lastMins=mins;
					lastSegs=segs;
					ultimo=nAuto;	
				}

/*******************************************************
Ciclo6: valida si usuario desea continuar.
*******************************************************/
				printf("\nSi desea ingresar un nuevo auto, ingrese '1'. De lo contrario, ingrese '2'.");
				printf("\nIngrese una opcion:  ");
				scanf("%d",&continuar);
		
				switch(continuar){
					case 1: flag=0;
						break;
					default: flag=3;
						break;
				}

//se cierran llaves de arriba		
		}}
			}
	}

	}

/*******************************************************
Salida
*******************************************************/
	switch(flag){
		
		case 1:
			printf("\nError! El tiempo ingresado es invalido.");
			break;
		
		case 2:
			printf("\nError! El numero de auto ingresado es invalido.");
			break;
	
		case 3:
			printf("\nEl auto %d fue el ganador, con un tiempo de %02d:%02d:%02d",ganador,bestHs,bestMins,bestSegs);
			printf("\nEl auto %d fue el ultimo, con un tiempo de %02d:%02d:%02d",ultimo,lastHs,lastMins,lastSegs);
			break;
	}
return 0;
}
