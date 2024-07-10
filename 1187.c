/* beecrowd | 1187
Área Superior

Por Neilor Tonin, URI Brasil
Timelimit: 1

Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12]. Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão na área superior da matriz, conforme ilustrado abaixo (área verde).

Entrada

A primeira linha de entrada contem um único caractere Maiúsculo O ('S' ou 'M'), indicando a operação (Soma ou Média) que deverá ser realizada com os elementos da matriz. Seguem 144 valores com ponto flutuante de dupla precisão que compõem a matriz.
Saída

Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.
*/

#include <stdio.h>
 
int main() {
 
    double M[12][12];
	char operacao;
	
	scanf("%c", &operacao);
	
	for(int i = 0; i < 12; i++)
	{
		for(int j = 0; j < 12; j++)
		{
			scanf("%lf",&M[i][j]);
		}		
	}
	double soma = 0, cont = 0;
	
	
	for(int i = 0; i < 12; i++)
	{
		for(int j = 0; j < 12; j++)
		{
			if(i == 0 && (j >= 1 && j <= 10))
			{
				soma += M[i][j];
				cont++;
			}
			if(i == 1 && (j > 1 && j < 10))
			{
				soma += M[i][j];
				cont++;
			}
			if(i == 2 && (j > 2 && j < 9))
			{
				soma += M[i][j];
				cont++;
			}
			if(i == 3 && (j > 3 && j < 8))
			{
				soma += M[i][j];
				cont++;
			}
			if(i == 4 && (j == 5 || j == 6))
			{
				soma += M[i][j];
				cont++;
			}
			
		}		
	}
	if (operacao == 'S')
		printf("%.1lf\n",soma);
	if (operacao == 'M')
		printf("%.1lf\n",(soma/cont));
	
    return 0;
}
