#include <stdio.h>
/*programa: que define dos vecores de caracteres y despues almacena el contenido
de ambos vectores en un nuevo vector situando en primer lugar los elementos
del primer vector seguido por los elementos del segundo*/

int main() 
{
	char vector1[100],vector2[100],vector3[100];
	int l1,l2;
	int i,j;
	
	i=0;
	j=0;
	
	fgets(vector1,100,stdin);
	fflush(stdin);
	fgets(vector2,100,stdin);
	fflush(stdin);
	
	while(vector1[i]!='#')
	{
		i+=1;
	}
	l1=i;
	i=0;
	while(vector2[i]!='#')
	{
		i+=1;
	}
	l2=i;
	for(i=0;i<l1;i++)
	{
		vector3[i]=vector2[j];
		j+=1;
	}
	printf("Mostrando Nuevo Vector:%s\n",vector3[i]);
	return 0;
}

