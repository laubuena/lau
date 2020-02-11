#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main() {
   float notas[50], media, soma;
   char nomes[3][50];
   char sobrenomes[10][50];
   int t;
   for (int t=0;t<3;t++) {
       printf("\nDiga o nome do Aluno: ");
       gets(nomes[t]);
       printf("\nDiga o sobrnome do Aluno: ");
       gets(sobrenomes[t]);
       printf("\nDigite a nota do aluno %s: ", nomes[t]);
       scanf("%f", &notas[t]);
       fflush(stdin);
   }
   for (int t=0;t<3;t++){
   	soma+=notas[t];
   }
   media=soma/3;
   printf("\n-------media total--------eh %.2f",media);
  
   system("pause");
}

