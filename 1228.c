/* beecrowd | 1228
Grid de Largada

Maratona de Programação da SBC Brasil
Timelimit: 1

Na Nlogônia, vai ser realizada a sensacional final mundial da fórmula 17. Os competidores se alinham na largada e disputam a corrida. Você vai ter acesso aos grids de largada e de chegada. A questão é determinar o número mínimo de ultrapassagens que foram efetuadas durante a competição.
Entrada

Cada caso de teste utiliza três linhas. A primeira linha de um caso de teste contém um inteiro N (2 ≤ N ≤ 24) indicando o número de competidores. Cada competidor é identificado com um número de 1 a N. A segunda linha de cada caso tem os N competidores, em ordem do grid de largada. A terceira linha de cada caso tem os mesmos competidores, porém agora na ordem de chegada.
Saída

Para cada caso de teste imprima uma linha contendo um único número inteiro, que indica o número mínimo de ultrapassagens necessárias para se chegar do grid de largada ao grid de chegada.
*/
#include <stdio.h>
 
int main() {
	
	int n,larg[24] = {0},cheg[24] = {0},final[24], soma = 0;
	
	scanf("%d",&n);
	do
	{
		for(int i = 0;i < n;i++)
			scanf("%d",&larg[i]);
		
		for(int i = 0;i < n;i++)
			scanf("%d",&cheg[i]);
		
		
		for(int i = 0;i < n;i++)
			for(int j = 0;j < n; j++)
				if(larg[i] == cheg[j])
				{
					final[j] = i + 1;
					break;
				}
				
		for(int i = 0;i < n;i++)
			for(int j = i + 1;j < n; j++)
			if(final[i] > final[j])
			{
				final[j] = final[j] ^ final[i];
				final[i] = final[i] ^ final[j];
				final[j] = final[j] ^ final[i];
				++soma;
			}
				
		/*for(int i = 0;i < n;i++)
			printf("%d ", final[i]);
		printf("\n");*/
		printf("%d\n", soma);
		soma = 0;
	}while(scanf("%d",&n) != EOF);

    return 0;
}
