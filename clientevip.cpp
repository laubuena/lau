#include <stdio.h>
#include <stdlib.h>

main()
{
	float valorunidades , quantunidades , valortotal , bonus , valorcomdesconto, valorcomdesconto2;
	printf("\n\ndigite a quantidade de produtos comprados:  \n");
	scanf("%f",&quantunidades);
	printf("\n\ndigite o valor das unidades de produtos comprados:  \n");
	scanf("%f",&valorunidades);
	valortotal=quantunidades*valorunidades;
	valorcomdesconto=0,05*(valortotal);
	bonus=0,05*(valortotal);
	valorcomdesconto2=0,1*(valortotal);
	if (valortotal<100){printf("valor total eh %.3f valor com o desconto eh de %.3f\n",valortotal,valorcomdesconto);}
	else if( 100<valortotal && valortotal<1000){printf("valor total eh %.3f valor com o desconto eh de %.3f e o bonus eh %.3f\n",valortotal,valorcomdesconto,bonus);}
	else { printf("valor total eh %.3f valor com o desconto eh de %.3f e o bonus eh %.3f\n",valortotal,valorcomdesconto2,bonus);
	printf("\n\no home eh vip\n\n");}
	
    system("PAUSE");
}


