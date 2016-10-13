#include <stdio.h>

/*
 * Formule um algoritmo em para cada um dos seguintes 
 * comandos:
 *
 * a) Obter dois números a partir do teclado, calcular
 * sua soma e exiber o resultado.
 *
 * b) Obter dois números a partir do teclado, determinar 
 * e exibir qual deles (se houver algum) é o maior dos 
 * dois números.
 *
 * c) Obter uma série de números positivos a partir do 
 * teclado, determinar e exibir sua soma. Suponha que 
 * o usuário digite um valor de sentinela -1 para indicar
 * o fim da entrada de dados
 */

int main(void)
{	
	// declaração das variáveis
	int n1, n2, num, soma = 0;
	
	// entrada de dados
	printf("Digite dois números: ");
	scanf("%d %d", &n1, &n2);

	// saída de dados
	printf("Soma: %d\n", n1 + n2);

	// teste condicional
	if(n1 == n2)
		printf("Os números são iguais\n");
	else
		if(n1 > n2)
			printf("O primeiro número é maior que o segundo\n");
		else
			printf("O segundo número é maior que o primeiro\n");

	while(num != -1){
		// entrada de dados
		printf("Digite um valor: ");
		scanf("%d", &num);
		
		// teste condicional
		if(num == -1)
			printf("Saindo do programa...\n");
		else
			if(num < 0)
				printf("O valor é negativo. Insira novamente.\n");
			else
				soma = soma + num;
	}
	
	// saída de dados
	printf("Soma: %d\n", soma);

	return 0;
}
