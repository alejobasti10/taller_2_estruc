#include <stdio.h>
/*programa: lee un numero entero del 1 al 10 y devuelve su tabla de multiplicar
elaborado: alejandro gonzalez
02 sep 2017*/

int main() {
	int iNum;
	int iCont;
	int iResult;
	iCont=0;
	
	printf("ingrese el numero menor que 10\n");
	scanf("%d",&iNum);
	printf("la tabla de multiplicar del :%d",iNum);
	do{	
		iCont++;
		iResult=iNum*iCont;		
		printf (" %d*%d=%d\n",iNum,iCont,iResult);
		
	}while(iCont<=9);{
		
	}
	
	
	return 0;
}
