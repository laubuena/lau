
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main()
{
      float altura, pesoIdeal;
      char sexo;
      printf ("\nDigite sua altura em metros: ");
      scanf ("%f",&altura);
      printf ("\nDigite seu sexo (F/M): ");
      sexo=getche();
      pesoIdeal=(72.7*altura)-58;
      printf ("\nO sexo digitado foi %c e o peso ideal desta pessoa eh %.2f quilos\n", sexo, pesoIdeal);
      system("PAUSE");	
}

