#include <stdio.h>

/*
 * Uma grande companhia química paga seus vendedores
 * por comissão. Os vendedores recebem R$ 200,00 por
 * semana, mais 9% de suas vendas brutas nessa semana.
 * Por exemplo, um vendedor que comercialize R$ 5.000,
 * 00 em produtos químicos em uma semana receberá R$
 * 200,00 e mais 9% de R$ 5.000,00, ou seja, receberá
 * um total de R$ 650,00. Desenvolva um programa que 
 * peça os valores brutos de cada vendedor na semana
 * que passou, calcule e apresente o valor que esse 
 * vendedor deverá receber. Processe os valores 
 * referentes a um vendedor por vez.
 */

int main(void)
{
	// declaração das variáveis
	float venda_semana;

	// laço
	while(venda_semana != -1){
		// entrada de dados
		printf("Insira as vendas da semana (-1 para "
					   "encerrar):");
		scanf("%f", &venda_semana);

		// teste condicional
		if(venda_semana != -1)
			// saída de dados
			printf("O pagamento é de: %.2f\n", (venda_semana
									* 0.09) + 200);
		else
			printf("Encerrando programa...");
	}
	return 0;
}
