#include <stdio.h>

/*programa:lee un numero y dice si es positivo o negativo
elaborado:alejandro gonzalez
02 septiembre 2017*/

int main()
{
	int iNumA;
	
	
	printf("Ingrese el numero\n");
	scanf("%d",&iNumA);
	
	
	if (iNumA>=0)
	{
		printf("este es un numero positivo\n %d",iNumA);
		
	}
	else
	{
		printf("este es un numero negativo \n %d",iNumA);
		
	}
	
	return 0;
}
