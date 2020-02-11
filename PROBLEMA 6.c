#include  <stdio.h>
#include  <stdlib.h>
#include  <string.h>
#include  <time.h>
int gera_num(int);
int main() {
	
	int A, B,C, i,tanquers[3], rstot, betot, tanquebe[3], final, adubo_organico1, adubo_organico2[3];
	char imprime_menu;
	float F, xF, W, xW, M, xM;
	printf("/*-----------------------------------------------*\n");
	printf("(A)– CALCULAR BALANÇO MATERIAL SEM REAÇÃO QUÍMICA E EM REGIME PERMANENTE\n");
	printf("(B)– FAZER SIMULAÇÃO DE LIGAÇÃO IÔNICA\n");
	printf("(C)– SIMULAR PRODUÇÃO DE ADUBO ORGÂNICO\n");
	printf("(1)– PARA SAIR\n");
	printf("/*-----------------------------------------------*");
	printf("Digite sua opção:");
	scanf("%c",&imprime_menu);
	
	switch(imprime_menu){
		case 'A':
			printf("informe as massas F e W:");
			scanf("%f %f",&F,&W);
			printf("Informe as frações molares de xF e xW:");
			scanf("%f %f",&xF,&xW);
			printf("A massa de entrada F e W sao : %.2f e %.2f\n",F,W);
			printf("A fracao molar de entrada de xP e xW sao respectivamente: %.2f e %.2f\n\n",xF,xW);
			      M=F+W;
			      xM=((F*xF)+(W*xW))/M;
			if(xM==0 && xW==0){
			    printf("reacao nula\n");
			    printf("A massa de saida eh: %.2f\n\n\n", xM);
			}
			       else{
			       	    printf("A massa de saída eh: %.2f\n",M);
			       	    printf("A fracao molar de saida xP eh %.2f\n\n\n",xM);
			       	    }
		break;
		switch(imprime_menu){		   
		case 'B':
			srand(time(NULL));
			for(i=0; i<5;i++){
				A = gera_num(-1);
				B = gera_num(-1);
				printf("elemento A = %d\n",A);
				printf("elemento B = %d\n",B);
				printf("\n");
				if((A>=0)&&(B<0))
				printf("A oxida e B reduz\n\n");
				  else{
				  	  if((A<0)&&(B>=0))
				  	  printf("B oxida e A reduz\n\n ");
				  	  else
				  	      printf("Nao tem ligacao ionica\n\n");
							}}}
	    switch(imprime_menu){
		case 'C':
			    srand(time(NULL));
	printf("Os valores de cada tanque de residuos solidos sao os seguintes:\n\n");
	for(i=0; i<12; i++){
		tanquers[i] = 1 + rand() % (100-1+1);
		printf ("Tanque %d = %d\n", i+1, tanquers[i]);	
	}
	printf("\n\nOs valores de cada tanque de bioestabilizadores sao os seguintes:\n\n");
	for(i=0; i<12; i++){
		tanquebe[i] = 1 + rand() % (100-1+1);
		printf ("Tanque %d = %d\n", i+1, tanquebe[i]);			
	}
	for(i=0; i<12; i++){
		rstot+=tanquers[i];
		betot+=tanquebe[i];		
	}
	adubo_organico1=(rstot*betot)+1;
	printf("\n\n\n\nAdubo produzido = %d\n\n\n\n", adubo_organico1);
	printf("Tanques de adubo organico foram produzidos como se encontram os valores abaixo:\n\n");
	for(i=0; i<12; i++){
		adubo_organico2[i]=(tanquers[i]+tanquebe[i])+1;
		printf("Tanque de adubo %d = %d\n", i+1, adubo_organico2[i]);
	}}
	   switch(imprime_menu){
	   case '1':
	   break;}	
	
	int gera_num(int B ); 
	return (-1 + rand() % 3);}
	
}
			
				       

	
	

