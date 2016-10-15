#include <stdio.h>

/*
 * Usando uma técnica semelhante à do exercício 3.24,
 * ache dois maiores valores dos 10 números.
 */

int main(void)
{
	// declaração das variáveis
	int n, num, primeiroMaior, segundoMaior;

	// laço
	for(n = 1; n <= 10; n++){
		// entrada de dados
		printf("Insira um valor: ");
		scanf("%d", &num);

		// testes condicionais
		if(num == 1){
			primeiroMaior = num;
			segundoMaior = num;
		} else
			if(primeiroMaior < num){
				segundoMaior = primeiroMaior;
				primeiroMaior = num;
			}
				
	}
	
	// saída de dados
	printf("Primeiro maior: %d\n", primeiroMaior);
	printf("Segundo maior: %d\n", segundoMaior);

	return 0;
}
