#include<stdio.h>
#include<stdlib.h>
// include de bibliotecas criadas pelo usuario
#include "calculadora.c"
#include "calculadora.h"

int main() {
	
	float num1, num2;
	char op;
	
	num1 = read();
	num2 = read();
	
	op = menu();
	
	calculadora(op, num1, num2);
}
