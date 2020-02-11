#include <stdio.h>
#include <stdlib.h>

main ()
{
	int number1, number2 , diferenca;
	printf("\n\nDIGITE O PRIMEIRO NUMERO:\n\n");
	scanf("%d",&number1);
	printf("\n\nDIGITE O SEGUNDO NUMERO:\n\n");
	scanf("%d",&number2);
	if  (number1==number2){ printf("\nNUMEROS IGUAIS");}
	else { if (number1>number2){ diferenca=number1-number2; printf("\n A DIFERENCA EH %.2d",diferenca);}
	else{diferenca=number2-number1; printf("\n A DIFERENCA EH %.2d",diferenca);
	}
	}
	
	system("PAUSE");
}
