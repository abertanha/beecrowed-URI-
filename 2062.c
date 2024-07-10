/* beecrowd | 2062
OBI URI

Por Neilor Tonin, URI BR Brasil
Timelimit: 1

Mariazinha criou um exercício para as suas irmãs Paula e Marta: ela distribui um texto e pede que ambas corrijam este texto, sabendo que apenas as palavras OBI e URI podem estar escritas de forma errada, e o erro pode estar apenas na última letra.

Sua tarefa aqui é automatizar este processo, ou seja, criar um programa que faça a correção dos textos distribuídos pela Mariazinha para que ela possa conferir as correções de suas irmãs sem muito trabalho.

Note que se "OB" ou "UR" forem o início ou parte de uma palavra maior, como por exemplo "OBOS" ou "URAT"), estas palavras não devem ser alteradas.
Entrada

A entrada contém duas linhas. A primeira linha contém um valor inteiro N (1 < N < 10000) que indica a quantidade de palavras do texto. A segunda linha contém as palavras do texto, cada uma com o máximo de 20 caracteres ('A'-'Z'), e com no mínimo, uma letra ('A'-'Z').
Saída

Seu programa deverá apresentar o texto que foi distribuído por Mariazinha corrigido, segundo os critérios acima estabelecidos.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
	int n;
	char frase[21];
	
	scanf("%d",&n);
	
	for(int i = 0; i < n; i++)
	{
		scanf("%s",frase);
				
		int lenght = strlen(frase);
		
		if(i > 0)
			printf(" ");
		if(lenght == 3)
		{
			if(strncmp(frase, "OB",2) == 0 || strncmp(frase, "UR",2) == 0)
			{
				frase[2] = 'I';
				printf("%s",frase);
			}
			else
				printf("%s", frase);
		}
		else
			printf("%s", frase);
	}
	printf("\n");
 
    return 0;
}
