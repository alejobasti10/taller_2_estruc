#include <stdio.h>
/*programa: lee valores hasta que si introduzca un valor en el rango 20-30
o se introduzca el valor 0 el programa debe entregar la suma de los valores
mayores a 0 introducidos
elaborado: alejandro gonzalez
02 sep 2017*/

int main() {
	int iNum;
	int iSuma;
	iSuma=0;
	do{	
		printf("ingrese numeros\n");
	    scanf("%d",&iNum);		
		iSuma=iSuma+iNum;		
		
		
	}while(iNum!=0 && (iNum<20 || iNum>30));
		printf("la suma es de %d\n",iSuma);
	
	
	
	return 0;
}
