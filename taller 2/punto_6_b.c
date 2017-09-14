#include <stdio.h>
/*programa : leer un caracter indicar si es vocal minuscula, mayuscula o no
es una vocal.
elaborado: alejandro gonzalez
09/09/2017*/

int main() {
	char cVocal;
	printf ("ingrese una letra \n");
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
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':	
		printf("La vocal es mayuscula \n");
		break;
	default:
		printf("la letra no es una vocal\n");			
	}	
	return 0;
}

