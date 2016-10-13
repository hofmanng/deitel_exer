#include <stdio.h>

/*
 * Os juros simples sobre um empréstimo são
 * calculados a partir da seguinte fórmula:
 *
 * juros = principal * taxa * dias / 365;
 *
 * Essa fórmula considera que 'taxa' seja a 
 * taxa de juros anual e, portanto, a divisão
 * por 365 (dias). Desenvolva um programa que 
 * aceite 'principal', 'taxa' e 'dias' para 
 * vários empréstimos, calcule e apresente os
 * juros simples para cada empréstimo, usando
 * a fórmula apresentada. 
 */

int main(void)
{
	// declaração das variáveis
	float juros, principal, taxa, dias;

	// laço
	while(principal != -1){
		// entrada de dados
		printf("Insira o valor principal do "
			   "empréstimo (-1 para encerrar): ");
		scanf("%f", &principal);

		// teste condicional
		if(principal != -1){
			// entrada de dados
			printf("Insira a taxa de juros: ");
			scanf("%f", &taxa);
			printf("Insira o prazo do empréstimo: ");
			scanf("%f", &dias);

			// processamento
			juros = principal * taxa * dias / 365;
			
			// saída de dados
			printf("O valor dos juros é %.2f\n", juros);
		} else
			printf("Encerrando programa...\n");
	}

	return 0;
}
