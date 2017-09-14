#include <stdio.h>
/*programa: calcula y muestra la suma de los cuadrados de los 10 primeros
enteros mayores que 0
elaborado: alejandro gonzalez
03 sep 2017*/

int main() {
	int i;
	int iSuma;	
	int iAcum;
	iAcum=0;
    i=1;
	iSuma=0;
	for (i=1;i<=10;i++){
	iSuma=i*i;
	iAcum=iAcum+iSuma;
	printf (" %d*%d=%d \n",i,i,iSuma);
	}
	printf("la suma es %d",iAcum);
	
	return 0;
}
