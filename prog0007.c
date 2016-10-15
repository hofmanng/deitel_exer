#include <stdio.h>

/*
 * Escreva um programa que demonstre a diferença
 * entre pré-decrementar e pós-decrementar usando
 * o operador de decremento --.
 */

int main(void)
{
	// declaração das variáveis
	int num;

	// entrada de dados
	printf("Insira um valor: ");
	scanf("%d", &num);

	// saída de dados
	printf("Pré-decremento: %d\n", --num);
	// processamento
	num++;
	// saída de dados
	printf("Pós-decremento: %d\n", num--);

	return 0;
}
