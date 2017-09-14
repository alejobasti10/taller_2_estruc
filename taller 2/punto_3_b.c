#include <stdio.h>
/*programa: suma los numeros del 1 AL 100
elaborado: alejandro gonzalez
02 septiembre 2017*/
int main()
{
	int iNum;
    int suma;
	
	suma=0;
	iNum=1;	
	
	while(iNum<=100)	
	{		
		suma=suma+iNum;	
		iNum++;
	}
	printf("%d\n",suma);
	return 0;
}
