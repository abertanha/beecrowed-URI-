/*beecrowd | 1483
Jogo do Bicho
Por Ricardo Anido Brasil
Timelimit: 1

Em um país muito distante, as pessoas são viciadas em um jogo de apostas bastante simples. O jogo é baseado em números e é chamado jogo do bicho. O nome do jogo deriva do fato que os números são divididos em 25 grupos, dependendo do valor dos dois últimos dígitos (dezenas e unidades), e cada grupo recebe o nome de um animal. Cada grupo é associado a um animal da seguinte forma: o primeiro grupo (burro) consiste nos números 01, 02, 03 e 04; o segundo grupo (águia) é composto dos números 05, 06, 07 e 08; e assim em diante, até o ultimo grupo contendo os números 97, 98, 99 e 00. As regras do jogo são simples. No momento da aposta, o jogador decide o valor da aposta V e um número N (0 ≤ N ≤ 1000000). Todos os dias, na praça principal da cidade, um número M é sorteado (0 ≤ M ≤ 1000000). O prêmio de cada apostador é calculado da seguinte forma:

    Se M e N têm os mesmos quatro últimos dígitos (milhar, centena, dezena e unidade), o apostador recebe V × 3000 (por exemplo, N = 99301 e M = 19301);
    Se M e N têm os mesmos três últimos dígitos (centena, dezena e unidade), o apostador recebe V × 500 (por exemplo, N = 38944 e M = 83944);
    Se M e N têm os mesmos dois últimos dígitos (dezena e unidades), o apostador recebe V × 50 (por exemplo, N = 111 e M = 552211);
    Se M e N têm os dois últimos dígitos no mesmo grupo, correspondendo ao mesmo animal, o apostador recebe V × 16 (por exemplo, N = 82197 and M = 337600);
    Se nenhum dos casos acima ocorrer, o apostador não recebe nada.
    Obviamente, o prêmio dado a cada apostador é o máximo possível de acordo com as regras acima. No entanto, não é possível acumular prêmios, de forma que apenas um dos critérios acima deve ser aplicado no cálculo do prêmio. Se um número N ou M com menos de quatro dígitos for apostado ou sorteado, assuma que dígitos 0 devem ser adicionados na frente do numero para que se torne de quatro dígitos; por exemplo, 17 corresponde a 0017.
    Dado o valor apostado, o número escolhido pelo apostador, e o número sorteado, seu programa deve calcular qual o prêmio que o apostador deve receber.

Entrada

A entrada contém vários casos de teste. Cada caso consiste em apenas uma linha, contendo um número real V e dois inteiros N e M, representando respectivamente o valor da aposta com duas casas decimais (0.01 ≤ V ≤ 1000.00), o número escolhido para a aposta (0 ≤ N ≤ 1000000) e o número sorteado (0 ≤ M ≤ 1000000). O final da entrada é indicado por uma linha contendo V = M = N = 0.
Saída

Para cada um dos casos de teste seu programa deve imprimir uma linha contendo um número real, com duas casas decimais, representando o valor do prêmio correspondente à aposta dada.*/

#include <stdio.h>
 
int main() {
 
    double valor, premio;
	int n, m, intervalos[24], interInicial = 1, 
	doisUltN, doisUltM, tresUltN, tresUltM, quatroUltN, quatroUltM;
	
	scanf("%lf %d %d",&valor,&n,&m);
	
	for(int i = 0;i <= 24;i++)
	{
		intervalos [i] = interInicial;
		interInicial += 4;
	}
	do
	{
		premio = 0; 
		doisUltN = n % 100;
		doisUltM = m % 100;
		tresUltN = n % 1000;
		tresUltM = m % 1000;
		quatroUltN = n % 10000;
		quatroUltM = m % 10000;
		
		if(quatroUltN == quatroUltM)
			premio = valor * 3000;
		else
			if(tresUltN == tresUltM)
				premio = valor * 500;
			else
				if(doisUltN == doisUltM)
					premio = valor * 50;
				else
					if((doisUltN == 00) && (doisUltM == 00))
						premio = valor * 16;
					else
					{
						for(int i = 0; i <= 24;i++)
						{
							if((doisUltN >= intervalos[i]) && (doisUltN < intervalos[i+1]))
							{
								if((doisUltM >= intervalos[i]) && (doisUltM < intervalos[i+1]))
									premio = valor * 16;
								else
									if((doisUltN >= 97)&&(doisUltM >= 97))
										premio = valor * 16;
							}
						}
					}
		printf("%.2lf\n", premio);
		
		scanf("%lf %d %d",&valor,&n,&m);
	}while((valor!=0)||(n!=0)||(m!=0));
	
	return 0;
}
