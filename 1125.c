/*beecrowd | 1125
Fórmula 1

Maratona de Programação da SBC Brasil
Timelimit: 1

A temporada de Fórmula 1 consiste de uma série de corridas, conhecidas como Grandes Prêmios, organizados pela Federação Internacional de Automobilismo (FIA). Os resultados de cada Grande Prêmio são combinados para determinar o Campeonato Mundial de Pilotos. Mais especificamente, a cada Grande Prêmio são distribuídos pontos para os pilotos, dependendo da classificação na corrida. Ao final da temporada, o piloto que tiver somado o maior número de pontos é declarado Campeão Mundial de Pilotos.

Os organizadores da Fórmula 1 mudam constantemente as regras da competição, com o objetivo de dar mais emoção às disputas. Uma regra modificada para a temporada de 2010 foi justamente a distribuição de pontos em cada Grande Prêmio. Desde 2003 a regra de pontuação premiava os oito primeiros colocados, obedecendo a seguinte tabela:

Ou seja, o piloto vencedor ganhava 10 pontos, o segundo colocado ganhava 8 pontos, e assim por diante.

Na temporada de 2010, os dez primeiros colocados receberão pontos obedecendo a seguinte tabela:


A mudança no sistema de pontuação provocou muita especulação sobre qual teria sido o efeito nos Campeonatos Mundiais passados se a nova pontuação tivesse sido utilizada nas temporadas anteriores. Por exemplo, teria Lewis Hamilton sido campeão em 2008, já que a diferença de sua pontuação total para Felipe Massa foi de apenas um ponto? Para acabar com as especulações, a FIA contratou você para escrever um programa que, dados os resultados de cada corrida de uma temporada determine Campeão Mundial de Pilotos para sistemas de pontuações diferentes.
Entrada

A entrada contém vários casos de teste. A primeira linha de um caso de teste contém dois números inteiros G e P separados por um espaço em branco, indicando respectivamente o número de Grandes Prêmios (1 ≤ G ≤ 100) e o número de pilotos (1 ≤ P ≤ 100). Os pilotos são identificados por inteiros de 1 a P. Cada uma das G linhas seguintes indica o resultado de uma corrida, e contém P inteiros separados por espaços em branco. Em cada linha, o i-ésimo número indica a ordem de chegada do pilodo i na corrida (o primeiro número indica a ordem de chegada do piloto 1 naquela corrida, o segundo número indica a ordem de chegada do piloto 2 na corrida, e assim por diante). A linha seguinte contém um único número inteiro S indicando o número de sistemas de pontuação (1 ≤ S ≤ 10), e após, cada uma das S linhas seguintes contém a descrição de um sistema de pontuação. A descrição de um sistema de pontuação inicia com um inteiro K (1 ≤ K ≤ P), indicando a última ordem de chegada que receberá pontos, seguido de um espaço em branco, seguido de K inteiros k0, k1, ... , kn−1 (1 ≤ ki ≤ 100) separados por espaços em branco, indicando os pontos a serem atribuídos (o primeiro inteiro indica os pontos do primeiro colocado, o segundo inteiro indica os pontos do segundo colocado, e assim por diante).

O último caso de teste é seguido por uma linha que contém apenas dois números zero separados por um espaço em branco.
Saída

Para cada caso de sistema de pontuação da entrada seu programa deve imprimir uma linha, que deve conter o identificador do Campeão Mundial de Pilotos. Se houver mais de um Campeão Mundial Pilotos (ou seja, se houver empate), a linha deve conter todos os Campeões Mundiais de Pilotos, em ordem crescente de identificador, separados por um espaço em branco.
*/

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main() {
 
unsigned short int gp, chegada[MAX_SIZE][MAX_SIZE] = {0}, pilotos, resultados[MAX_SIZE] = {0},sisPnt,pontuacao[MAX_SIZE] = {0},k;
	
	
	
	while(scanf("%hu %hu",&gp,&pilotos), gp)
	{
		for(int i = 0; i < gp;i++)
			for(int j = 0; j < pilotos;j++)
				scanf("%hu", &chegada[i][j]);// recebendo os grids de chegada em matriz
	
		scanf("%hu",&sisPnt);
		
		while(sisPnt--)
		{
			scanf("%hu",&k); //recebendo o ultimo que ainda receberá pontos
			
			for(int i = 0;i < k;i++)
				scanf("%hu", &pontuacao[i]);//regras de pontuação
		
			for(int i = 0;i < gp;i++)
				for(int j = 0;j < pilotos;j++)
					resultados[j] += pontuacao[chegada[i][j] - 1];
						
			unsigned short int maior = 0;
			
			for(int i = 0;i < pilotos;i++)
				if(resultados[i] > maior)
					maior = resultados[i];
				
			unsigned short int flag = 1;
			
			for(int i = 0;i < pilotos;i++)
				if(resultados[i] == maior)
				{
					if(flag)
					{
						printf("%hu",i + 1);
						flag = 0;
					}
					else
						printf(" %hu",i + 1);
				}
			printf("\n");
			
			for(int i = 0;i < pilotos;i++) //resetando sistema de pontuação
				pontuacao[i] = 0;
			for(int i = 0;i < pilotos;i++) //resetando resultados
				resultados[i] = 0;
		}
			for(int i = 0;i < gp;i++)
				for(int j = 0;j < pilotos;j++) //resetando o grid de chegada
					chegada[i][j] = 0;
	}
    return 0;
}
