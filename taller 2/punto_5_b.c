#include <stdio.h>
/*programa:que calcula la temperatura alta,media y baja 
elaborado: alejandro gonzalez
04 sep 2017*/
int main() {
	float fTemp;
	float fTempAlta;
	float fTempBaja;
	int i;
	float fTempMedia;
	float fSuma;
	fSuma=0;
	fTempAlta=-1;
	fTempBaja=999;
	for( i=1;i<=6;i++){
		printf("Ingrese temperatura: \n");
		scanf("%f",&fTemp);	
		fSuma=fSuma+fTemp;
		fTempMedia=fSuma/6;
		if(fTemp>fTempAlta)
		{					
		 fTempAlta=fTemp;	
		}
		if(fTemp<fTempBaja)
		{
			fTempBaja=fTemp;
		}
		
		
		
		
	}	
	printf("la temperatura mas alta es :%f\n",fTempAlta);
	printf("la temperatura mas baja es :%f\n",fTempBaja);
	printf("la temperatura media es :%f\n",fTempMedia);
	return 0;
}

