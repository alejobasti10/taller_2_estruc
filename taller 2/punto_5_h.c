#include <stdio.h>
#include <math.h>
/*programa: calcula la descomposicion en factores primos de un numero entero
elaborado : Alejandro Gonzalez
fecha:07/09/2017*/

int main(){
	int iNum;
	int iFact;
	
	printf	 ("ingrese un numero entero:\n");
	scanf ("%d",&iNum);
	for (iFact=2;iFact<=iNum;iFact++)
	{
		while (iNum%iFact==0)
		{	
			iNum/=iFact;
			printf("la descomposicion del numero es: %d | %d \n",iNum,iFact);
		}
	}
	
	return 0;
}


