/* beecrowd | 2396
Corrida

Por OBI - Olimpíada Brasileira de Informática 2011 BR Brazil
Timelimit: 1

Todo ano, os habitantes da Mlogônia, apesar das crises internas, reúnem-se em torno de um esporte que é a paixão nacional: as corridas de carros. A Grande Corrida anual é um enorme evento organizado pela Associação de Corridas da Mlogônia (ACM), sendo amplamente televisionado e reportado em jornais e revistas de todo o país. Os resultados da corrida são tema principal das rodas de conversa por semanas.

Por bastante tempo, os resultados da Grande Corrida eram compilados manualmente. Observadores especializados iam à pista medir o tempo de cada um dos N carros, numerados de 1 a N, em cada uma das M voltas, anotando então os resultados em tabelas para posterior análise por parte das equipes e dos jornalistas. Muitos erros eram introduzidos nesse processo, e a organização decidiu informatizar todo o sistema.

A ACM percebeu que o esforço necessário para a construção do sistema seria grande, e optou por contar com a ajuda de uma equipe de programadores. Percival foi contratado para escrever a parte do software que determina quais foram os carros vencedores, mas está com dificuldades e pede sua ajuda. A sua tarefa, neste problema, é determinar os três carros melhor colocados, fornecidos os tempos que cada carro levou para completar cada volta da corrida.

No segundo caso de teste abaixo, existem 5 carros numa corrida de duas voltas. Os tempos de cada carro em cada volta foram como na tabela a seguir.

Sendo assim, o vencedor foi o carro 3 (com um tempo total de 2), seguido pelo carro 5 (com um tempo total de 4) e pelo carro 2 (com um tempo total de 7).
Entrada

A primeira linha da entrada contém dois inteiros N (3 ≤ N ≤ 100) e M (1 ≤ M ≤ 100​) representando o número de carros e o número de voltas da corrida, respectivamente.

Cada uma das N linhas seguintes representa um carro: a primeira linha representa o primeiro carro, a segunda linha representa o segundo carro, e assim por diante. Cada linha contém M inteiros representando os tempos em cada volta da corrida: o primeiro inteiro é o tempo da primeira volta, o segundo inteiro é o tempo da segunda volta, e assim por diante (1 ≤ qualquer número da entrada que represente o tempo de uma volta ≤ 106).

Garante-se que não houve dois carros que gastaram o mesmo tempo para completar a corrida inteira.
Saída

A saída consiste de três linhas, contendo um único inteiro cada. A primeira linha contém o número do carro que ganhou a corrida, a segunda contém o número do segundo colocado e a terceira contém o número do terceiro colocado.
*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int main() {
	

	int n,m,aux,aux2,carros[100] = {0}, i = 0, podium[3];
	
	scanf("%d %d",&n,&m);
	
	while(i < n)
	{
		aux2 = m;
		aux = 0;
		while(aux2)
		{
			scanf("%d",&aux);
			carros[i] += aux;
			aux2--;
		}
		i++;
	}
	int menor, menorIndice = 0;
	
	for(int j = 0 ;j < 3;j++)
	{
		menor = INT_MAX;
		for(int i = 0;i < n;i++)
		{
			if(menor > carros[i])
			{
				menor = carros[i];
				menorIndice = i;
			}
		}
		carros[menorIndice] = INT_MAX;
		podium[j] = menorIndice + 1;
	}
	for(i = 0;i < 3;i++)
		printf("%d\n",podium[i]);
	
    return 0;
}
