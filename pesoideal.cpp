
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main ()
{
	float pesoideal , altura ;
	char  sexo ;
	
	printf("\n DIGITE A ALTURA:");
	scanf("%f",&altura);

	printf("\n DIGITE O SEXO(F/M):");
    sexo=getche();

	pesoideal= (72.7*altura) – 58;
	printf("\nO peso ideal eh : %f e o sexo da pessoa eh : %c ", pesoideal, sexo);
	
	system("PAUSE");
	
	
}

