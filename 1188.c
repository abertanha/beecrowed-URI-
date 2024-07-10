/* beecrowd | 1188
Área Inferior

Por Neilor Tonin, URI Brasil
Timelimit: 1

Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12]. Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão na área inferior da matriz, conforme ilustrado abaixo (área verde).

Entrada

A primeira linha de entrada contem um único caractere Maiúsculo O ('S' ou 'M'), indicando a operação (Soma ou Média) que deverá ser realizada com os elementos da matriz. Seguem os 144 valores de ponto flutuante de dupla precisão (double) que compõem a matriz.
Saída

Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.
*/

#include <stdio.h>
 
int main() {
 
    float M[12][12];
	char operacao;
	
	scanf("%c", &operacao);
	
	for(int i = 0; i < 12; i++)
	{
		for(int j = 0; j < 12; j++)
		{
			scanf("%f",&M[i][j]);
		}		
	}
	float soma = 0, cont = 0;
	
	
	for(int i = 0; i < 12; i++)
	{
		for(int j = 0; j < 12; j++)
		{
			if(i == 11 && (j >= 1 && j <= 10))
			{
				soma += M[i][j];
				cont++;
			}
			if(i == 10 && (j > 1 && j < 10))
			{
				soma += M[i][j];
				cont++;
			}
			if(i == 9 && (j > 2 && j < 9))
			{
				soma += M[i][j];
				cont++;
			}
			if(i == 8 && (j > 3 && j < 8))
			{
				soma += M[i][j];
				cont++;
			}
			if(i == 7 && (j == 5 || j == 6))
			{
				soma += M[i][j];
				cont++;
			}
			
		}		
	}
	if (operacao == 'S')
		printf("%.1f\n",soma);
	if (operacao == 'M')
		printf("%.1f\n",(soma/cont));
	
    return 0;
}
