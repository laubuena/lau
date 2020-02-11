#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void imprime_menu(void);
int gera_num_B(int);
int gera_num_C(int, int);
void adubo(void);
void ionica(void);
void balanco(void);

int main () {
	
	char aux[2];
	srand(time(NULL));
	do {
		printf("\n");
		if (aux[0]!='A' || aux[0]!='B' || aux[0]!='C' || aux[1]!=NULL) {
		   imprime_menu();
		   fflush(stdin);
		   scanf("%s", &aux);
		   strcpy(aux, (strupr(aux)));
	    }
		
	    if(aux[1]==NULL) {
			
	        switch(aux[0]) {
	    	    case 'A':
	    		    balanco();
				    break;
			    case 'B':
				    ionica();
				    break;
			    case 'C': 
				    adubo();
				    break;
		    }
	    }
		
	} while (aux[0]!='-' || aux[1]!='1');
	printf("\n\n");
	system("PAUSE");

}

void imprime_menu(void) {
	printf("/*-----------------------------------------------------*\\ \n");
	printf("(A) - CALCULAR BALANCO MATERIAL SEM REACAO QUIMICA E EM REGIME PERMANENTE\n");
	printf("(B) - FAZER SIMULACAO DE LIGACAO IONICA \n(C) - SIMULAR PRODUCAO DE ADUBO ORGANICO \n");
	printf("(-1) - PARA SAIR\n");
	printf("/*-----------------------------------------------------*\\ \n");
	printf("Digite sua opcao. \n\n");
}

void balanco(void) {
	
	float F, W, xF, xW, P, xP;
	printf ("\n\nBalanco de massa.\n\n");
	printf("Digite os valores: \n\n");
	printf("Digite o F:\n");
	scanf ("%f", &F);
	printf("\nDigite o W:\n");
	scanf("%f", &W);
	printf("\nDigite o xF:\n");
	scanf("%f", &xF);
	printf("\nDigite o xW:\n");
	scanf("%f", &xW);
	if ((xF==0)&&(xW==0))
	   printf("\nReacao nula. \n\n");
	P=W+F;
	xP=((W*xW)+(F*xF))/P;
	if(P==0)
	   xP=0;
	printf("\n\nO valor de P e xP (massa e fracao acida de saida) sao, respectivamente: P = \"%.2f kg/h\" e xP = %.2f. \n\n", P, xP);
	printf("\n\n");
	
}

void ionica(void) {
	
	int A, B;
	printf ("\n\nLigacao ionica.\n\n");
	for (int i=0; i<5; i++) {
		
		A=gera_num_B(-1);
		B=gera_num_B(-1);
		printf ("O elemento A -> \" %d \". \n\n", A);
		printf ("O elemento B -> \" %d \". \n\n", B);	
		if (A>=0 && B<0)
		   printf ("A cede eletrons e B recebe eletron. \n\n");
		else {
		    if (A<0 && B>=0)
		        printf ("B cede eletrons e A recebe eletrons. \n\n");	
		    else {
		        if (A>B)
		            printf ("A cede eletrons e B recebe eletron. \n\n");
		        else {
			        if(B>A)
				       printf ("B cede eletrons e A recebe eletron. \n\n");
				    else   
					   printf ("Nao ocorre ligacao IONICA! \n\n");
			    }
		    }
		}
	    printf ("\n\n");	
	}
}

void adubo(void) {
	
	int j=0, w=0;
	printf ("\n\nAdubo organico.\n\n");
	int vet1[3], vet2[3], vet3[3];
	printf("Compostagem de material organico. \n\n\n\n\n");
	
	for (int i=0; i<3; i++) {
		vet1[i]=0;
		vet2[i]=0;
	}
	
	for (int i=0; i<9; i++)
		vet3[i]=0;
	
	// para o vetor 1 e 2 e zerando o vetor 3
	
	for (int i=0; i<3; i++) {
	    vet1[i]=gera_num_C(1, 1000);
	    vet2[i]=gera_num_C(2, 12);
	    vet3[i]=0;
	}
	
	//imprimindo vetor 1
	
	printf("Valores armazenados nos tanques de residuos solidos\n\n");
	for (int i=0; i<3; i++) 
		printf("%d  ", vet1[i]);
	printf("\n\n\n");
	
	//imprimindo vetor 2
	
	printf("Valores armazenados nos tanques de bioestabilizadores\n\n");
	for (int i=0; i<3; i++) 
		printf("%d  ", vet2[i]);
	printf("\n\n\n");
	
	// para o vetor 3
	
	for (int i=0; i<3; i++)
	    for (j=0; j<3; j++)
		    vet3[i] += (vet1[i] * vet2[j])-2; 
		        
	printf ("Valores armazenados nos tanques de adubo organico (RESULTANTE): \n\n");
	  
	// imprimir o vetor 3
	
	for (int i=0; i<3; i++) 
	    printf ("%d  ", vet3[i]);
    printf ("\n\n\n");
	
}

int gera_num_B(int a) {
	
	return(a+ rand() % 3); 

}

int gera_num_C(int a, int b) {
	
	return(a + rand() % (b-a)+1); 
	 
}
