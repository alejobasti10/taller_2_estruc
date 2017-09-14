#include <stdio.h>
	/* programa: que pide al usuario que ingrese el valor del radio de una
	circunferencia y devuelve el area,diametro y longitud.
	elaborado por : alejandro gonzalez
	fecha: 27082017 
	*/
	
	int main() 
{
	float fRadio;
	float fArea;
	float fpi;
	float fDcircunf;
	float fLcircunf;
	
	fpi=3.1416;
	
	printf(" \n\n por favor ingrese el valor del radio \n\n ");
	scanf("%f",&fRadio);
	fArea = fpi * (fRadio*fRadio);
	fDcircunf= (2*fpi);
	fLcircunf=(2*fpi)*fRadio;		
	printf("\n el area es : %f \n", fArea);
	printf("\n el radio es : %f \n", fRadio);
	printf("\n el diametro es de : %f \n", fDcircunf);
	printf("\n la longitud de la circunferencia es : %f \n", fLcircunf);
	
	return 0;
}
