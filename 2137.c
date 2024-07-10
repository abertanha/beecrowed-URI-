 /*beecrowd | 2137
A Biblioteca do Senhor Severino

Por Joao Marcos Salvanini Bellini de Moraes, IFSULDEMINAS BR Brazil
Timelimit: 1

Em uma pacata cidade do interior, o senhor Severino decidiu montar a própria biblioteca, já que coleciona vários livros desde sua juventude. Como ele não sabe programar, pediu ajuda ao neto para criar um programa que cadastre e ordene seus livros pelo código. Porém, seu neto ainda está no ensino fundamental, e como sabe muito pouco de programação, acabou criando um programa que somente cadastra os livros, mas não os ordena.

Desse modo, o senhor Severino recorreu a você, pois sabe de suas habilidades com programação. Sua tarefa é simples: ordenar os cadastros dos códigos dos livros.
Entrada

A entrada contém vários casos de teste. Cada teste começa com um valor N (1 ≤ N ≤ 1000). Em seguida, N linhas terão os códigos dos livros, que estão sempre no formato "xxxx", isto é, não haverá o cadastro '1', por exemplo, mas "0001". A entrada termina com fim de arquivo.
Saída

Seu programa deverá imprimir o cadastro dos códigos ordenado. Não haverá linha em branco entre os casos de teste.
*/

#include <stdio.h>
#include <stdlib.h>

int comp(const void, const void);

int main() {
	
	int cadastros[1000], n,i = 0, j;
	
	while(scanf("%d\n", &n) != EOF)
	{
		while(i < n)
		{	
			scanf("%d",&cadastros[i++]);
		}
		j = i;
		i = 0;
		qsort(cadastros,n,sizeof(int), comp);		
		for(int k = 0; k < j;k++)
			printf("%04d\n", cadastros[k]);
	}
	 
    return 0;
}
int comp(const void *p1, const void *p2)
{
	int *i = (int *)p1, *j = (int *)p2;
	
	if(*i < *j)
		return -1;
	else
		if(*i == *j)
			return 0;
		else
			return 1;
}
