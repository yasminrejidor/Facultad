//Actividad 10
/* 
Ingresar tres valores correspondientes al día, mes y año de una fecha, 
indicar si es válida, 
considerar los años bisiestos 
 */
 
 /*
 Pasos:
 Declarar variables:
         -dia
         -mes
         -anio
         -bisiesto
         -tipoMes
         -validador
 Pedir fecha
 Validar:
         -tipo de anio (Bisiesto o no)
             -divisible por 4 y no por 100
             -divisible por 400
        -tipo de meses(1(<32)/2(<31)/3(febrero)/4(31<numero<0)
        -tipo de mes 4 --> invalido
        -dia>31                            -->invalido
	    -dia<=0                            -->invalido
	         -dia>30 && tipo de mes=2           -->invalido
	         -febrero && bisiesto && dia>29     -->invalido
	         -febrerp && no bisiesto && dia>28  -->invalido
	                        else-->valido
                 
 */

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

int main() {

int dia;
int mes;
int anio;
int bisiesto;
int tipoMes;
int validador;

printf("\nIngrese una fecha.");
printf("\nIngrese el dia:  ");
scanf("%d",&dia);
printf("\nIngrese el mes:  ");
scanf("%d",&mes);
printf("\nIngrese el anio:  ");
scanf("%d",&anio);

//Es bisiesto?
if((anio%100!=0 && anio%4==0)||(anio%400==0)){
	bisiesto=1;
}
else{
	bisiesto=2;
}

//Tipo de mes
switch(mes){
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		tipoMes=1;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		tipoMes=2;
		break;	
	case 2:
		tipoMes=3;
		break;
	default:
		tipoMes=4;
}
//la fecha es correcta?
if(tipoMes==4){
	printf("\nUsted ingresó %d como mes. \nEs un mes invalido.",mes);
	validador=2;
}
if((dia>31)||(dia<=0)){
	printf("\nUsted ingreso %d como dia. \nEs un dia invalido.",dia);
	validador=2;
}
else{
	if(   ((dia>30)&&(tipoMes==2))
	    ||((tipoMes==3)&&(bisiesto==1)&&(dia>29))
	    ||((tipoMes==3)&&(bisiesto==2)&&(dia>28))
		){
			printf("\nUsted ingresó %d como dia.\nEs un dia invalido para el mes %d.",dia,mes);
			validador=2;
		}

	else {
		validador=1;
	}
}
if(validador==1){
	printf("La fecha ingresada es: %d/%d/%d\nLa fecha es valida.",dia,mes,anio);
}
else{
	printf("\nLa fecha ingresada es invalida.");
}
return 0;
}
