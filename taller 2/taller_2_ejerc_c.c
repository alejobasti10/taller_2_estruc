#include <stdio.h>
/*programa: calcula el salario de un empleado con sus horas de recargo
elaboro: alejandro gonzalez
fecha 27 08 2017*/

int main() 
{
	int iHorasDiurnas;
	float fHorasNocturnas;
	float fHorasDominicales;
	float fHorasFestivas;
	int iHdiurna;
	int iVhdiurna;
	int iHnocturnas;
	int iVhnocturna;
	int iRecargoHora;
	int iHdominical;
	int iVhdominical;
	int iHfestivas;
	int iVhfestivas;
	int iTotalsalario;
	iHorasDiurnas= 2500;
	
	printf("\n\n por favor ingrese el numero de horas diurnas\n\n");
	scanf("%d",&iHdiurna);
	iVhdiurna=iHorasDiurnas*iHdiurna;
	
	printf("\n\n por favor ingrese el numero de horas nocturnas \n\n");
	scanf("%d",&iHnocturnas);
	iRecargoHora=(iHorasDiurnas*0.35)+iHorasDiurnas;
	iVhnocturna=iRecargoHora*iHnocturnas;
	
	printf("\n\n por favor ingrese el numero de horas dominicales\n\n");
	scanf("%d",&iHdominical);
	iVhdominical=((iHorasDiurnas*0.50)+iHorasDiurnas)*iHdominical;
	
	printf("\n\n por favor ingrese el numero de horas festivas\n\n");
	scanf("%d",&iHfestivas);
	iVhfestivas=((iHorasDiurnas*0.75)+iHorasDiurnas)*iHfestivas;
	iTotalsalario=iVhdiurna+iVhnocturna+iVhdominical+iVhfestivas;
	
	printf("\n el valor de las horas diurnas son de :%d \n",iVhdiurna);
	printf("\n el valor de las horas nocturnas son de :%d \n",iVhnocturna);
	printf("\n el valor de las horas dominicales son de :%d \n",iVhdominical);
	printf("\n el valor de las horas festivas son de :%d \n",iVhfestivas);
	printf("\n el total de su sueldo es de :%d\n",iTotalsalario);
	return 0;
}
