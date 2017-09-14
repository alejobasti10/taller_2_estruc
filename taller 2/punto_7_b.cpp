#include <stdio.h>
#include<Conio.h>
/*
Programa : que define un vector y calcula la multiplicacion acumulada de sus 
elementos.
Elaboro: alejandro gonzalez
05 septiembre 2017*/

int main()
{
	int iVec[]={1,2,3,4,5};
	int iMultiplicacion;
	int i;
	
	iMultiplicacion=1;
	
	for(i=1;i<=5;i++)
	{
		iMultiplicacion=iMultiplicacion*iVec[5];
	}
	printf("\nLa Multiplicaion acumulada de los elementos del Vector es: %d\n",iMultiplicacion);	
	return 0;
}
