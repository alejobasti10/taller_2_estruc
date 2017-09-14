#include <stdio.h>
/*programa: sumar los numeros pares del 1 al 50
elaborado: alejandro gonzalez
02 septiembre 2017*/
int main()
{
	int iNum;
	int iSuma;
	
	iSuma=0;
	iNum=1;	
	
	while(iNum<=50)
	{	
		if (iNum%2==0)
		{
			iSuma=iSuma+iNum;
					
		}
		
		iNum++;
		
	}
	printf("%d \n",iSuma);
	return 0;
}
