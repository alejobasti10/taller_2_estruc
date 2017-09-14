#include <stdio.h>
/*
Programa :que muestra en pantalla el mayor de sus elementos.
elaborado: alejandro gonzalez
5 sept 2017*/

int main()
{
	int iVec[100];
	int i;
	int iNum;
	int iMayor;
	int l;	
	printf("Ingrese Longitud del vector:\n");
	scanf("%d",&l);
	for (i=0;i<l;i++)
	{
		printf("Ingrese elementos del vector:\n");
		scanf("%d",&iVec[i]);
	}
	
	iMayor=iVec[0];
	for(i=0;i<l;i++)
	{
		if(iVec[i]>iMayor){
			iMayor=iVec[i];
		}		
	}
	printf("El Mayor de sus elementos es: %d\n",iMayor);
	
	return 0;
}
