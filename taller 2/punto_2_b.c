#include <stdio.h>

/*programa:leer tres numeros y decir  cual es el mayor
elaborado:alejandro gonzalez
02 septiembre 2017*/

int main()
{
	int iNumA;
	int iNumB;
	int iNumC;
	int iNumAux;
	printf("Ingrese el numero\n");
	scanf("%d",&iNumA);
	printf("Ingrese el numero\n");
	scanf("%d",&iNumB);
	printf("Ingrese el numero\n");
	scanf("%d",&iNumC);
	iNumAux=iNumA;
	if (iNumB>iNumAux)
	{
		iNumAux=iNumB;
		
	}
	if(iNumC>iNumAux)
	{
		iNumAux=iNumC;
			
	}
	printf(" EL NUMERO MAYOR ES %d\n", iNumAux);
	return 0;
}
