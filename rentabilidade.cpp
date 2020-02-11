#include <stdio.h>
#include <stdlib.h>

main ()
{   
    float nota  , acumnotas=0 , media;
    int contnotas=0;
    
    do { printf("\ndigite a nota");
	scanf("%f",&nota);
	acumnotas=+nota;
	contnotas++;}
	while (contnotas<10);
	{media=acumnotas/contnotas;
	printf("\nA media eh %.2f",media);}
    
    
    
    
    
    
	system("PAUSE");
}
