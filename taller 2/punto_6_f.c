#include <stdio.h>
#include <math.h>
/*programa : menu que consiera las sigtes opciones
cubo de un numero, numero par o impar, salir
elaborado: alejandro gonzalez
04/09/2017*/

int main() {
	int iOpcion;
	int iNum;
	int iCuboNum;
	int iPares;
	int iImpares;
	
	printf ("ingrese un numero \n");
	scanf ("%d",&iNum);
	printf("ingrese \n");
	printf ("Ingrese 1: saber el cubo de un numero\n");
	printf ("Ingrese 2: para saber si el numero es par o impar\n");
	printf ("Ingrese 3: para salir\n");
	scanf ("%d",&iOpcion);
	switch(iOpcion)
	{
	case 1:
		iCuboNum=pow(iNum,2);
		printf("el Cubo de el2 numero es == %d\n",iCuboNum);
		break;
	
	case 2:
		if(iNum%2==0)
		{
			iPares=iNum;
			printf("El numero es par \n");
		}else{
			iImpares=iNum;
			printf("El numero es impar \n");
		}
		
		break;
	case 3:
		printf ("salir");
		break;
	}	
	return 0;
}
