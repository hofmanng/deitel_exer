#include <stdio.h>

/*
 * Os motoristas se preocupam com o consumo de 
 * combustível de seus automóveis. Um motorista
 * manteve um registro do número de abastecimentos
 * que fez, registrando também o número de quilômetros
 * rodados e de litros obtidos a cada abastecimento.
 * Desenvolva um programa que peça o número de 
 * quilômetros rodados e a quantidade de litros 
 * obtidos a cada abastecimento. O programa deverá
 * calcular e exibir a quantidade de quilômetros 
 * rodados por litros usados. Depois de processar 
 * toda a informação, o programa deverá calcular 
 * e exibir o total combinado de quilômetros por 
 * litro para todos os abastecimentos.
 */

int main(void)
{
	// declaração das variáveis
	float litros, kms,
		  soma_litros = 0,
		  soma_kms = 0;

	while(litros != -1){
		// entrada de dados
		printf("Insira a quantidade de litros usados (-1"
				" para encerrar):");
		scanf("%f", &litros);

		if(litros != -1){
			// processamento
			soma_litros += litros;
			// entrada de dados
			printf("Insira a quantidade de quilômetros"
					" rodados: ");
			scanf("%f", &kms);
			// processamento
			soma_kms += kms;
		} else
			printf("Encerrando programa...\n");
	}
	// saída de dados
	printf("O consumo geral foi de %.2f km/l\n", soma_kms / soma_litros);

	return 0;
}
