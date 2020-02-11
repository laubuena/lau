#include <stdio.h>
#include <stdlib.h>

main()
{  
    float t, ti , tf , p;
    printf("\nDigite o intervalo de temperatura (Tfinal e Tinicial):");
    scanf("%f %f", &tf, &ti);
    for (t=ti; t<=tf; t++) 
	{ 
	    p=(0.082*t)/4;
	    printf ("O valor da pressao eh: %.2f \n", p);
	}
	system ("PAUSE");
}
