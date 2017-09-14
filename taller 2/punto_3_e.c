#include <stdio.h>
/*programa: solucionar el factorial de un numero
elaborado: alejandro gonzalez
02 septiembre 2017*/
int main()
{
	int iNum;
	int iNumA;
	int iMult;
	iMult=1;
	iNumA=1;
	scanf("%d",&iNum);
	while(iNumA<=iNum)
	{	
	  iMult=iMult*iNumA;
		
		iNumA++;
		
	}
	printf("%d \n",iMult);
	return 0;
}
