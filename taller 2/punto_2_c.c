#include <stdio.h>

/*programa:lee un numero y dice si es par o impar
elaborado:alejandro gonzalez
02 septiembre 2017*/

int main()
{
	int iNumA;

	
	printf("Ingrese el numero\n");
	scanf("%d",&iNumA);
	
	
	if (iNumA%2==0)
	{
		printf("este es un numero par \n %d",iNumA);
		
	}
	else
	{
		printf("este es un numero impar \n %d",iNumA);
		
	}
	
	return 0;
}
