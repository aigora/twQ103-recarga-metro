#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 9
void main()
{
	int registro,edad,tipousuario;
	char num.usuarioadulto[N], num.usuariojoven[N], num.usuariojubilado[N];
	//El numero de usuario se trata del documento nacional de identidad
	//Se necesita un fichero donde almacenar todos los datos de los usuarios
	//En funci�n de la edad habr� tres tipos de usuario: joven,adulto y jubilado
	printf("Bienvenido al servicio de transportes de la comunidad de madrid\n");
	printf("�Est� usted registrado o es nuevo usuario?\n");
	printf("Introduzca 1 si esta registrado, introduzca 2 si no esta registrado\n");
	scanf("%d",&registro);
	
	switch(registro)
	{
	case '1':
	printf("A continuaci�n introduzca 1 si es carnet tipo joven , 2 si es de tipo adulto y 3 si es de tipo jubilado\n"); 
	scanf("%d",&tiporusuario);
	switch(tipousuario)
	{
		case '1':
			break;
		case '2':
			break;
		case '3':
			break;
			
	}
	//Aqu� habria que abrir el fichero y leer los datos hasta encontrar el usuario introducido en los tres casos
	//Si el usuario introducido no coincide, seria necesario volver a introducir el usuario un maximo de 3 veces, sino se cierra la aplicaci�n
	//Para ello empleariamos un bucle for
	
	case '2':
	printf("Introduzca la edad que tiene el nuevo usuario\n");
	scanf("%f",edad);
	if(edad<18)
	{
		printf("El nuevo usuario se trata de uno de clase joven,introduzca su DNI, que ser� su n�mero de usuario\n");
		gets(num.usuariojoven);
		//Aqu� habr�a que almacenarlo en el fichero	
	}
	else if (edad>18 && edad<65)
	{
		printf("El nuevo usuario se trata de uno de clase adulto,introduzca su DNI, que ser� su numero de usuario\n");
		//Aqu� se a�adir�a al fichero
	}
	else
	{
		printf ("El nuevo usuario se trata de uno de clase jubilada,introduzca su DNI, que ser� su numero de usuario\n");
		//Aqu� tambien se a�adir�a al fichero
	}
		
	
		
	}
	
	
	
	
}
