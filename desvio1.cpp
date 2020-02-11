#include <stdio.h>
#include <stdlib.h>
main()
{
       int quantprodutos ;
       float precounidade ;
       double valortotal,  valorcomdesconto, bonus ;
       
       printf("\nDIGITE A QUANTIDADE DE PRODUTOS:\n");
       scanf("%d",&quantprodutos);
       printf("\nDIGITE O PRECO DE CADA PRODUTO:\n");
       scanf("%f",&precounidade);
       valortotal=quantprodutos*precounidade;
       if (valortotal<100){ valorcomdesconto=valortotal - (0,05*valortotal);
       printf("\nO VALOR TOTAL EH %.2lf E O VALOR COM DESCONTO EH %.2lf", valortotal , valorcomdesconto); }
       else { if (100<valortotal<1000){ valorcomdesconto=valortotal - (0,05*valortotal);
       bonus=0,05*valortotal;
       printf("\nO VALOR TOTAL EH %.2lf , O VALOR COM DESCONTO EH %.2lf E O BONUS EH %.2lf", valortotal , valorcomdesconto, bonus); }
       else { if (valortotal>1000){ valorcomdesconto=valortotal - (0,1*valortotal);
       bonus=0,05*valortotal;
       printf("\nO VALOR TOTAL EH %.2lf , O VALOR COM DESCONTO EH %.2lf E O BONUS EH %.2lf", valortotal , valorcomdesconto, bonus);
	   printf("\n\nVC EH CLIENTE VIP !!!!\n\n\n"); }
	   }}
       
	   
       system("pause");
}

