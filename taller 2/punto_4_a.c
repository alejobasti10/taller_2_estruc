#include <stdio.h>
/*programa: lee nuemros hasta que el usuario ingresa un 0
cuenta cuanto numeros se ingresaron antes 
elaborado: alejandro gonzalez
02 sep 2017*/

int main() {
	int iNum;
	int iCont;
		iCont=0;
		do{
			printf("ingrese el numero\n");
			scanf("%d",&iNum);
			if (iNum>0){
				iCont++;
			}			
		}while(iNum!=0);
		printf ("la cantidad de numeros ingresados mayores que 0 es %d",iCont);
		
	return 0;
}

