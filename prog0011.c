#include <stdio.h>

/*
 * Escreva um programa que use o looping para 
 * produzir a seguinte tabela de valores:
 *
 * A       A+2       A+4       A+6
 * 3       5         7         9
 * 6       8         10        12
 * 9       11        13        15
 * 12      14        16        18
 * 15      17        19        21
 */

int main(void)
{
	// declaração das variáveis
	int n;

	// laço
	for(n = 3; n <= 15; n = n + 3)
		// entrada de dados
		printf("%d\t%d\t%d\t%d\n", n, n+2, n+4, n+6);

	return 0;
}
