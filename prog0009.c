#include <stdio.h>

/*
 * O processo de achar o número maior (ou seja, o máximo 
 * de um grupo de números) é usado com frequência nas 
 * aplicações de computador. Por exemplo, um programa que
 * determina o vencedor de uma disputa de vendas lerá o
 * número de unidades vendidas por vendedor. O vendedor 
 * que tiver vendido mais unidades vence a disputa. 
 * Escreva um programa em pseudocódigo e depois um programa
 * que leia uma série de 10 números, determine e imprima 
 * o maior dos números. [Dica: seu programa deverá usar 
 * três variáveis da seguinte forma]:
 *
 * contador : Um contador para contar até 10
 *
 * numero : O número da entrada atual no programa
 *
 * maior : O maior número achado até o momento
 */

int main(void)
{
	// declaração das variáveis
	int n, numero, maior;

	// laço
	for(n = 1; n <= 10; n++){
		// entrada de dados
		printf("Insira um valor: ");
		scanf("%d", &numero);

		// teste condicional
		if(n == 1)
			maior = numero;
		else
			if(maior < numero)
				maior = numero;
	}

	// saída de dados
	printf("O maior número inserido foi %d\n", maior);

	return 0;
}
