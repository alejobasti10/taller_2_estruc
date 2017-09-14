#include <stdio.h>
/*
Programa:  muestra la multiplicacion de los elementos de un vector en otro.
elaboro : alejandro gonzalez
06 sept 2017*/

int main()
{
	int v1[5];
	int iSuma;
	int i;
	
	iSuma=0;
	
	printf("Ingrese los 5 elementos del vector:\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&v1[i]);	
		iSuma=iSuma+v1[i];
	}
	if(iSuma==v1[i])
	{
		printf("El resultado de la suma es igual a un elemento del Vector\n");		
	}else{
		printf("El resultado de la sumatoria no es igual a ningun elemento,\n");
	}	
	return 0;
}
