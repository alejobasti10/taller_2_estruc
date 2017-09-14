#include <stdio.h>
#include <math.h>
/*programa: calcula el valor de 2^1+2^2+2^3...+2^n
elaborado : Alejandro Gonzalez
fecha:06/09/2017*/

int main(){
	int iPoten;
	int i;
	int iNum;
	int iResul;
	iResul=0;
	printf	 ("ingrese num:\n");
	scanf ("%d",&iNum);
	for (i=1;i<=iNum;i++){
		iPoten=pow(2,i);
		iResul=iResul+iPoten;
		
	}
	printf("El total de la sumatoria es %d\n",iResul);	
	
	return 0;
}
