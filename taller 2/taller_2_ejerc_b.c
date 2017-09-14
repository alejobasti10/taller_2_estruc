#include <stdio.h>
/*programa: usuario que ingresa la base y la altura de un triangulo y 
calcula su area
elaborado: alejandro gonzalez
fecha 27 08 2017  */

int main()
{
float fBase;
float fAltura;
float fArea;
printf("\n\n por favor ingrese la base del triangulo\n\n");
scanf("%f",&fBase);
printf("\n\n por favor ingrese la altura del triangulo\n\n");
scanf("%f",&fAltura);
fArea= (fBase*fAltura)/2;
printf("\n el area del triangulo es de %f\n", fArea);
printf("\n la altura del triangulo es de %f\n", fAltura);
printf("\n la base del triangulo es de %f\n", fBase);
	
	return 0;
}

