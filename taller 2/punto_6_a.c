#include <stdio.h>
/*programa : leer un caracter indicar si es vocal minuscula o no 
elaborado: alejandro gonzalez
09/09/2017*/

int main() {
	char cVocal;
	printf ("ingrese una vocal \n");
	scanf ("%c",&cVocal);
	switch(cVocal)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf ("La vocal es minuscula\n");
		break;
			default :
			printf("La vocal es mayuscula \n");
			
	}	
	return 0;
}

