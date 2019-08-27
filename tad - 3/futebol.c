#include<stdio.h>
#include<stdlib.h>
#include "futebol.h"

void manter_Jogadores() {
	
	JogadorStruct jogadores[30];
	
	int identificador1, identificador2;
	
	while(1 == 1){
		
		int op = menu();
		
		switch(op) {
			
			case 1:
				identificador1 = identificar_Jogador();
				cadastrar_Jogador(&jogadores[identificador1]);
				break;
				
			case 2:
				identificador1 = identificar_Jogador();
				consultar_Jogador(&jogadores[identificador1]);
				break;
			
			case 3:
				printf("jogador 1: ");
				identificador1 = identificar_Jogador();
				printf("\njogador 2: ");
				identificador2 = identificar_Jogador();
				somar_Jogador(&jogadores[identificador1], &jogadores[identificador2]);
				break;
				
			case 4:
				identificador1 = identificar_Jogador();
				avaliar_Jogador(&jogadores[identificador1]);
				break;
			
			case 5:
				exit(0);
				break;
				
			default:
				printf("Escolha uma opcao valida!");
		}
	}
};

int menu() {
	
	fflush(stdin);
	
	int opcao;
	
	printf("1 - Cadastrar jogador\n");
	printf("2 - Consultar jogador\n");
	printf("3 - Somar estatisticas de jogadores\n");
	printf("4 - Avaliar jogador\n");
	printf("5 - Sair\n\n");
	printf("Selecione uma opcao: ");
	scanf("%i", &opcao);
	
	printf("\n");
	
	return opcao;
};

int identificar_Jogador() {
	
	int identificador;
	
	printf("\nInforme o numero identificador: ");
	scanf("%i", &identificador);
	
	printf("\n");
	
	return identificador;
};

void cadastrar_Jogador(JogadorStruct *jogador) {
	
	printf("Digite o nome do jogador: ");
	scanf("%s", &jogador->nome);
	
	printf("Digite o numero de jogos: ");
	scanf("%i", &jogador->jogos);
	
	printf("Digite o numero de gols: ");
	scanf("%i", &jogador->gols);
	
	printf("Digite o numero de assistencias: ");
	scanf("%i", &jogador->assistencias);
	
	system("cls");
};

void consultar_Jogador(JogadorStruct *jogador) {
	
	system("cls");
	
	printf("Dados do jogador: \n");
	
	printf("Nome: %s\n", jogador->nome);
	printf("Jogos: %i\n", jogador->jogos);
	printf("Gols: %i\n", jogador->gols);
	printf("Assistencias: %i\n\n", jogador->assistencias);	
};

void somar_Jogador(JogadorStruct *jogador1, JogadorStruct *jogador2) {
	
	system("cls");
	
	printf("\nSoma das estatisticas: \n");
	
	printf("Jogador 1: %s + Jogador 2: %s\n", jogador1->nome, jogador2->nome);
	printf("Jogos: %i\n", jogador1->jogos + jogador2->jogos);
	printf("Gols: %i\n", jogador1->gols + jogador2->gols);
	printf("Assistencias: %i\n\n", jogador1->assistencias + jogador2->assistencias);
};

void avaliar_Jogador(JogadorStruct *jogador) {
	
	system("cls");
	
	printf("\nO jogador e bom?: \n");
	
	if(jogador->gols >= 1281) {
		
		printf("Sim!\n");
		printf("O jogador %s tem mais gols que o Pele!\n\n", jogador->nome);
	}
	else{
		
		printf("Nao!\n\n");
	}
};
