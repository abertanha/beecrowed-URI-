/* beecrowd | 2534
Exame Geral

Por Flávio Zavan, UFPR BR Brazil
Timelimit: 1

Todo ano bissexto é realizado o exame geral de matemática da Nlogônia. Todos os cidadãos da nação são avaliados a fim de se estudar o desenvolvimento lógico e matemático do país ao longo dos anos.

Após as correções, os cidadãos são ordenadados de acordo com suas notas (quanto maior, melhor) e recebem descontos no imposto de renda de acordo com sua qualificação.

O Escritório Central de Estatística (ECE) é encarregado de processar os dados das notas obtidas no exame. Entretanto este ano, Vasya, um dos responsáveis, está internado no hospital com gripe H1N1 e você foi contratado para realizar o seu trabalho.

Escreva um programa que dado o número de habitantes da Nlogônia e todas as notas obtidas, responda as consultas para retornar a nota do cidadão que ficou em determinada posição.
Entrada

A entrada contém vários casos de teste. A primeira linha de cada caso contém dois inteiros N (1 ≤ N ≤ 100), Q (1 ≤ Q ≤ 100), o número de habitantes do país e o número de consultas, respectivamente.

As N linhas seguintes contém, cada uma, a nota ni obtida pelo i-ésimo cidadão (0 ≤ ni ≤ 30000).

As próximas Q linhas contém cada uma uma consulta, a posição pi (1 ≤ pi ≤ N) a qual a ECE está interessada em saber a nota.

A entrada termina com fim-de-arquivo (EOF).
Saída

Para cada caso de teste, imprima, para cada consulta, uma linha contendo a nota do cidadão que ficou classificado na posição pi.
*/
#include <stdio.h>
#include <stdlib.h>

int comp(const void, const void);

int main ()
{
	int cidadaos, consultas, notas[100], posicoes[100];
	
	while (scanf("%d %d",&cidadaos,&consultas) != EOF)
	{
	
		for(int i = 0;i < cidadaos;i++)
			scanf("%d",&notas[i]);
		
		qsort(notas, cidadaos, sizeof(int), comp);
		
		for(int i = 0;i < consultas;i++)
			scanf("%d",&posicoes[i]);
		
		for(int i = 0;i < consultas;i++)
			printf("%d\n", notas[posicoes[i] - 1]);
	}	
	return 0;
}

int comp(const void *p1, const void *p2)
{	int *i = (int *)p1, *j = (int *)p2;

	if (*i > *j)
		return -1;
	else
		if(*i == *j)
			return 0;
		else
			return 1;
}
