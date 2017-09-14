#include <stdio.h>
#include<Conio.h>
/* Programa que define un vector y suma sus elementos.
Elaborado: alejandro gonzalez 
Fecha:05-Septiembre-2017*/

int main()
{
	int iVec[]={1,2,3,4,5};
	int iSuma;
	int i;
	
	iSuma=0;
	
	for(i=0;i<=4;i++)
	{
		iSuma+=iVec[i];		
	}
	printf("\nLa Suma de los elementos del Vector es: %d\n",iSuma);	
	return 0;
}

