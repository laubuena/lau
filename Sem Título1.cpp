#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	float qtd, preco, cod, precototal;
	printf("Digite o codigo do cliente: ");
	scanf("%f", &cod);
	printf("\nDigite zero para encerrar a entrada dos precos.\n\n");
	do{
		printf("\nR$");
		scanf("%f", &preco);
		precototal+=preco;
	}
	while (preco!=0);
	printf("\n\n\nO preco total e de R$%.2f\n\n\n\n\n\n\n\n", precototal);
	system("PAUSE");
}
