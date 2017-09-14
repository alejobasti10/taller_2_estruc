#include <stdio.h>
/*programa: calcula el valor de 1+2+3+...+n
elaborado : Alejandro Gonzalez
fecha:06/09/2017*/

int main(){
	int i;
	int num;
	int iAcum;
	int iSuma;
	iAcum=0;
	
	scanf("%d",&num);
	for (i=1;i<=num;i++){
		
		iAcum=iAcum+i;
	}
	printf("%d",iAcum);
	return 0;
}

