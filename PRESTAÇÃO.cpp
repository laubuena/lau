#include <math.h>
#include <stdio.h>
#include <stdlib.h>

main()
{
	
	 float prestacao, valor , taxa , tempo;
	 printf("\nDIGITE O VALOR EM REAIS:");
	scanf("%f",&valor);
	printf("\nO VALOR EH : %.2f REAIS",valor);
    printf("\nDIGITE A TAXA:");
	scanf("%f",&taxa);
	printf("\nA TAXA EH : %.2f",taxa);
	printf("\nDIGITE O TEMPO EM DIAS:");
	scanf("%f",&tempo);
	printf("\nO TEMPO TOTAL EH : %.2f DIAS",tempo);
	prestacao=valor+(valor*(taxa/100)*tempo);
	printf("\nO VALOR DA PRESTACAO EM ATRASO EH: %.2f REAIS", prestacao);
	
	
	system("PAUSE");
}
