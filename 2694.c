/*beecrowd | 2694
Problema com a Calculadora

Por Neilor Tonin, URI BR Brazil
Timelimit: 1

Joãozinho tem que ajudar seu pai. Um relatório específico com alguns números está saindo com caracteres indesejáveis no meio. A ideia é apenas somar os 3 valores que aparecem em cada linha sempre na mesma posição, ignorando as letras e apresentar esta soma. Não existem espaços em branco na linha.
Entrada

A primeira linha de entrada contém um inteiro N (N < 100000). Seguem N linhas com exatos 14 caracteres que devem ser lidas e delas extraídos e somados os três números existentes.
Saída

Para cada linha de entrada, seu programa deve apresentar um valor numérico inteiro, que é a soma dos 3 números existentes na linha.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main ()
{
	int n;
	
	scanf("%d",&n);
	
	while (n > 0)
	{
		
		char string[15];
		
		scanf("%s", string);

		int n1 = (string[2] - '0')*10 + (string[3] - '0')*1;
		int n2 = (string[5] - '0')*100 + (string[6] - '0')*10 + (string[7] - '0')*1;
		int n3 = (string[11] - '0')*10 + (string[12] - '0')*1;
		
		printf("%d\n",(n1 + n2 + n3));
		n--;
	}
	return 0;
}
