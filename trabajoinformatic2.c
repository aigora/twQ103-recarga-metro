#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>
#define N 100

typedef struct{
	char nombre[15];
	char apellido[15];
	char dni[9];
	int edad[3];
	
}adulto;

typedef struct{
	char nombre[15];
	char apellido[15];
	char dni[9];
	int edad[3];
	
}jubilado;

typedef struct{
	char nombre[15];
	char apellido[15];
	char DNI[9];
	int edad[3];
	
}joven;

void main()
{
	int contador=0,tipousuario,edad;
	FILE *registro;
	int opcion;
	struct joven joven[N];
	struct adulto adulto[N];
	struct jubilado jubilado[N];
	char joven[N];
	char adulto[N];
	char jubilado[N];
	
	printf("Bienvenido al servicio de transportes de la Comunidad de Madrid\n");
	printf("¿Está usted registrado o es nuevo usuario?\n");
	printf("Introduzca 1 si esta registrado, introduzca 2 si no esta registrado\n");
	scanf("%d",&registro);
	
	switch(registro)
	{
	case '1':
	printf("A continuación introduzca 1 si es carnet tipo joven , 2 si es de tipo adulto y 3 si es de tipo jubilado\n"); 
	scanf("%d",&tipousuario);
	switch(tipousuario)
	{
		case '1':
		registro = fopen("registro.txt","r");
		if(registro==NULL)
		{
			printf("No se puedo abrir correctamente el fichero\n");
			return -1;
		}
		else
		{
			printf("Que desea hacer\n");
			printf("1-Recarga de abono mensual\n");
			printf("2-Recarga de abono para 1 viaje\n");
			printf("3-Recarga de abono para 10 viajes\n");
			printf("4-Darme de baja en el servicio\n");
			printf("5-Volver\n");
			scanf("%d",&opcion);
			
			switch (opcion){
				case 1:printf("el coste de dicha operacion es de 16 euros\n");
					break;
				case 2:printf("el coste de dicha operacion es de 1 euros\n");
					break;
				case 3:printf("el coste de dicha operacion es de 10 euros\n");
					break;
				case 4:printf("debe rellenar un fomulario en la pagina web que viene grabada en pantalla: www.emt.baja.com\n");
					break;
				default:printf("tenga un buen dia\n");		
				}
	
				
		}
				break;
			case '2':
				registro = fopen("registro.txt","r");
			if(registro==NULL)
			{
				printf("No se puedo abrir correctamente el fichero\n");
				return -1;
			}
			else
			{
				printf("Que desea hacer\n");
				printf("1-Recarga de abono mensual\n");
				printf("2-Recarga de abono para 1 viaje\n");
				printf("3-Recarga de abono para 10 viajes\n");
				printf("4-Darme de baja en el servicio\n");
				printf("5-Volver\n");
				scanf("%d",&opcion);
			
				switch (opcion){
					case 1:printf("el coste de dicha operacion es de 20 euros\n");
						break;
					case 2:printf("el coste de dicha operacion es de 1,5 euros\n");
						break;
					case 3:printf("el coste de dicha operacion es de 12 euros\n");
						break;
					case 4:printf("debe rellenar un fomulario en la pagina web que viene grabada en pantalla: www.emt.baja.com\n");
						break;
					default:printf("tenga un buen dia\n");		
					}
	
			}
					break;
			case '3':
				registro = fopen("registro.txt","r");
			if(registro==NULL)
			{
				printf("No se puedo abrir correctamente el fichero\n");
				return -1;
			}
			else
			{
				printf("Que desea hacer\n");
				printf("1-Recarga de abono mensual\n");
				printf("2-Recarga de abono para 1 viaje\n");
				printf("3-Recarga de abono para 10 viajes\n");
				printf("4-Darme de baja en el servicio\n");
				printf("5-Volver\n");
				scanf("%d",&opcion);
			
				switch (opcion){
					case 1:printf("el coste de dicha operacion es de 10 euros\n");
					break;
				case 2:printf("el coste de dicha operacion es de 1 euros\n");
					break;
				case 3:printf("el coste de dicha operacion es de 8 euros\n");
					break;
				case 4:printf("debe rellenar un fomulario en la pagina web que viene grabada en pantalla: www.emt.baja.com\n");
					break;
				default:printf("tenga un buen dia\n");		
				}
		
		}
				break;
			
	}
	//Aquí habria que abrir el fichero y leer los datos hasta encontrar el usuario introducido en los tres casos
	//Si el usuario introducido no coincide, seria necesario volver a introducir el usuario un maximo de 3 veces, sino se cierra la aplicación
	//Para ello empleariamos un bucle for
	
	case '2':
	printf("Introduzca la edad que tiene el nuevo usuario\n");
	scanf("%f",edad);
	if(edad<18)
	{
		printf("El nuevo usuario se trata de uno de clase joven\n");
		joven viajero;
		FILE *registro;
		registro=fopen("viajeros.txt","w");
		if (registro==NULL){
			printf("No se ha abierto el fichero correctamente\n");
			return -1;
		}
		else{
			printf("Fichero abierto perfectamente\n");
			printf("Introduzca sus datos para ser guardados\n");
			while(fscanf(registro,"%i %s\t %s\t %s\t %i\t",&contador,&joven[contador].nombre,&joven[contador].apellidos,&joven[contador].DNI,&joven[contador].edad)!=EOF){
				contador++;
				if(contador!=0){
					contador=contador-1;
				}
			}
		}
	}
	else if (edad>18 && edad<65)
	{
		printf("El nuevo usuario se trata de uno de clase adulto\n");
		adulto viajero;
		FILE *registro;
		registro=fopen("viajeros.txt","w");
		if (registro=NULL){
			printf("No se ha abierto el fichero correctamente\n");
			return -1;
		}
		else{
			printf("Fichero abierto perfectamente\n");
			printf("Introduzca sus datos para ser guardados\n");
			while(fscanf(registro,"%i %s\t %s\t %s\t %i\t",&contador,&adulto[contador].nombre,&adulto[contador].apellidos,&adulto[contador].DNI,&adulto[contador].edad)!=EOF)
		{
			contador++;
			if(contador!=0)
			{
				contador=contador-1;
			}
		}
			
		}
		
	}
	else
	{
		printf ("El nuevo usuario se trata de uno de clase jubilada\n");
		jubilado viajero;
		FILE *registro;
		registro=fopen("viajeros.txt","w");
		if (registro=NULL){
			printf("No se ha abierto el fichero correctamente\n");
			return -1;
		}
		else{
			printf("Fichero abierto perfectamente\n");
			printf("Introduzca sus datos para ser guardados\n");
			while(fscanf(registro,"%i %s\t %s\t %s\t %i\t",&contador,&jubilado[contador].nombre,&jubilado[contador].apellidos,&jubilado[contador].DNI,&jubilado[contador].edad)!=EOF)
		{
			contador++;
			if(contador!=0)
			{
				contador=contador-1;
			}
		
	}
			
	}	
	
}
