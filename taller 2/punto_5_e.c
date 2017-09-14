#include <stdio.h>
#include <math.h>
/*programa: calcula el reswultado de la siguiente expresion 1-2+3-4+5+6 hasta n
elaborado : Alejandro Gonzalez
fecha:07/09/2017*/

int main(){
	int iPares;
	int i;
	int iNum;
	int iResul;
	int iImpares;
	int k;
	int iSumNegat;
	iImpares=0;
	iSumNegat=0;
	
	printf	 ("ingrese num:\n");
	scanf ("%d",&iNum);
	for (i=1;i<iNum;i+=2)
	{
		iImpares+=i;
	}
	printf("\n");		
	for (k=2;k<=iNum;k+=2)
	{
		iPares=k*(-1);
		iSumNegat+=iPares;
	}

	
	iResul=iImpares+iSumNegat;
	printf ("el total de la sumatoria es %d\n",iResul);
	return 0;
}
