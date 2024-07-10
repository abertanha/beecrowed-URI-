/*beecrowd | 1189
Área Esquerda

Por Neilor Tonin, URI Brasil
Timelimit: 1

Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12]. Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão na área esquerda da matriz, conforme ilustrado abaixo (área verde).

Entrada

A primeira linha de entrada contem um único caractere Maiúsculo O ('S' ou 'M'), indicando a operação (Soma ou Média) que deverá ser realizada com os elementos da matriz. Seguem os 144 valores de ponto flutuante que compõem a matriz.
Saída

Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.*/

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
			if(j == 0 && (i >= 1 && i <= 10))
			{
				soma += M[i][j];
				cont++;
			}
			if(j == 1 && (i > 1 && i < 10))
			{
				soma += M[i][j];
				cont++;
			}
			if(j == 2 && (i > 2 && i < 9))
			{
				soma += M[i][j];
				cont++;
			}
			if(j == 3 && (i > 3 && i < 8))
			{
				soma += M[i][j];
				cont++;
			}
			if(j == 4 && (i == 5 || i == 6))
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
