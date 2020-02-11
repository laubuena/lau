#include <stdio.h>
#include <stdlib.h>

int main(void){

	int n, *palitos = NULL, quantidadePalitos = 0, jogador, linha, i, j, retirada;
	
	printf("Informe a quantidade de linhas\n");
	scanf("%d",&n);
	//Aqui faremos alocação dinâmica do vetor, pois n é informado pelo usuário!
	palitos = malloc (n * sizeof(int));
	if(palitos == NULL){
		printf("ERRO\n");
		exit(-1);
	}

	for(i = 0; i < n; i++){
		printf("%d: ",i+1);
		for(j = 0; j <= i; j++){
			palitos[i]++;
			quantidadePalitos++;
			printf("| ");			
		}
		printf("\n");
	}

	while(quantidadePalitos > 1){
		//execução da jogada do primeiro jogador;		
		printf("\nJogador 1! Eh a sua vez\n");
		jogador = 1;
		printf("Informe a linha e a quantidade de palitos que desejas tirar, respectivamente\n");
		scanf("%d%d",&linha,&retirada);

		if(retirada > palitos[linha-1] || retirada < 1 || linha > n || linha < 1){
			printf("Primeiramente você deve aprender a jogar\n");
			exit(-1);
		}

		quantidadePalitos = quantidadePalitos - retirada;
		palitos[linha-1] = palitos[linha-1] - retirada;		
		for(i = 0; i < n; i++){
			printf("%d: ",i+1);
			for(j = 0; j < palitos[i]; j++){
				printf("| ");
			}
			printf("\n");
		}

		if(quantidadePalitos <= 1)
			break;//sai do laço, pois o jogo acabou!

		//Execução da jogada do segundo jogador
		printf("\nJogador 2! Eh a sua vez!\n");
		jogador = 2;
		printf("Informe a linha e a quantidade de palitos que desejas tirar, respectivamente\n");
		scanf("%d%d",&linha,&retirada);

		if(retirada > palitos[linha-1] || retirada < 1 || linha > n || linha < 1){
			printf("Primeiramente você deve aprender a jogar\n");
			exit(-1);
		}

		quantidadePalitos = quantidadePalitos - retirada;
		palitos[linha-1] = palitos[linha-1] - retirada;		
		for(i = 0; i < n; i++){
			printf("%d: ",i+1);
			for(j = 0; j < palitos[i]; j++){
				printf("| ");
			}
			printf("\n");
		}

	}	

	switch(jogador){
		//Verificando o vencedor!
		case 1:
			if(quantidadePalitos == 1){
				printf("Jogador 1 eh o VENCEDOR\n");
			} else{
				printf("Jogador 2 eh o VENCEDOR, por estupidez do jogador 2\n");
			}
		break;
		case 2:
			if(quantidadePalitos == 1){
				printf("O jogador 2 eh o VENCEDOR\n");
			} else{
				printf("O jogador 1 eh o VENCEDOR, por estupidez do jogador 1\n");
			}
		break;
	}

	free(palitos);
	return 1;
}
