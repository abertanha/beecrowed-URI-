/* beecrowd | 2381
Lista de Chamada

Por OBI - Olimpíada Brasileira de Informática 2010 BR Brazil
Timelimit: 1

Tia Joana é uma respeitada professora e tem vários alunos. Em sua última aula, ela prometeu que iria sortear um aluno para ganhar um bônus especial na nota final: ela colocou N pedaços de papel numerados de 1 a N em um saquinho e sorteou um determinado número K; o aluno premiado foi o K-ésimo aluno na lista de chamada.

O problema é que a Tia Joana esqueceu o diário de classe, então ela não tem como saber qual número corresponde a qual aluno. Ela sabe os nomes de todos os alunos, e que os números deles, de 1 até N, são atribuídos de acordo com a ordem alfabética, mas os alunos dela estão muito ansiosos e querem logo saber quem foi o vencedor.

Dado os nomes dos alunos da Tia Joana e o número sorteado, determine o nome do aluno que deve receber o bônus.
Entrada

A primeira linha contém dois inteiros N e K separados por um espaço em branco (1 ≤ K ≤ N ≤ 100). Cada uma das N linhas seguintes contém uma cadeia de caracteres de tamanho mínimo 1 e máximo 20 representando os nomes dos alunos. Os nomes são compostos apenas por letras minúsculas de 'a' a 'z'.
Saída

Seu programa deve imprimir uma única linha, contendo o nome do aluno que deve receber o bônus.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comp(const void *p1, const void *p2)
{
	char *i = (char*)p1, *j = (char*)p2;
	return strcmp(i,j);
}
 
int main() 
{ 
	char alunos[100][21];
	int n,k,i = 0;
	
	scanf("%d %d", &n, &k);
	
	for(i;i < n;i++)
	{
		scanf("%s", &alunos[i]);
	}
	qsort(alunos, n,sizeof(char)*21,comp);
	
	printf("%s\n", alunos[k - 1]);
	
	return 0;
}
