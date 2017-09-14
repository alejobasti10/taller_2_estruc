#include <stdio.h>
/*
Programa: muestra la multiplicacion de los elementos de un vector en otro.
Felaboro:alejandro gonzalez
11 sept 2017*/

int main()
{
	int v1[5];
	int v2[5];
	int iMultiplicacion;
	int i;
	
	printf("Ingrese los 5 elementos del vector:\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&v1[i]);	
	}
	printf("Mostrando Vector Multiplicado por 2:\n");
	for(i=0;i<=4;i++)
	{
		iMultiplicacion=v1[i]*2;
		v2[i]=iMultiplicacion;
		printf("%d\n",v2[i]);
	}	
	return 0;
}
