#include <stdio.h>
/*
Programa que muestra la diagonal de una matriz de 3x3.
elaboro alejandro gonzalez
12 sept 2017*/

int main() 
{
	int l;
	int im[3][3];
	
	l=3;
	
	for(int f=0;f<l;f++)
	{
		for(int c=0;c<l;c++)
		{
			printf("Ingrese Elementos de la Matriz\n");
			scanf("%d",&im[f][c]);
		}	
	}
	printf("\n");
	printf("Mostrando Diagonal de la Matriz\n");		
	for(int f=0;f<l;f++)
	{
		for(int c=0;c<l;c++)
		{
			if(f==c)
			{
			  printf("%d",im[f][c]);
			}
		}	
		printf("\n");	
	}
	return 0;
}
