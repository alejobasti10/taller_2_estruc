#include <stdio.h>

/*programa:leer 3 numeros y despues ingresar un 4 numero y decir si coincide 
con alguno ya digitalizado
elaborado:alejandro gonzalez
02 septiembre 2017*/

int main()
{
	int iNumA;
	int iNumB;
	int iNumC;
	int iNumD;
	
	
	scanf("%d",&iNumA);
	scanf("%d",&iNumB);
	scanf("%d",&iNumC);
	printf("cuarto numero miraremos si coincide \n");
	scanf("%d",&iNumD);
	if (iNumD==iNumA||iNumD==iNumB||iNumD==iNumC)
	{
		printf("numero coincide \n");
	}else{
		printf("numero no coincide con ninguno \n");
	}

	return 0;
}
