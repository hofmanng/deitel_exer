#include <stdio.h>

/*
 * Modifique o programa da Figura 3.10 para validar suas
 * entradas. Em qualquer entrada, se o valor inserido for
 * diferente de 1 ou 2, continue o looping até que o usuário
 * informe um valor correto.
 */

int main(void)
{
	// declaração das variáveis
	int num;

	// entrada de dados
	printf("Insira um valor: ");
	scanf("%d", &num);

	// laço
	while((num != 1) && (num != 2)){
		// entrada de dados
		printf("Insira um valor: ");
		scanf("%d", &num);
	}

	return 0;
}
