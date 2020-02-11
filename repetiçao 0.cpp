#include <stdio.h>
#include <stdlib.h>

main()
{
	float nota1 , nota2 , nota3 , nota4 , media;
	
	printf("\n\nDigite a nota 1: ");
	scanf("%f",&nota1);

	printf("\n\nDigite a nota 2: ");
	scanf("%f",&nota2);

	printf("\n\nDigite a nota 3: ");
	scanf("%f",&nota3);
	
	printf("\n\nDigite a nota 4: ");
	scanf("%f",&nota4);
	
	media=(nota1+nota2+nota3+nota4)/4;
	
	if (media>=7) printf("\n\nmedia igual a %.2f , aluno APROVADO\n",media);
	else if(media<5) printf("\n\nREPROVADO\n");
	else printf("\n\naluno na final\n\n");
	
	
	
    system("PAUSE");
}

    
