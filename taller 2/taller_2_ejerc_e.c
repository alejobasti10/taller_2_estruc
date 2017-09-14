#include <stdio.h>
/*programa: pedir al usuario el valor del dolar despues le pide el numero de
dolares y le da el valor de los dolares que tiene
elaborado: alejandro gonzalez
31 08 2017*/

int main() 
{
	float fValorDolar;
	int iNumeroDolares;
	float fDineroDolares;
	
	printf("Ingrese el valor del dolar \n");
	scanf("%f",&fValorDolar);
	printf("Ingrese el numero de dolares \n");
	scanf("%d",&iNumeroDolares);
	fDineroDolares=fValorDolar*iNumeroDolares;
	printf(" el valor del dolar es :%f\n",fValorDolar);
	printf(" el numero de dolares es de  :%d\n",iNumeroDolares);
	printf(" el total en dinero es de  :%f\n",fDineroDolares);
	return 0;
}

