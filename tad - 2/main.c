#include<stdio.h>
#include<stdlib.h>

#include "banco.c"
#include "banco.h"

int main(){
	
	int numero_conta;
	
	numero_conta = read_ContaNumero();
	
	manutencao();
}
