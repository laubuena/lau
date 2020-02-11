#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	int tanquers[12], rstot, betot, tanquebe[12], final, adubo_organico1, adubo_organico2[12], i; 

	srand(time(NULL));
	
	//VALORES DOS DOIS TANQUES
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
	//SOMA DOS TANQUES CASO SEJA A SOMA DE TODOS
	for(i=0; i<12; i++){
		rstot+=tanquers[i];
		betot+=tanquebe[i];		
	}
	adubo_organico1=(rstot*betot)+1;
	printf("\n\n\n\nAdubo produzido = %d\n\n\n\n", adubo_organico1);
	
	//CASO DOIS TANQUES DE RS E BE PRODUZAM UM DE ADUBO
	printf("Tanques de adubo organico foram produzidos como se encontram os valores abaixo:\n\n");
	for(i=0; i<12; i++){
		adubo_organico2[i]=(tanquers[i]+tanquebe[i])+1;
		printf("Tanque de adubo %d = %d\n", i+1, adubo_organico2[i]);
	}
	
	return 0;
	
}
