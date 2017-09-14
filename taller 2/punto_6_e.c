#include <stdio.h>
/*programa : que simula un cajero automatico
elaborado: alejandro gonzalez
04/09/2017*/

int main() {
	int iOpcion;
	int iCuenta;
	int iAbono;
	int iSaldo;
	int iRetiro;
		
	printf ("ingrese 1. Para abonar o 2. Para retirar  : \n");
	scanf ("%d",&iOpcion);
	iCuenta=1000000;
	switch(iOpcion)
	{
	case 1:
		printf("ingrese el valor de abono\n");
		scanf("%d",&iAbono),
			iSaldo=iCuenta+iAbono;
		printf("su saldo es de %d\n",iSaldo);
		break;
	case 2:
		printf("ingrese el valor a retirar \n");
		scanf("%d",&iRetiro);
		iSaldo=iCuenta-iRetiro;
		printf("Su saldo es de %d\n",iSaldo);
		}	
	return 0;
}

