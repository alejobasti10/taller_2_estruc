#include <stdio.h>

/*programa: que determinan los alumnos que aprobaron todos los examenes,los que 
aprobaron al menos uno y los que unicamente aprobaron el ultimo y calcula las 
estadisticas
elaborado : Alejandro Gonzalez
fecha:07/09/2017*/

int main(){
	int iPares;
	int i;
	float fNotaUno;
	float fNotaDos;
	float fNotaTres;
	int k;
	int iContUno;
	int iContDos;
	int iContTres;
	iContUno=0;
	iContDos=0;
	iContTres=0;
	for (i=1;i<=5;i++)
	{
		printf("ingrese nota uno :\n");
		scanf("%f",&fNotaUno);
		printf("ingrese nota dos :\n");
		scanf("%f",&fNotaDos);
		printf("ingrese nota tres :\n");
		scanf("%f",&fNotaTres);
		if (fNotaUno>=3.0&&fNotaDos>=3.0&&fNotaTres>=3.0){
			iContUno++;
		}
		if (fNotaUno>=3.0||fNotaDos>=3.0||fNotaTres>=3.0){
			iContDos++;
		}
		if (fNotaTres>=3.0){
			iContTres++;
	    }
	}	
	printf("alumnos que aprobaron los tres examenes %d\n",iContUno);
	printf("alumnos que aprobaron un examen %d\n",iContDos);
	printf("alumnos que aprobaron el ultimo examen %d\n",iContTres);	
	
	return 0;
}
