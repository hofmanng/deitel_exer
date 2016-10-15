#include <stdio.h>

/*
 * Escreva um programa que use o looping para imprimir a
 * tabela de valores a seguir. Use a sequência de escape
 * de tabulaçao \t na instrução printf para separar as 
 * colunas com tabulações.
 */

int main(void)
{
	// declaração das variáveis
	int n;

	printf("N\t10*N\t100*N\t1000*N\n\n");

	// laço
	for(n = 1; n <= 10; n++)
		// saída de dados
		printf("%d\t%d\t%d\t%d\n", n, n * 10, n * 100, n * 1000);

	return 0;
}
