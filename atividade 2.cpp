#include <stdlib.h>
#include <stdio.h>
#include  <time.h>
int gera_num(int);
main() {
    int i , A , B ;
    srand(time(NULL));
	
	for (i=0;i<=20;i++){
		A=gera_num(-1);
		B=gera_num(-1);
    	printf("Elemento A %d\n\n", A);
    	printf("Elemento B %d\n\n" , B);
    	
		if ((A>=0)&&(B<0))
    	  printf("A cede eletrons e B recebe eletrons\n");
    	if ((B>=0)&&(A<0))  
    	  printf("B cede eletrons e A recebe eletrons\n");
    	if ((A>B)&&(B>=A))
    	  printf("nao ocorre ligacao\n");  
		if(A>=0 && B>=0) {
		  if (A>B)
		    printf("A cede eletrons e B recebe eletrons\n");
		  else {
			if(B>A)
			   printf("B cede eletrons e A recebe eletrons\n");
			else
			   printf("nao ocorre ligacao\n");
           }
		}
    }

}

int gera_num(int A) {

	return (-1 + rand() % 3);
	
}
