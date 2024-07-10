/*beecrowd | 1025
Onde está o Mármore?

Por Monirul Hasan Tomal, SEU   Bangladesh
Timelimit: 2

Raju e Meena adoram jogar um jogo diferente com pequenas peças de mármores, chamados Marbles. Eles têm um monte destas peças com números escritos neles. No início, Raju colocaria estes pequenos mármores um após outro em ordem ascendente de números escritos neles. Então Meena gostaria de pedir a Raju para encontrar o primeiro mármore com um certo número. Ele deveria contar 1...2...3. Raju ganha um ponto por cada resposta correta e Meena ganha um ponto se Raju falha. Depois de um número fixo de tentativas, o jogo termina e o jogador com o máximo de pontos vence. Hoje é sua chance de jogar com Raju. Sendo um/a cara esperto/a, você tem em seu favor o computador. Mas não subestime Meena, ela escreveu um programa para monitorar quanto tempo você levará para dar todas as respostas. Portanto, agora escreva o programa, que ajudará você em seu desafio com Raju.
Entrada

A entrada contém vários casos de teste, mas o total de casos é menor do que 65. Cada caso de teste inicia com dois inteiros: N que é o número de mármores e Q que é o número de consultas que Meena deseja fazer. As próximas N linhas conterão os números escritos em cada um dos N mármores. Os números destes mármores não tem qualquer ordem em particular. As seguintes Q linhas irão conter Q consultas. Tenha certeza, nenhum dos números da entrada é maior do que 10000 e nenhum deles é negativo.
A entrada é terminada por um caso de teste onde N = 0 e Q = 0.
Saída

Para cada caso de teste de saída deve haver um número serial do caso de teste. Para cada consulta, escreva uma linha de saída. O formato desta linha dependerá se o número consultado estiver ou não escrito em um dos mármores. Os dois diferentes formatos são descritos abaixo:
'x found at y', se o primeiro marble x foi encontrado na posição y. Posições são numeradas de 1, 2,...  a N.
'x not found', se o marble com o número x não estiver presente.*/


#include <stdio.h>
#include <stdlib.h>

int comp(const void*, const void*);

int binarySearch(int*, int, int);

int main()
{
	int n, q, *marbles, i = 0,teste,index,caso = 1;
	
	scanf("%d %d", &n, &q);
	
	int auxN = n, auxQ = q;
	do
	{
		marbles = (int*)malloc(sizeof(int) * n);
		
		while(auxN--)
			scanf("%d",&marbles[i++]);
		
		i = 0;
		
		qsort(marbles, n, sizeof(int), comp);
				
		printf("CASE# %d:\n", caso++);
		while(auxQ--)
		{
			scanf("%d",&teste);
			index = binarySearch(marbles, teste, n);
			
			if(index == -1)
				printf("%d not found\n",teste);
			else
				printf("%d found at %d\n",teste,index);
		}
		
		free(marbles);
		
		scanf("%d %d", &n, &q);
		
		auxN = n;
		auxQ = q;
		
	}while(n != 0 && q != 0); 
	
	return 0;
}
int binarySearch(int *vetor, int valor, int elementos)
{
	int inicio = 0, fim = elementos;
	
	while(inicio < fim)
	{
		int meio = (inicio + fim) / 2;
		
		if(vetor[meio] < valor)
			inicio = meio + 1;
		else
			fim = meio;
	}
	return vetor[inicio] == valor ? inicio + 1 : -1;
}
int comp(const void *p1, const void *p2)
{	
	int *i = (int *)p1, *j = (int *)p2;

	if (*i < *j)
		return -1;
	else
		if(*i == *j)
			return 0;
		else
			return 1;
}
