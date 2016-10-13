#include <stdio.h>

/*
 * Desenvolva um programa em C que determine se 
 * um cliente de uma loja de departamentos 
 * excedeu seu limite de crédito. Os seguintes 
 * fatos estão disponíveis para cada cliente:
 *
 * a) Número de conta.
 * b) Saldo no início do mês.
 * c) Total de todos os encargos desse cliente 
 * nesse mês.
 * d) Total de todos os créditos aplicados à conta
 * desse cliente nesse mês.
 * e) Limite de crédito autorizado.
 *
 * O programa deverá ler cada um desses fatos, calcular
 * o novo saldo (= saldo inicial + encargos - créditos)
 * e determinar se o novo saldo é superior ao limite 
 * de crédito do cliente. Para os clientes cujo limite 
 * de cŕedito foi ultrapassado, o programa deverá 
 * exibir o número de conta do cliente, o limite de 
 * crédito, o novo saldo e a mensagem 'Limite de crédito
 * ultrapassado'. 
 */

int main(void)
{
	// declaração das variáveis
	int num_conta;
	float saldo_inicio, encargos, creditos, limite, saldo;

	// laço
	while(num_conta != -1){
		// entrada de dados
		printf("Informe o número da conta (-1 para "
			   "encerrar): ");
		scanf("%d", &num_conta);

		// teste condicional
		if(num_conta != -1){
			// entrada de dados
			printf("Informe o saldo inicial: ");
			scanf("%f", &saldo_inicio);
			printf("Informe o total de encargos: ");
			scanf("%f", &encargos);
			printf("Informe o total de créditos: ");
			scanf("%f", &creditos);
			printf("Informe o limite de créditos: ");
			scanf("%f", &limite);

			// processamento
			saldo = saldo_inicio + encargos - creditos;

			// saída de dados
			printf("\n\nConta: %d\n", num_conta);
			printf("Limite de crédito: %.2f\n", limite);
			printf("Saldo: %.2f\n\n", saldo);

			// teste condicional
			if(saldo > limite)
				printf("Limite de crédito ultrapassado\n");

		} else
			printf("Encerrando programa...\n");
	}

	return 0;
}
