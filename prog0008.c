#include <stdio.h>

/*
 * Escreva um programa que utilize o looping para
 * imprimir os números de 1 a 10 lado a lado na 
 * mesma linha, com três espaços entre os números.
 */

int main(void)
{
	// declaração das variáveis
	int i;

	// laço
	for(i = 1; i <= 10; i++)
		// saída de dados
		printf("%d   ", i);

	return 0;
}
