#include <stdio.h>

/*programa:escribir un programa que lee dos numeros y dicce cual es el mayor
elaborado:alejandro gonzalez
02 septiembre 2017*/

int main()
{
	int iNumA;
	int iNumB;
	printf("Ingrese el numero\n");
	scanf("%d",&iNumA);
	printf("Ingrese el numero\n");
	scanf("%d",&iNumB);
	if (iNumA<iNumB)
	{
	printf(" EL NUMERO MAYOR ES %d \n", iNumB);
	}else{
		printf(" EL NUMERO MAYOR ES %d\n", iNumA);
	}
	
	return 0;
}

