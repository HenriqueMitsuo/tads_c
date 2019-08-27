#include<stdio.h>
#include<stdlib.h>
// include de bibliotecas criadas pelo usuario
#include "calculadora.h"

// Função para leitura de valores
float read() {
	
	float num;
	
	printf("Digite um numero: ");
	scanf("%f", &num);
	
	return num;
}

// Função para o menu
char menu() {
	
	printf("\n");
	
	fflush(stdin);
	
	char op;
	
	printf("Adicao +\n");
	printf("Subtracao -\n");
	printf("Multiplicacao *\n");
	printf("Divisao /\n");
	printf("Escolha uma operacao: ");
	scanf("%c", &op);
	
	printf("\n");
	
	return op;
}

// Funções para calculo
void soma(float num1, float num2) {
	
	printf("A soma e: %0.2f", num1+num2);
}

void subtracao(float num1, float num2) {
	
	printf("A subtracao e: %0.2f", num1-num2);
}

void multiplicacao(float num1, float num2) {
	
	printf("A multiplicacao e: %0.2f", num1*num2);
}

void divisao(float num1, float num2) {
	
	printf("A divisao e: %0.2f", num1/num2);
}

// Função calculadora
void calculadora(char operacao, float num1, float num2) {
	
	switch(operacao){
		
		case '+':
			soma(num1, num2);
			break;
		
		case '-':
			subtracao(num1, num2);
			break;
		
		case '*':
			multiplicacao(num1, num2);
			break;
			
		case '/':
			divisao(num1, num2);
			break;
		
		default:
			printf("Insira uma operacao valida!");
	}
}
