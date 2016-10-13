#include <stdio.h>

/*
 * Desenvolva um programa que determine o salário
 * semanal bruto de vários funcionários. A empresa
 * paga 'uma hora normal' para cada funcionário pelas
 * primeiras 40 horas trabalhadas, 'uma hora normal
 * e meia' por hora trabalhada a partir de 40 horas. 
 * Você recebe uma lista de funcionários da empresa,
 * o número de horas que cada funcionário trabalhou
 * na semana anterior e o valor ganho por hora de cada
 * funcionário. Seu programa deverá ler essas 
 * informações para cada funcionário e determinar e
 * exibir o salário cada um deverá receber. 
 */

int main(void)
{
	// declaração das variáveis
	float horas_trabalhadas, salario;

	// laço
	while(horas_trabalhadas != -1){
		// entrada de dados
		printf("Insira a quantidade horas trabalhadas "
						"(-1 para encerrar): ");
		scanf("%f", &horas_trabalhadas);

		// teste condicional
		if(horas_trabalhadas != -1){
			// entrada de dados
			printf("Digite o salário por hora do "
							"funcionário: ");
			scanf("%f", &salario);
			// teste condicional
			if(horas_trabalhadas > 40)
				// saída de dados
				printf("Salário é de R$%.2f\n", ((40 * salario)
										+ (horas_trabalhadas - 40) 
										* (salario * 1.5)));
			else
				// saída de dados
				printf("Salário é de R$%.2f\n", (horas_trabalhadas
										* salario));

		} else
			printf("Encerrando programa...\n");
	}

	return 0;
}

		
