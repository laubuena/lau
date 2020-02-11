#include <stdio.h>
#include <stdlib.h>

main()
{
	float valor1 , valor2 , diferenca ;
	printf("\n\nDIGITE O PRIMEIRO VALOR\n\n");
	scanf("%f",&valor1);
	printf("\n\nDIGITE O SEGUNDO VALOR \n\n");
	scanf("%f",&valor2);
	
	if (valor1>valor2){ diferenca=valor1-valor2;
	printf("\n\nDIFERENCA EH %.f  \n",diferenca);
	}
	else {diferenca=valor2-valor1;
	printf("\n\nDIFERENCA EH %.f  \n",diferenca);
	}
	system("PAUSE");
	
}
