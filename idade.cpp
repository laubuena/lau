#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 main(){
       int quantproduto , valorunidade , valortotal , valorcomdesconto , bonus ;
       
       printf("\nDigite a quantidade de produtos :    ");
       scanf("%d",&quantproduto);
       printf("\nDigite o valor unitario dos produtos :     ");
       scanf("%d",&valorunidade);
       valortotal=valorunidade*quantproduto;
       scanf("%d",&valortotal);
       printf("\nValor total eh :%.2d    ",valortotal);
       
	   if(valortotal<100) 
	   {
	   valorcomdesconto=0.05*valortotal;
       scanf("%d",&valorcomdesconto);
       printf("\nValor com desconto eh :%.2d    ",valorcomdesconto);}
       
	   else {
	   if(100<valortotal<1000) 
	   {
	   valorcomdesconto=0,05*valortotal;
	   scanf("%d",&valorcomdesconto);
	   printf("\nValor com desconto eh :%.2d    ",valorcomdesconto);
	   bonus=0,05*valorcomdesconto;
	   scanf("%d",&bonus);
	   printf("\nValor do bonus eh :%.2d    ",bonus);}}
	    
		if(valortotal>1000) 
	   {
	   valorcomdesconto=0,1*valortotal;
	   scanf("%d",&valorcomdesconto);
	   printf("\nValor com desconto eh :%.2d    ",valorcomdesconto);
	   bonus=0,05*valorcomdesconto;
	   scanf("%d",&bonus);
	   printf("\nValor do bonus eh :%.2d    ",bonus);
	   printf("\nParabens parssa vc eh nosso cliente vip!!!    ");}
	   
       
       
       
       system("pause");
}


