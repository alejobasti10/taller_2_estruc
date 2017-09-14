#include <stdio.h>
/*programa : pedir al usuario un numero del 1 al 12 y mostrar el mes del año 
correspondiente
elaborado: alejandro gonzalez
09/09/2017*/

int main() {
	int iNum;
	printf ("ingrese un numero del 1 al 12 \n");
	scanf ("%d",&iNum);
	switch(iNum)
	{
	case 1:
		printf("el numero %d es el mes de Enero\n",iNum);
	case 2:
		printf("el numero %d es el mes de Febrero\n",iNum);
		break;
	case 3:
		printf("el numero %d es el mes de Marzo\n",iNum);
		break;
	case 4:
		printf("el numero %d es el mes de Abril\n",iNum);
		break;
	case 5:
		printf("el numero %d es el mes de Mayo\n",iNum);
		break;
	case 6:
		printf("el numero %d es el mes de junio\n",iNum);
		break;
	case 7:
		printf("el numero %d es el mes de Julio\n",iNum);	
		break;
	case 8:
		printf("el numero %d es el mes de Agosto\n",iNum);
		break;
	case 9:
		printf("el numero %d es el mes de Septiembre\n",iNum);	
		break;
	case 10:
		printf("el numero %d es el mes de Octubre\n",iNum);
		break;
	case 11:
		printf("el numero %d es el mes de Noviembre\n",iNum);
		break;
	case 12:
		printf("el numero %d es el mes de Diciembre\n",iNum);	
	  break;
				
	}	
	return 0;
}

