#include<stdio.h>
#include<stdlib.h>
#include "banco.h"

char menu() {
	
	fflush(stdin);
	
	char op;
	
	printf("1 - Depositar na conta\n");
	printf("2 - Sacar da conta\n");
	printf("3 - Imprimir saldo da conta\n");
	printf("4 - Sair\n");
	printf("Escolha uma opcao: ");
	scanf("%c", &op);
	printf("\n");
	
	return op;
}

int read_ContaNumero() {
	
	int numero;
	
	printf("Digite o numero para nova conta: ");
	scanf("%i", &numero);
	
	return numero;
};

float depositar_Saldo(float saldo_atual) {
	
	fflush(stdin);
	system("cls");
	
	float deposito;
	
	printf("Digite o valor do deposito: ");
	scanf("%f", &deposito);
	
	return saldo_atual += deposito;
};

float sacar_Saldo(float saldo_atual) {
	
	fflush(stdin);
	system("cls");
	
	float saque;
	
	printf("Digite o valor do saque: ");
	scanf("%f", &saque);
	
	return saldo_atual -= saque;
};

void imprimir_Saldo(float saldo_atual) {
	
	printf("Saldo atual da conta: R$%0.2f\n", saldo_atual);
	printf("\n");
};

void manutencao() {
	
	char operacao = menu();
	float saldo;
	
	while(1==1){
		
		switch(operacao){
		
			case '1':
				 saldo = depositar_Saldo(saldo);
				break;
			
			case '2': 
				saldo = sacar_Saldo(saldo);
				break;
				
			case '3':
				imprimir_Saldo(saldo);
				break;
			
			case '4':
				exit(0);
				break;
		}
		
		operacao = menu();
	}
}




