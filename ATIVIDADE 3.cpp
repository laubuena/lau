#include <stdio.h>
#include <time.h>
#include <stdlib.h>

    main(){
	int TRS[10], TBE[10], compostagem[10], i; 

	srand(time(NULL));
	
	for(i=0; i<10; i++){
		TRS[i] = 1 + rand() % (1000-1+1);
	}
	for(i=0; i<10; i++){
		TBE[i] = 2 + rand() % (12-2+1);		
	}
	
	for(i=0; i<10; i++){
		compostagem[i]=(TRS[i]*TBE[i])-2;
	}
    printf("residuos solidos\n"); 
	for(i=0;i<10;i++)
		printf("%d -->  %d\n",i+1, TRS[i]);
	
	printf("\nBioestabilizadores\n");                 
	for(i=0;i<10;i++)
		printf("%d -->  %d\n",i+1,TBE[i]);
	
	printf("\nAdubo organico\n");	             
	for(i=0;i<10;i++)
		printf("%d -->  %d\n",i+1,compostagem[i]);
		             
	

	system("PAUSE");
	return 0;
	
}
